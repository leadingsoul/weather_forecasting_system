#ifndef WEATHERDATA_H
#define WEATHERDATA_H

#ifndef WEATHERDATE_H
#define WEATHERDATE_H
#include <QString>
class Air{
public:
    Air(){
        aqi="20";
        level="1";
    }
    QString aqi;
    QString level;
};
class Ind{
public:
    Ind(){
        level="3";
        category="较不宜";
        text="天气较好，无雨水困扰，但考虑气温很高，请注意适当减少运动时间并降低运动强度，运动后及时补充水分。";

    }
    QString category;
    QString text;
    QString level;
};

class Today{
public:
    Today(){
        date ="2024-8-17";
        city ="江北区";
        parent="重庆市";
        ganmao ="感冒指数";
        wendu= 0;
        shidu = "0%";
        pm25 = 0;
        quality="无数据";
        type = "多云";
        fl = "2级";
        fx = "南风";
        high = 30;
        low= 18;
        week=6;
    }
    QString date;
    QString city;
    QString parent;
    QString ganmao;
    QString shidu;
    QString quality;
    QString type;
    QString fl;
    QString fx;
    int week;
    int wendu;
    int pm25;
    int high;
   int low;
};

class Day{
public:
    Day()
    {
        date="2022-10-20";
        week="周五";
        type="多云";
        high=0;
        low=0;
        fx="南风";
        fl="2级";
        api=0;
    }
    QString date;
    QString week;
    QString type;
    QString fx;
    QString fl;
    int high;
    int low;
    int api;
};


class Now{
public:
    Now()
    {
        updateTime="2024-08-16T15:36+08:00";
        obsTime="2024-08-16T15:16+08:00";//数据观测时间
        temp="36";//温度
        feelsLike="38";//体感温度
        icon="100";//天气状况的图标代码
        text="晴";//天气状况的文字描述
        wind360="225";//风向360角度
        windDir="西南风";//风向
        windScale="2";//风力等级
        windSpeed="7";//风速，公里/小时
        humidity="42";//相对湿度，百分比数值
        precip="0.0";//过去1小时降水量，默认单位：毫米
        pressure="975";//大气压强，默认单位：百帕
        vis= "24";//能见度，默认单位：公里
        cloud= "10";//云量，百分比数值。可能为空
        dew="23";//露点温度。可能为空
    }
    QString updateTime;
    QString obsTime;
    QString icon;
    QString temp;
    QString feelsLike;
    QString text;
    QString wind360;
    QString windDir;
    QString windScale;
    QString windSpeed;
    QString humidity;
    QString precip;
    QString pressure;
    QString vis;
    QString cloud;
    QString dew;

};
class D7{
public:
    D7(){
        fxDate="2024-08-16";//预报日期
        sunrise= "06:23";//日出时间，在高纬度可能为空
        sunset="19:35";//日落时间，在高纬度可能为空
        moonrise= "17:04";//当天月升时间，可能为空
        moonset= "02:09";//当天日落时间，可能为空
        moonPhase= "盈凸月";//月相名称
        moonPhaseIcon= "803";//月相图标代码
        tempMax= "37";//预报当天最高温度
        tempMin= "";//预报当天最低温度
        iconDay= "";//预报白天天气状况的图标代码
        textDay= "多云";//预报白天天气状况文字描述
        iconNight= "151";//预报夜间天气状况的图标代码
        textNight= "多云";//预报晚间天气状况文字描述
        wind360Day= "270";// 预报白天风向360角度
        windDirDay= "西风";//预报白天风向
        windScaleDay= "1-3";//预报白天风力等级
        windSpeedDay= "3";//预报白天风速，公里/小时
        wind360Night= "90";//预报夜间风向360角度
        windDirNight= "东风";//预报夜间当天风向
        windScaleNight= "1-3";//预报夜间风力等级
        windSpeedNight="3";//预报夜间风速，公里/小时
        humidity= "84";//相对湿度，百分比数值
        precip="0.0";// 预报当天总降水量，默认单位：毫米
        pressure= "970";//大气压强，默认单位：百帕
        vis= "22";// 能见度，默认单位：公里
        cloud= "25";//云量，百分比数值。可能为空
        uvIndex= "10";//紫外线强度指数
    }
    QString fxDate;
    QString sunrise;
    QString sunset;
    QString moonrise;
    QString moonset;
    QString moonPhase;
    QString moonPhaseIcon;
    QString city;
    QString tempMax;
    QString tempMin;
    QString iconDay;
    QString text;
    QString textDay;
    QString wind360Day;
    QString windDirDay;
    QString wind360Night;
    QString windDirNight;
    QString windScaleNight;
    QString windSpeedNight;
    QString iconNight;
    QString textNight;
    QString windScaleDay;
    QString windSpeedDay;
    QString humidity;
    QString precip;
    QString pressure;
    QString vis;
    QString cloud;
    QString dew;
    QString uvIndex;
};
class H24{
public:
    H24()
    {
        temp="30";
        fxTime="2024-08-16T17:00+08:00";//数据观测时间
        icon="100";//天气状况的图标代码
        text="晴";//天气状况的文字描述
        wind360="198";//风向360角度
        windDir="西南风";//风向
        windScale="1-3";//风力等级
        windSpeed="7";//风速，公里/小时
        humidity="42";//相对湿度，百分比数值
        pop="7";//逐小时预报降水概率，百分比数值，可能为空
        precip="0.0";//过去1小时降水量，默认单位：毫米
        pressure="975";//大气压强，默认单位：百帕
        cloud= "10";//云量，百分比数值。可能为空
        dew="23";//露点温度。可能为空
    }
    QString fxTime;
    QString icon;
    QString temp;
    QString text;
    QString wind360;
    QString windDir;
    QString windScale;
    QString windSpeed;
    QString humidity;
    QString pop;
    QString precip;
    QString pressure;
    QString cloud;
    QString dew;
};

#endif // WEATHERDATE_H


#endif // WEATHERDATA_H
