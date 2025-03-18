# 项目描述
基于qtcreator设计的简易天气预报系统，使用和风api进行数据调用。
# 项目功能
输入中国城市名称即可跳转到对应的城市天气界面
预测7天和24小时内的天气
图标颜色随温度变化的功能
# 使用方法
在mainwindow.cpp中
QUrl urlInd("https://devapi.qweather.com/v7/indices/1d?type=3&location="+cityCode+"&key=自己的和风api的key值");//和风城市指数API

QUrl urlAir("https://devapi.qweather.com/v7/air/now?location="+cityCode+"&key=自己的和风api的key值");//和风空气指数API

QUrl url("http://t.weather.itboy.net/api/weather/city/"+cityCode);//免费天气API

QUrl urlnow("https://devapi.qweather.com/v7/weather/now?location="+cityCode+"&key=自己的和风api的key值");//和风今日天气API

QUrl url7d("https://devapi.qweather.com/v7/weather/7d?location="+cityCode+"&key=自己的和风api的key值");//和风七日天气API

QUrl url24h("https://devapi.qweather.com/v7/weather/24h?location="+cityCode+"&key=自己的和风api的key值");//和风24小时天气API
将自己注册key值替换到对应的文本中
# 参考教程
作者：明王讲QT【【QT开发专题-天气预报】1. 效果演示、技术分析】 https://www.bilibili.com/video/BV1D841147zt/?share_source=copy_web&vd_source=1b7baee6b7da44c012ffe063bdfb06a1

作者：韩酥的老猫 【免费天气API实践】https://blog.csdn.net/qq_39672028/article/details/108095626
