[Variables]
@includeVars=#@#variables.inc
tempFontSize=(40*#$#)
anchorX = (3*#tempFontSize#)

[RSS]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=https://wxdata.weather.com/wxdata/weather/local/#Location#?cc=*&unit=#Type#&dayf=6
RegExp="(?siU).*<locale>(.*)</locale>.*<ut>(.*)</ut>.*<ud>(.*)</ud>.*<us>(.*)</us>.*<up>(.*)</up>.*<ur>(.*)</ur>.*<loc id="(.*)">.*<dnam>(.*)</dnam>.*<tm>(.*)</tm>.*<lat>(.*)</lat>.*<lon>(.*)</lon>.*<sunr>(.*)</sunr>.*<suns>(.*)</suns>.*<zone>(.*)</zone>.*<cc>.*<lsup>(.*)</lsup>.*<obst>(.*)</obst>.*<tmp>(.*)</tmp>.*<flik>(.*)</flik>.*<t>(.*)</t>.*<icon>(.*)</icon>.*<bar>.*<r>(.*)</r>.*<d>(.*)</d>.*<wind>.*<s>(.*)</s>.*<gust>(.*)</gust>.*<d>(.*)</d>.*<t>(.*)</t>.*<hmid>(.*)</hmid>.*<vis>(.*)</vis>.*<uv>.*<i>(.*)</i>.*<t>(.*)</t>.*<dewp>(.*)</dewp>.*<moon>.*<icon>(.*)</icon>.*<t>(.*)</t>.*"
UpdateRate=600
StringIndex=1
IfAboveValue=1
IfAboveAction=!execute [!RainmeterHideMeter mWeatherDesc][!RainmeterHideMeter mWeatherTemp][!RainmeterShowMeter MeterText]
;Debug=1



;//-------------------------------------------//
;//------------- parser ---------------------//
;//-------------------------------------------//



[MeasureTemperature]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=17

[MeasureIcon]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=#@#Images/Weather/[RSS]
StringIndex=20



;//-------------------------------------------//
;//------------- meters --------------------//
;//-------------------------------------------//




[MeterTemp]
Meter=STRING
MeterStyle=ValueStringHugeStyle
MeasureName=MeasureTemperature
X=(#anchorX#)
Y=0
H=(2.0*#tempFontSize#)
FontSize=#tempFontSize#
FontColor=255,255,255,120
StringAlign=RIGHT
Clipping=0
Postfix=°

[MeterIcon]
Meter=IMAGE
MeasureName=MeasureIcon
X=(#anchorX#-20*#$#)
Y=(5*#$#)
W=(70*#$#)
H=(50*#$#)
Antialias=1
