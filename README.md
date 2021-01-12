SmartCommunity
================
智慧社区项目

***
## 目录
* [缓冲区](#缓冲区)
    * [传感器](#传感器)
    * [可控硅](#可控硅)
---

缓冲区
------

### 传感器
#### 颜色传感器
---
#### 可控硅

#### 数据库表
|id|data|
|--|----|
|可控硅id|操作|

~~~json
{
    "mode" : "",
    "channel_enable" : "",           
    "channnel_1_angle" : "",
    "channnel_2_angle" : "",
    "line_frequency" : "",
    "restore" : "",
    "baud_rate":"",
}
~~~

mode: 设置模式
~~~
1: 调压模式。 根据相应的导通角来输出电压。
0: 开关模式。只有开和关两种状态
~~~

channel_enable: 通道使能
~~~
3：使能两个通道
2：使能通道2，禁用通道1
1：使能通道1，禁用通道2
0：禁用两个通道
~~~

channnel_1_angle: 通道1导通角
~~~
0到179
~~~

channnel_2_angle: 通道2导通角
~~~
0到179
~~~

line_frequency: 电网频率
~~~
0x32   50Hz
0x3C   60Hz
~~~

restore
~~~
0到65536：等待n毫秒复位
~~~

baud_rate: 设置波特滤(倍率*100)
~~~
12~9216
短路RX/SCL和TX/SDA 可重置波特率为115200
~~~