[Variables]
@includeVars=#@#variables.inc
@includeStyles=#@#styles.inc

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


[mWeatherTemp]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=17


[mIcon]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=#@#Images/Weather/[RSS]
StringIndex=20

[MeterTemp]
MeasureName=mWeatherTemp
Meter=STRING
MeterStyle=TextStyle
X=(220*#$#)
Y=0
ClipString=0
FontSize=(30*#$#)
FontColor=255,255,255,80
StringAlign=RIGHT
Antialias=1
Postfix=°


[MeterPlaceName]
Meter=STRING
MeterStyle=TextStyle
X=(150*#$#)
Y=(27*#$#)r
ClipString=0
FontSize=(10*#$#)
FontColor=255,255,255,80
StringAlign=RIGHT
StringCase=UPPER
Antialias=1
Text=#PlaceName#

[MeterIcon]
MeasureName=mIcon
Meter=IMAGE
X=(195*#$#)
Y=(5*#$#)
W=(60*#$#)
H=(44*#$#)
Antialias=1
