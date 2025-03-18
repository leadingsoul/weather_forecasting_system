#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "weatherData.h"
#include "weatherInfo.h"
#include <QContextMenuEvent>
#include <QMenu>
#include <QIcon>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QMessageBox>
#include <QByteArray>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonValue>
#include <QJsonDocument>
#include <QDateTime>
#include <QLocale>
#include <QtSvgVersion>
#include <QPainter>
#include <QImage>
#include <QSvgRenderer>
#include <QColor>
#include <QPixmap>
#include <QPainterPath>
#include <QLinearGradient>
#include <QTime>
#define INCREMENT 7//温度每升高/降低1°，y轴坐标的变量
#define POINT_RADIUS 1 //曲线描点的大小
#define TEXT_OFFSET_X 7
#define TEXT_OFFSET_Y 7
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    setWindowFlag(Qt::FramelessWindowHint);
    setFixedSize(width(),height());//设置固定窗口大小
    ui->setupUi(this);
    //右键菜单退出
    exitMenu=new QMenu(this);
    exitAction =new QAction();

    exitAction->setText("退出");
    exitAction->setIcon(QIcon(":/res/fzIcon/tuichu.png"));
    exitMenu->addAction(exitAction);
    connect(exitAction, &QAction::triggered, qApp, &QCoreApplication::quit);

        //将控件添加到控件数组
    mWeek<<ui->week2<<ui->week3<<ui->week4<<ui->week5<<ui->week6<<ui->week7;
    mDate<<ui->date2<<ui->date3<<ui->date4<<ui->date5<<ui->date6<<ui->date7;

    mtempMax<<ui->tempMax1<<ui->tempMax2<<ui->tempMax3<<ui->tempMax4<<ui->tempMax5<<ui->tempMax6<<ui->tempMax7;
    mtempMin<<ui->tempMin1<<ui->tempMin2<<ui->tempMin3<<ui->tempMin4<<ui->tempMin5<<ui->tempMin6<<ui->tempMin7;
    mIconDay<<ui->IconDay1<<ui->IconDay2<<ui->IconDay3<<ui->IconDay4<<ui->IconDay5<<ui->IconDay6<<ui->IconDay7;

    mhour<<ui->hourTime1<<ui->hourTime2<<ui->hourTime3<<ui->hourTime4<<ui->hourTime5<<ui->hourTime6<<ui->hourTime7<<ui->hourTime8<<ui->hourTime9<<ui->hourTime10<<ui->hourTime11<<ui->hourTime12;
    mpop<<ui->popTime1<<ui->popTime2<<ui->popTime3<<ui->popTime4<<ui->popTime5<<ui->popTime6<<ui->popTime7<<ui->popTime8<<ui->popTime9<<ui->popTime10<<ui->popTime11<<ui->popTime12;
    //Http请求
    NetAccMan = new QNetworkAccessManager(this);
    NetAccMannow = new QNetworkAccessManager(this);
    NetAccMan7d = new QNetworkAccessManager(this);
    NetAccMan24h = new QNetworkAccessManager(this);
    NetAccManair = new QNetworkAccessManager(this);
    NetAccManind = new QNetworkAccessManager(this);
    connect(NetAccManind,&QNetworkAccessManager::finished,this ,&MainWindow::onRepliedInd);
    connect(NetAccManair,&QNetworkAccessManager::finished,this ,&MainWindow::onRepliedAir);
    connect(NetAccMan,&QNetworkAccessManager::finished,this,&MainWindow::onReplied);
    connect(NetAccMannow,&QNetworkAccessManager::finished,this,&MainWindow::onRepliednow);
    connect(NetAccMan7d,&QNetworkAccessManager::finished,this,&MainWindow::onReplied7d);
    connect(NetAccMan24h,&QNetworkAccessManager::finished,this,&MainWindow::onReplied24h);

    getWeatherInfo("沙坪坝");//直接在构造中，请求天气数据 101043700重庆市沙坪坝区
    //给标签添加事件
    //参数指定为当前窗口对象
    ui->tempCurve->installEventFilter(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//改变图片颜色
void MainWindow::setCenterImageColor(QImage &image, QColor &color)
{

    for (int y = 0; y < image.height(); ++y) {
        for (int x = 0; x < image.width(); ++x) {
            QRgb rgb = image.pixel(x, y);
            if (qAlpha(rgb) != 0) {
                image.setPixel(x, y, color.rgba());
            }
        }
    }
}
//根据温度数据改变颜色
QColor MainWindow::temperatureToColor(float temperature)
{
    float _max = 49.0f;
    float _min = -53.0f;
    float _range = _max - _min;

    if (temperature < _min) {
        return QColor(0, 0, 0); // 黑色，表示温度低于最低值
    }
    if (temperature > _max) {
        return QColor(255, 255, 255); // 白色，表示温度高于最高值
    }
    //生成颜色对应的区间
    float r = (temperature - _min) / _range;
    float step = _range / 5.0f;
    int idx = static_cast<int>(r * 5.0f);

    // 计算当前区间的上下限
    float m = _min + idx * step;
    float h = _min + (idx + 1) * step;

    // 计算在当前区间内的相对位置
    float local_r = (temperature - m) / (h - m);

    // 根据idx选择颜色映射
    switch (idx) {
    case 0: // 深蓝色到青色
        return QColor::fromRgbF(0.0f, local_r, 1.0f - local_r);
    case 1: // 青色到绿色
        return QColor::fromRgbF(0.0f, 1.0f, 1.0f - local_r);
    case 2: // 绿色到黄色
        return QColor::fromRgbF(local_r, 1.0f, 0.0f);
    case 3: // 黄色到橙色
        return QColor::fromRgbF(1.0f, local_r, 0.0f);
    case 4: // 橙色到红色
        return QColor::fromRgbF(1.0f, (1.0f-local_r)/2, 0.0f);
    default:
        return QColor(0, 0, 0);
    }
}

QLinearGradient MainWindow::paintGradientEvent(QColor temp1color, QColor temp2color)
{
    QLinearGradient gradient(0, 0, width(), height());

    // 定义渐变颜色
    gradient.setColorAt(0.0, temp1color); // 起点颜色
    gradient.setColorAt(1.0, temp2color);  // 终点颜色
    return gradient;
}

QColor MainWindow::temperatureToDeeperColor(float temperature)
{
    float _max = 49.0f;
    float _min = -50.0f;
    float _range = _max - _min;

    if (temperature < _min) {
        return QColor(0, 0, 0); // 黑色，表示温度低于最低值
    }
    if (temperature > _max) {
        return QColor(255, 255, 255); // 白色，表示温度高于最高值
    }

    //生成颜色对应的区间
    float r = (temperature - _min) / _range;
    float step = _range / 4.7f;
    int idx = static_cast<int>(r * 5);

    // 计算当前区间的上下限
    float m = _min + idx * step;
    float h = _min + (idx + 1) * step;

    // 计算在当前区间内的相对位置
    float local_r = (temperature - m) / (h - m);

    // 根据idx选择颜色映射
    switch (idx) {
    case 0: // 深蓝色到青色
        return QColor::fromRgbF(0.0f, local_r, 1.0f - local_r,0.1);
    case 1: // 青色到绿色
        return QColor::fromRgbF(0.0f, 0.6f, (1.0f - local_r)/2,0.1);
    case 2: // 绿色到黄色
        return QColor::fromRgbF(local_r/6, 0.34f, 0.20f,0.4);
    case 3: // 黄色到橙色
        return QColor::fromRgbF(0.48823f, (1.0f-local_r)/3, 0.21f,0.5);
    case 4: // 橙色到红色
        return QColor::fromRgbF(0.58823f, (1.0f-local_r)/3, 0.21f,0.6);
    default:
        return QColor(0, 0, 0);
    }
}

bool MainWindow::eventFilter(QObject *watched, QEvent *event)
{
    if(watched == ui->tempCurve&&event->type()==QEvent::Paint){
        paintTempCurve();
    }
    return QWidget::eventFilter(watched,event);
}
//绘制图表
void MainWindow::paintTempCurve()
{
    QPainter painter(ui->tempCurve);

    //抗锯齿
    painter.setRenderHint(QPainter::Antialiasing,true);
    painter.setRenderHint(QPainter::SmoothPixmapTransform,true);
    //获取tempCurve的x坐标
    int pointx[24]={0};
    for(int i=0;i<12;i++){
        pointx[i*2]=mhour[i]->pos().x()+mhour[i]->width()/2;
       // qDebug()<<i*2<<pointx[i*2];
    }
    for(int j=0;j<12;j++){
        pointx[j*2+1]=mhour[j]->pos().x()+mhour[j]->width();
        //qDebug()<<j*2+1<<pointx[j*2+1];
    }
    //获取y坐标
    int tempSum=0;
    int tempAverage=0;
    for(int i=0;i<24;i++){
        tempSum += hf24hour[i].temp.toInt();
    }//平均值
    tempAverage = static_cast<int>(tempSum/24);
    int pointy[24]={0};
    int Ycenter = ui->tempCurve->height()/2;
    //qDebug()<<hf24hour[0].fxTime;
    for(int j=0;j<24;j++){
        pointy[j] = Ycenter - ((hf24hour[j].temp.toInt() - tempAverage) *INCREMENT);
        //qDebug()<<"  "<<j<<"x="<<pointx[j]<<"y="<<pointy[j];
    }
    //绘制
    QPen pen=painter.pen();
    QPen penText=painter.pen();
    pen.setWidth(1);//设置宽度
    penText.setWidth(1);
    penText.setColor(QColor(255,255,255));
    pen.setColor(QColor(142,122,139));//设置颜色

    //画点/文本
    for(int i=0;i<12;i++){
        painter.setPen(pen);
        painter.setBrush(QColor(142,122,139));
        painter.drawEllipse(QPoint(pointx[i*2],pointy[i*2]),POINT_RADIUS,POINT_RADIUS);
        painter.setPen(penText);
        painter.drawText(pointx[i*2]-TEXT_OFFSET_X,pointy[i*2]-TEXT_OFFSET_Y,hf24hour[i*2].temp+"°");
    }
    //绘制曲线
    painter.setPen(pen);
    painter.drawLine(mhour[0]->pos().x(),ui->tempCurve->height()/2,pointx[0],pointy[0]);
    for(int i=0;i<23;i++){
        painter.drawLine(pointx[i],pointy[i],pointx[i+1],pointy[i+1]);
        //qDebug()<<pointx[i]<<pointy[i]<<pointx[i+1]<<pointy[i+1];
    }
    painter.drawLine(pointx[23],pointy[23],ui->tempCurve->width(),ui->tempCurve->height()/2);
    //填充曲线下方区域
    QPainterPath path;
    path.moveTo(mhour[0]->pos().x(), ui->tempCurve->height()); // 从底部开始
    path.lineTo(mhour[0]->pos().x(),ui->tempCurve->height()/2);// 第一个点
    path.lineTo(pointx[0], pointy[0]);
    for (int i = 0; i < 23; ++i) {
        path.lineTo(pointx[i + 1], pointy[i + 1]); // 连接所有点
    }
    path.lineTo(ui->tempCurve->width(),ui->tempCurve->height()/2);
    path.lineTo(ui->tempCurve->width(), ui->tempCurve->height());
    path.lineTo(pointx[0], ui->tempCurve->height()); // 闭合多边形

    // 填充曲线下方的区域
    painter.setBrush(QColor(100, 100, 255, 100)); // 半透明蓝色
    painter.fillPath(path, painter.brush());

    QPainterPath path1;
    path1.moveTo(mhour[0]->pos().x(), ui->tempCurve->height()); // 从底部开始
    path1.lineTo(mhour[0]->pos().x(),ui->tempCurve->height()/2);// 第一个点
    path1.lineTo(pointx[0], pointy[0]);
    path1.lineTo(pointx[0],ui->tempCurve->height());//闭合多边形
    //调配渐变颜色
    QColor startColor = temperatureToDeeperColor(tempAverage);
    QColor endColor = temperatureToDeeperColor(hf24hour[0].temp.toFloat());
    QLinearGradient gradient = paintGradientEvent(startColor, endColor);
    //填充曲线下方区域
    painter.setBrush(gradient);
    painter.fillPath(path1, painter.brush());
    for(int i= 0;i<24;i++){
        if(i<23){
            QPainterPath path;
            //从底部开始
            path.moveTo(pointx[i],ui->tempCurve->height());
            path.lineTo(pointx[i],pointy[i]);
            path.lineTo(pointx[i+1],pointy[i+1]);
            path.lineTo(pointx[i+1],ui->tempCurve->height());//闭合多边形
            //调配渐变颜色
            QColor startColor = temperatureToDeeperColor(hf24hour[i].temp.toFloat());
            QColor endColor = temperatureToDeeperColor(hf24hour[i+1].temp.toFloat());
            QLinearGradient gradient = paintGradientEvent(startColor, endColor);

            // 填充曲线下方的区域
            painter.setBrush(gradient);
            painter.fillPath(path, painter.brush());
        }
        else if(i==23){
            QPainterPath path;
            path.moveTo(pointx[23],ui->tempCurve->height());
            path.lineTo(pointx[23],pointy[23]);
            path.lineTo(ui->tempCurve->width(), ui->tempCurve->height()/2);
            path.lineTo(ui->tempCurve->width(), ui->tempCurve->height()); // 闭合多边形
            //调配渐变颜色
            QColor endColor = temperatureToDeeperColor(tempAverage);
            QColor startColor = temperatureToDeeperColor(hf24hour[23].temp.toFloat());
            QLinearGradient gradient = paintGradientEvent(startColor, endColor);
            // 填充曲线下方的区域
            painter.setBrush(gradient);
            painter.fillPath(path, painter.brush());
        }
    }



}
//解析Json文件数据
void MainWindow::parseJson(QByteArray &byteArray)
{

    QJsonParseError err;
    QJsonDocument doc=QJsonDocument::fromJson(byteArray,&err);
    if(err.error!=QJsonParseError::NoError){
        return;
    }
    QJsonObject rootObj = doc.object();
    //qDebug()<<rootObj.value("message").toString();
    hftoday.date = rootObj.value("date").toString();
    if(rootObj.value("cityInfo").toObject().value("city").toString()=="江北区"){
        hftoday.city="沙坪坝区";
    }
    else{
        hftoday.city = rootObj.value("cityInfo").toObject().value("city").toString();
    }
    hftoday.parent=rootObj.value("cityInfo").toObject().value("parent").toString();
    QJsonObject objData =rootObj.value("data").toObject();
    //yesterday
    QJsonObject objYesterday =objData.value("yesterday").toObject();
    hfday[0].week =objYesterday.value("week").toString();
    hfday[0].date =objYesterday.value("date").toString();
    //5天
    QJsonArray forecastArr = objData.value("forecast").toArray();
    for(int i=0;i<5;i++){
        QJsonObject objForecast = forecastArr[i].toObject();
        hfday[i+1].week=objForecast.value("week").toString();
        hfday[i+1].date=objForecast.value("date").toString();
    }
//qDebug()<<"hfnow.feelsLike111"<<hfnow.feelsLike;
    updateUItoday();
}

void MainWindow::parseJson7d(QByteArray &byteArray)
{
    QJsonParseError err;
    QJsonDocument doc=QJsonDocument::fromJson(byteArray,&err);
    if(err.error!=QJsonParseError::NoError){
        return;
    }
    QJsonObject rootObj = doc.object();
    QJsonArray Day7=rootObj.value("daily").toArray();
//qDebug()<<rootObj.value("updateTime").toString();
    for(int i=0;i<7;i++){
        QJsonObject objDay7 = Day7[i].toObject();
        hf7day[i].fxDate=objDay7.value("fxDate").toString();

        hf7day[i].sunrise=objDay7.value("sunrise").toString();
        hf7day[i].sunset=objDay7.value("sunset").toString();
        hf7day[i].moonrise=objDay7.value("moonrise").toString();
        hf7day[i].moonset=objDay7.value("moonset").toString();
        hf7day[i].moonPhase=objDay7.value("moonPhase").toString();
        hf7day[i].moonPhaseIcon=objDay7.value("moonPhaseIcon").toString();

        hf7day[i].tempMax=objDay7.value("tempMax").toString();
        hf7day[i].tempMin=objDay7.value("tempMin").toString();
        hf7day[i].iconDay=objDay7.value("iconDay").toString();
        hf7day[i].textDay=objDay7.value("textDay").toString();
        hf7day[i].iconNight=objDay7.value("iconNightn").toString();
        hf7day[i].textNight=objDay7.value("textNight").toString();

        hf7day[i].wind360Day=objDay7.value("wind360Day").toString();
        hf7day[i].windDirDay=objDay7.value("windDirDay").toString();
        hf7day[i].windSpeedDay=objDay7.value("windSpeedDay").toString();
        hf7day[i].windScaleDay=objDay7.value("windScaleDay").toString();
        hf7day[i].windSpeedNight=objDay7.value("windSpeedNight").toString();
        hf7day[i].windDirNight=objDay7.value("windDirNight").toString();
        hf7day[i].wind360Night=objDay7.value("wind360Night").toString();

        hf7day[i].humidity=objDay7.value("humidity").toString();
        hf7day[i].windScaleNight=objDay7.value("windScaleNight").toString();
        hf7day[i].precip=objDay7.value("precip").toString();
        hf7day[i].vis=objDay7.value("vis").toString();
        hf7day[i].pressure=objDay7.value("pressure").toString();
        hf7day[i].cloud=objDay7.value("cloud").toString();
        hf7day[i].uvIndex=objDay7.value("uvIndex").toString();

       // qDebug()<<hf7day[i].textDay;
    }
    updateUI7d();
}
void MainWindow::parseJson24h(QByteArray &byteArray)
{
    QJsonParseError err;
    QJsonDocument doc24h=QJsonDocument::fromJson(byteArray,&err);
    if(err.error!=QJsonParseError::NoError){
        return;
    }
    QJsonObject rootObj = doc24h.object();
    QJsonArray Hour24=rootObj.value("hourly").toArray();
    //qDebug()<<rootObj.value("updateTime").toString();
    for(int i=0;i<24;i++){
        QJsonObject objHour24 = Hour24[i].toObject();
        hf24hour[i].fxTime=objHour24.value("fxTime").toString();
        hf24hour[i].temp=objHour24.value("temp").toString();
        hf24hour[i].icon=objHour24.value("icon").toString();
        hf24hour[i].text=objHour24.value("text").toString();

        hf24hour[i].windDir=objHour24.value("windDir").toString();
        hf24hour[i].wind360=objHour24.value("wind360").toString();
        hf24hour[i].windSpeed=objHour24.value("windSpeed").toString();
        hf24hour[i].windScale=objHour24.value("windScale").toString();

        hf24hour[i].pop=objHour24.value("pop").toString();
        hf24hour[i].humidity=objHour24.value("humidity").toString();
        hf24hour[i].precip=objHour24.value("precip").toString();
        hf24hour[i].pressure=objHour24.value("pressure").toString();
        hf24hour[i].cloud=objHour24.value("cloud").toString();
        hf24hour[i].dew=objHour24.value("dew").toString();

    }
    updateUI24h();
}

void MainWindow::parseJsonAir(QByteArray &byteArray)
{
    QJsonParseError err;
    QJsonDocument docAir=QJsonDocument::fromJson(byteArray,&err);
    if(err.error!=QJsonParseError::NoError){
        return;
    }
    QJsonObject rootObj = docAir.object();
    //qDebug()<<rootObj.value("updateTime").toString();
    hfair.aqi=rootObj.value("now").toObject().value("aqi").toString();
    hfair.level=rootObj.value("now").toObject().value("level").toString();
    updateUIAir();
}

void MainWindow::parseJsonInd(QByteArray &byteArray)
{
    QJsonParseError err;
    QJsonDocument docInd=QJsonDocument::fromJson(byteArray,&err);
    if(err.error!=QJsonParseError::NoError){
        return;
    }
    QJsonObject rootObj = docInd.object();
    //qDebug()<<rootObj.value("updateTime").toString();
    QJsonArray dailyArr = rootObj.value("daily").toArray();
    for(int i=0;i<1;i++){
        QJsonObject dailyObj=dailyArr[i].toObject();
        hfInd[i].category=dailyObj.value("category").toString();
        hfInd[i].level=dailyObj.value("level").toString();
        hfInd[i].text=dailyObj.value("text").toString();
    }
    updateUIind();
}

void MainWindow::parseJsonnow(QByteArray &byteArray)
{
    QJsonParseError err;
    QJsonDocument doc=QJsonDocument::fromJson(byteArray,&err);
    if(err.error!=QJsonParseError::NoError){
        return;
    }
    QJsonObject rootObj = doc.object();

    //1.解析现在的数据
    qDebug()<<rootObj.value("updateTime").toString();
    hfnow.updateTime = rootObj.value("updateTime").toString();
    QJsonObject hfnowObj =rootObj.value("now").toObject();
    //qDebug()<<hfnowObj;
    hfnow.obsTime = hfnowObj.value("obsTime").toString();
    hfnow.temp = hfnowObj.value("temp").toString();
    hfnow.feelsLike = hfnowObj.value("feelsLike").toString();
    hfnow.icon = hfnowObj.value("icon").toString();
    hfnow.text = hfnowObj.value("text").toString();
    hfnow.wind360 = hfnowObj.value("wind360").toString();
    hfnow.windDir = hfnowObj.value("windDir").toString();
    hfnow.windScale= hfnowObj.value("windScale").toString();
    hfnow.windSpeed= hfnowObj.value("windSpeed").toString();
    hfnow.humidity = hfnowObj.value("humidity").toString();
    hfnow.precip = hfnowObj.value("precip").toString();
    hfnow.pressure = hfnowObj.value("pressure").toString();
    hfnow.vis = hfnowObj.value("vis").toString();
    hfnow.cloud = hfnowObj.value("cloud").toString();
    hfnow.dew = hfnowObj.value("dew").toString();
    //qDebug()<<hfnow.dew<<hfnow.pressure<<hfnow.temp<<hfnow.feelsLike<<hfnow.windDir<<hfnow.updateTime<<hfnow.precip;
    updateUInow();

}
//更新ui
void MainWindow::updateUInow()
{
    //更新日期和城市
    qDebug()<<"updatenow success";
    QString updateTimestr =hfnow.updateTime;
    updateTimestr.chop(6);
    QDateTime updateTime =QDateTime::fromString(updateTimestr,"yyyy-MM-ddThh:mm");
    // 获取星期几
    QLocale locale;
    QString dayOfWeek=locale.dayName(updateTime.date().dayOfWeek(), QLocale::LongFormat);
    QString formattedDateTime = updateTime.toString("yyyy-MM-dd hh:mm") + " - " + dayOfWeek;
    ui->date1->setText(formattedDateTime);
    //更新今日数据

    ui->text->setText(hfnow.text);
    ui->dew->setText(hfnow.dew+"℃");
    ui->pressure->setText( hfnow.pressure+"hPa");
    ui->todayWendu->setText( hfnow.temp+"℃");
    ui->feelsLike->setText(hfnow.feelsLike+"℃");
    ui->humidity->setText( hfnow.humidity+"%");
    ui->labelvis->setText( hfnow.vis+" 公里");
    ui->windDir->setText(hfnow.windDir+" "+ (hfnow.windScale)+"级");
    ui->cloud->setText(hfnow.cloud+"%");
    ui->xiayu->setText(hfnow.precip+"mm");
    ui->sunrise->setText(hf7day[0].sunrise);
    ui->sunset->setText(hf7day[0].sunset);
    //计算时间差
    QTime sunriseTime = QTime::fromString(hf7day[0].sunrise, "hh:mm");
    QTime sunsetTime = QTime::fromString(hf7day[0].sunset, "hh:mm");
    // 计算时间差（由于日出在日落之前，我们需要加上一天的秒数）
    qint64 secs = sunsetTime.secsTo(sunriseTime.addSecs(86400));
    // 将秒转换为小时、分钟和秒
    int hours = secs / 3600;
    int minutes = (secs % 3600) / 60;
    int seconds = secs % 60;
    // 格式化时间差字符串
    QString timeDifference = QString("%1h %2m %3s").arg(hours).arg(minutes, 2, 10, QLatin1Char('0')).arg(seconds, 2, 10, QLatin1Char('0'));
    // 设置QLabel的文本
    ui->suntime->setText(timeDifference);
    QString iconimagePath=":/res/icon/icons/"+hfnow.icon+"-fill.svg";
    QSvgRenderer svgRenderer(iconimagePath);
    //创建QImage对象
    QSize size(115, 115);
    m_Iconimage = QImage(size, QImage::Format_ARGB32_Premultiplied);
    m_Iconimage.fill(Qt::transparent);
    //用QPainter渲染SVG到QImage
    QPainter painter(&m_Iconimage);
    painter.setRenderHint(QPainter::Antialiasing,true);
    painter.setRenderHint(QPainter::SmoothPixmapTransform,true);//抗锯齿
    svgRenderer.render(&painter);

    // 颜色设置
    QColor color=temperatureToColor(hfnow.temp.toFloat());
    setCenterImageColor(m_Iconimage, color);
    QPixmap pixmap = QPixmap::fromImage(m_Iconimage);
    ui->icon->setPixmap(pixmap);
    ui->icon->resize(pixmap.size());

}
//更新七天数据
void MainWindow::updateUI7d()
{
    qDebug()<<"updateUI7d, succeed!";
    //更新日期和星期
    for(int i=0;i<6;i++){
        QString updateTimestr =hf7day[i+1].fxDate;
        QDateTime updateTime =QDateTime::fromString(updateTimestr,"yyyy-MM-dd");
        // 获取星期几
        QLocale locale;
        QString dayOfWeek=locale.dayName(updateTime.date().dayOfWeek(), QLocale::LongFormat);
        mWeek[i]->setText("周"+dayOfWeek.right(1));
        mDate[i]->setText(QDateTime::fromString(hf7day[i+1].fxDate,"yyyy-MM-dd").toString("dd")+"日");
    }//更新最大温度和最低温度
    for(int j=0;j<7;j++){
        mtempMax[j]->setText(hf7day[j].tempMax+"°");
        mtempMin[j]->setText(hf7day[j].tempMin+"°");
        QString iconimagePath=":/res/icon/icons/"+hf7day[j].iconDay+"-fill.svg";
        QSvgRenderer svgRenderer(iconimagePath);
        QSize size(67, 67);
        m_Iconimage = QImage(size, QImage::Format_ARGB32_Premultiplied);
        m_Iconimage.fill(Qt::transparent);

        QPainter painter(&m_Iconimage);
        painter.setRenderHint(QPainter::Antialiasing,true);
        painter.setRenderHint(QPainter::SmoothPixmapTransform,true);//抗锯齿
        svgRenderer.render(&painter);

        // 颜色设置
        QColor color=temperatureToColor(hf7day[j].tempMax.toFloat());
        setCenterImageColor(m_Iconimage, color);
        QPixmap pixmap = QPixmap::fromImage(m_Iconimage);
        mIconDay[j]->setPixmap(pixmap);
        mIconDay[j]->resize(pixmap.size());
    }
    QString iconimagePath=":/res/icon/icons/"+hf7day[0].moonPhaseIcon+".svg";
    qDebug()<<hf7day[0].moonPhaseIcon;
    QSvgRenderer svgRenderer(iconimagePath);
    QSize size(31, 31);
    m_Iconimage = QImage(size, QImage::Format_ARGB32_Premultiplied);
    m_Iconimage.fill(Qt::transparent);

    QPainter painter(&m_Iconimage);
    painter.setRenderHint(QPainter::Antialiasing,true);
    painter.setRenderHint(QPainter::SmoothPixmapTransform,true);//抗锯齿
    svgRenderer.render(&painter);

    // 颜色设置
    QColor color(197,187,173);
    setCenterImageColor(m_Iconimage, color);
    QPixmap pixmap = QPixmap::fromImage(m_Iconimage);
    ui->ziwaixian->setText(hf7day[0].uvIndex);
    ui->yuexiang->setText(hf7day[0].moonPhase);
    ui->yuexiangIcon->setPixmap(pixmap);
    ui->yuexiangIcon->resize(pixmap.size());
}

void MainWindow::updateUItoday()
{
    ui->cityLabel->setText(hftoday.parent+" , "+hftoday.city);
}

void MainWindow::updateUIAir()
{
    ui->quality->setText((hfair.aqi));
    QString hfairlevelstr=hfair.level;
    int hfairlevel=hfairlevelstr.toInt();
    if(hfairlevel==1){ui->qualitylevel->setStyleSheet("background-color:rgb(155,214,77)");}
    else if(hfairlevel==2){ui->qualitylevel->setStyleSheet("background-color:rgb(243,201,56)");}
    else if(hfairlevel==3){ui->qualitylevel->setStyleSheet("background-color:rgb(247,143,72)");}
    else if(hfairlevel==4){ui->qualitylevel->setStyleSheet("background-color:rgb(243,93,94)");}
    else if(hfairlevel==5){ui->qualitylevel->setStyleSheet("background-color:rgb(159,111,181)");}
    else if(hfairlevel==6){ui->qualitylevel->setStyleSheet("background-color:rgb(159,105,122)");}
}

void MainWindow::updateUIind()
{
    ui->Ganmao->setText(hfInd[0].text);
}

void MainWindow::updateUI24h()
{
    for(int i=0;i<12;i++){
        QString fxTimestr=hf24hour[i*2].fxTime;
        fxTimestr.chop(6);
        QDateTime updateTime =QDateTime::fromString(fxTimestr,"yyyy-MM-ddThh:mm");
        mhour[i]->setText(updateTime.toString("hh:mm"));
        mpop[i]->setText(hf24hour[i*2].pop+"%");
    }
    ui->tempCurve->update();
}
void MainWindow::getWeatherInfo(QString cityName)
{
    QString cityCode = WeatherInfo::getCityCode(cityName);
    if(cityCode.isEmpty()){
        cityCode = WeatherInfo::getCityProvinceMap(cityName);
            if(cityCode.isEmpty()){
                QMessageBox::warning(this,"天气","请检查输入是否正确！",QMessageBox::Ok);
                return;
            }
        }

    QUrl urlInd("https://devapi.qweather.com/v7/indices/1d?type=3&location="+cityCode+"&key=自己的和风api的key值");//和风城市指数API
    QUrl urlAir("https://devapi.qweather.com/v7/air/now?location="+cityCode+"&key=自己的和风api的key值");//和风空气指数API
    QUrl url("http://t.weather.itboy.net/api/weather/city/"+cityCode);//免费天气API
    QUrl urlnow("https://devapi.qweather.com/v7/weather/now?location="+cityCode+"&key=自己的和风api的key值");//和风今日天气API
    QUrl url7d("https://devapi.qweather.com/v7/weather/7d?location="+cityCode+"&key=自己的和风api的key值");//和风七日天气API
    QUrl url24h("https://devapi.qweather.com/v7/weather/24h?location="+cityCode+"&key=自己的和风api的key值");//和风24小时天气API
    NetAccManair->get(QNetworkRequest(urlAir));
    NetAccManind->get(QNetworkRequest(urlInd));
    NetAccMan->get(QNetworkRequest(url));
    NetAccMannow->get(QNetworkRequest(urlnow));
    NetAccMan7d->get(QNetworkRequest(url7d));
    NetAccMan24h->get(QNetworkRequest(url24h));
}
void MainWindow::onRepliedInd(QNetworkReply *reply)
{
    qDebug()<<"RepliedInd Succeed";
    int status_codeind=reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt();
    qDebug()<<status_codeind;
    if(reply->error()!=QNetworkReply::NoError||status_codeind!=200){
        qDebug()<<reply->errorString().toLatin1().data();
        QMessageBox::warning(this,"天气","请求数据失败");
    }else{
        QByteArray byteArrayInd =reply->readAll();
        //qDebug()<<"Ind!!!!!!!!!"<<byteArrayInd.data();
        parseJsonInd(byteArrayInd);
    }
    reply->deleteLater();
}
void MainWindow::onRepliedAir(QNetworkReply *reply)
{
    qDebug()<<"RepliedAir Succeed";
    int status_codeair=reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt();
    qDebug()<<status_codeair;
    if(reply->error()!=QNetworkReply::NoError||status_codeair!=200){
        //qDebug()<<reply->errorString().toLatin1().data();
        QMessageBox::warning(this,"天气","请求数据失败");
    }else{
        QByteArray byteArrayAir =reply->readAll();
        //qDebug()<<"air!!!!!!"<<byteArrayAir.data();
        parseJsonAir(byteArrayAir);
    }
    reply->deleteLater();
}
void MainWindow::onReplied(QNetworkReply *reply)
{
    //qDebug()<<"Replied Succeed";
    int status_code=reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt();
    //qDebug()<<status_code;
    if(reply->error()!=QNetworkReply::NoError||status_code!=200){
        //qDebug()<<reply->errorString().toLatin1().data();
        QMessageBox::warning(this,"天气","请求数据失败");
    }else{
        QByteArray byteArray =reply->readAll();
        //qDebug()<<""<<byteArray.data();
        parseJson(byteArray);
    }
    reply->deleteLater();
}
void MainWindow::onReplied7d(QNetworkReply *reply)
{
    //qDebug()<<"Replied7d Succeed";
    int status_code7d=reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt();
    //qDebug()<<status_code7d;
    if(reply->error()!=QNetworkReply::NoError||status_code7d!=200){
        //qDebug()<<reply->errorString().toLatin1().data();
        QMessageBox::warning(this,"天气","请求数据失败");
    }else{
        QByteArray byteArray7d =reply->readAll();
        //qDebug()<<""<<byteArray7d.data();
        parseJson7d(byteArray7d);
    }
    reply->deleteLater();
}

void MainWindow::onReplied24h(QNetworkReply *reply)
{
    //qDebug()<<"Replied24h Succeed";
    int status_code24h=reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt();
    //qDebug()<<status_code24h;
    if(reply->error()!=QNetworkReply::NoError||status_code24h!=200){
       // qDebug()<<reply->errorString().toLatin1().data();
        QMessageBox::warning(this,"天气","请求数据失败");
    }else{
        QByteArray byteArray24h =reply->readAll();
        //qDebug()<<""<<byteArray24h.data();
       parseJson24h(byteArray24h);
    }
    reply->deleteLater();
}

void MainWindow::onRepliednow(QNetworkReply *reply)
{
   // qDebug()<<"Repliednow Succeed";
    int status_codenow=reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt();
    //qDebug()<<status_codenow;
    if(reply->error()!=QNetworkReply::NoError||status_codenow!=200){
        qDebug()<<reply->errorString().toLatin1().data();
        QMessageBox::warning(this,"天气","请求数据失败");
    }else{
        QByteArray byteArraynow =reply->readAll();
        //qDebug()<<""<<byteArraynow.data();
        parseJsonnow(byteArraynow);
    }
    reply->deleteLater();
}
void MainWindow::contextMenuEvent(QContextMenuEvent *event){
    exitMenu->exec(event->globalPos());//弹出右键菜单
    event->accept();
}

void MainWindow::mousePressEvent(QMouseEvent *event)
{
    offSet = event->globalPosition().toPoint() - this->pos();

}

void MainWindow::mouseMoveEvent(QMouseEvent *event)
{
    this->move(event->globalPosition().toPoint() - offSet);

}

void MainWindow::on_searchbtn_clicked()
{
    qDebug()<<"searchbtn_clicked";
    QString cityName =ui->searchEdit->text();
    getWeatherInfo(cityName);
    ui->searchEdit->clear();

}


void MainWindow::on_searchEdit_returnPressed()
{
    on_searchbtn_clicked();
}

