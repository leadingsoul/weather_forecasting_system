#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "weatherData.h"
#include <QMainWindow>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QList>
#include <QContextMenuEvent>
#include <QLabel>
#include <QMouseEvent>
#include <QLinearGradient>
QT_BEGIN_NAMESPACE

class QNetworkReply;

class QNetworkAccessManager;
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private:
    void onRepliedInd(QNetworkReply * reply);
    void onRepliedAir(QNetworkReply * reply);
    void onReplied(QNetworkReply * reply);
    void onRepliednow(QNetworkReply * reply);
    void onReplied7d(QNetworkReply * reply);
    void onReplied24h(QNetworkReply * reply);

private:
    Ui::MainWindow *ui;

protected:
    void contextMenuEvent(QContextMenuEvent *event) override;

    void mousePressEvent(QMouseEvent* event);
    void mouseMoveEvent(QMouseEvent* event);
    //获取天气数据
    void getWeatherInfo(QString cityCode);
    void parseJson(QByteArray& byteArray);
    void parseJsonnow(QByteArray& byteArray);
    void parseJson7d(QByteArray& byteArray);
    void parseJson24h(QByteArray& byteArray);
    void parseJsonAir(QByteArray& byteArray);
    void parseJsonInd(QByteArray& byteArray);

    //更新ui
    void updateUInow();
    void updateUI7d();
    void updateUItoday();
    void updateUIAir();
    void updateUIind();
    void updateUI24h();
    //改变图片颜色
    void setCenterImageColor(QImage &image, QColor &color);
    QColor temperatureToColor(float temperature);
    QLinearGradient paintGradientEvent(QColor temp1color,QColor temp2color);
    QColor temperatureToDeeperColor(float temperature);

    //重写父类的eventfilter方法
    bool eventFilter(QObject* watched , QEvent* event);
    //绘制温度曲线的函数
    void paintTempCurve();
private slots:
    void on_searchbtn_clicked();

    void on_searchEdit_returnPressed();

private:
    QMenu * exitMenu;//右键菜单
    QAction * exitAction;//菜单退出项
    QPoint offSet;//窗口移动时，鼠标与左上角的偏移
    //改变svg图片颜色
    QImage m_Iconimage;

    //Http请求
    QNetworkAccessManager* NetAccMan;
    QNetworkAccessManager* NetAccMannow;
    QNetworkAccessManager* NetAccMan7d;
    QNetworkAccessManager* NetAccMan24h;
    QNetworkAccessManager* NetAccManair;
    QNetworkAccessManager* NetAccManind;
    //创建天气数据族类
    Today hftoday;
    Now hfnow;
    D7 hf7day[7];
    H24 hf24hour[24];
    Day hfday[6];
    Air hfair;
    Ind hfInd[1];
    //七天的天气和天气图标
    QList<QLabel*>  mSunrise;//日升
    QList<QLabel*> mSunset;//日落
    QList<QLabel*> mMoonrise;//月升
    QList<QLabel*> mMoonset;//月落
    QList<QLabel*>  mtempMax;//最高温
    QList<QLabel*> mtempMin;//最低温
    QList<QLabel*> mMoonPhase;//月相
    QList<QLabel*> mMoonPhaseIcon;//月相图案
    QList<QLabel*>  mIconDay;//白天图案
    QList<QLabel*> mTextDay;//白天
    QList<QLabel*> mPrecip;//降水量
    QList<QLabel*> mUvIndex;//紫外线
    //二十四小时的温度和降水概率
    QList<QLabel*> mhour;//小时
    QList<QLabel*> mtemp;//温度
    QList<QLabel*> mpop;//降水概率
    //日期和星期
    QList<QLabel*> mWeek;//星期
    QList<QLabel*> mDate;//日期
    QList<QColor> colors = {QColor(0, 222, 255), QColor(132, 197, 209), QColor(167, 183, 181),
                            QColor(210, 156, 141), QColor(247, 115, 85), QColor(253, 63, 2)};
};
#endif // MAINWINDOW_H
