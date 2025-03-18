#ifndef WEATHERINFO_H
#define WEATHERINFO_H

#include <QMap>
#include <QFile>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonValue>
#include <QJsonParseError>
class WeatherInfo{
private:
    static QMap<QString,QString> mCityMap;
    static QMap<QString,QString> mCityProvinceMap;

public:

    static QString getCityProvinceMap(QString cityName){
        qDebug()<<"getCityProvinceMap";
        if(mCityProvinceMap.isEmpty()){
            initCityMap();
        }
        QMap<QString,QString>::iterator its = mCityProvinceMap.find(cityName);
        if(its == mCityMap.end()){
            its=mCityProvinceMap.find(cityName+"市");
        }
        if(its !=mCityProvinceMap.end()){
            return its.value();
        }
        return "";
    }


    static QString getCityCode(QString cityName){
        if(mCityMap.isEmpty()){
            initCityMap();
        }
        QMap<QString,QString>::iterator it =  mCityMap.find(cityName);
        //北京/北京市
        if(it == mCityMap.end()){
            it=mCityMap.find(cityName+"市");
        }
        if(it !=mCityMap.end()){
            return it.value();
        }
        return "";
    }


    static void initCityMap(){
        //1读取文件
        qDebug()<<"initCityMap success!!!";
        QString filePath = ":/citycode.json";
        QFile file(filePath);
        file.open(QIODevice::ReadOnly | QIODevice::Text);
        QByteArray json = file.readAll();
        file.close();
        //2解析，并写入到map
        QJsonParseError err;
        QJsonDocument doc = QJsonDocument::fromJson(json,&err);
        if(err.error != QJsonParseError::NoError){
            return;
        }
        QJsonObject rootObj = doc.object();
        QJsonArray provinceList=rootObj.value("city_code").toArray();
        for(int i=0;i<provinceList.size();i++){
            QString province = provinceList[i].toObject().value("Province").toString();
            QJsonArray citiesList = provinceList[i].toObject().value("citys").toArray();
            for(int j=0;j<citiesList.size();j++){
                QString provincecity = province+"，"+citiesList[j].toObject().value("city").toString();
                QString city = citiesList[j].toObject().value("city").toString();
                QString code = citiesList[j].toObject().value("code").toString();
                //qDebug()<<provincecity;
                mCityProvinceMap.insert(provincecity,code);
                mCityMap.insert(city,code);
            }
        }

    }
};

QMap<QString,QString> WeatherInfo::mCityMap={};
QMap<QString,QString> WeatherInfo::mCityProvinceMap={};


#endif // WEATHERINFO_H
