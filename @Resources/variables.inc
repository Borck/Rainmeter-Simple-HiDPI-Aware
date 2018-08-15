;change theme
;https://forum.rainmeter.net/viewtopic.php?t=9635

[Variables]
@includeScale=#@#_Internal/scale.inc
@includeThemeConfig=#@#Themes/_config.incc
FontHeader=Segoe UI 
FontText=Segoe UI
FontValue=Segoe UI
FontValueHuge=Segoe UI Light
FontSizeH1=(20*#$#)
FontSizeH2=(16*#$#)
FontSizeH3=(12*#$#)
FontSizeText=(11*#$#)
FontSizeLabel=(10*#$#)
StringEffect=None
LineSpacing = (0*#$#)
LineHeight = (#FontSizeText#+10*#$#+#LineSpacing#)
HeaderSpacing = (16*#$#)
HeightH1WithSpacing = (#FontSizeH1#+#HeaderSpacing#)
HeightH2WithSpacing = (#FontSizeH2#+#HeaderSpacing#)
HeightH3WithSpacing = (#FontSizeH3#+#HeaderSpacing#)
MaxTextWidth = (400*#$#)
AntiAlias=1
MaxDL = 52428800
MaxUL = 10485760
Substitute="&amp;":"&","&quot;":"","&Quot;":"","&lt;br&gt;":"","![CDATA[":"","]]":"","...":"","<":"",">":"","/PRE&gt;":"","PRE&gt;":"","&lt;":"","&#39;":"'"



;//-------------------------------------------------//
;//---------------- styles -------------------------//
;//-------------------------------------------------//



[TextStyle]
StringStyle=NORMAL
FontColor=#ColorAccent2#
FontSize=#FontSizeText#
FontFace=#FontText#
AntiAlias=#AntiAlias#
ClipString=1
SolidColor=0,0,0,1
W=#MaxTextWidth#

[SectionHeaderStyle]
StringCase=UPPER
FontColor=#ColorHighlight#
FontSize=#FontSizeH2#
FontFace=#FontHeader#
AntiAlias=#AntiAlias#
SolidColor=0,0,0,1

[SectionHeaderVerticalStyle]
StringCase=UPPER
StringAlign=CENTER
FontColor=#ColorHighlight#
FontSize=#FontSizeH2#
FontFace=#FontHeader#
AntiAlias=#AntiAlias#
SolidColor=0,0,0,1
Angle=1.57
ClipString=1

[ValueStringStyle]
StringStyle=NORMAL
FontColor=#ColorAccent2#
FontSize=#FontSizeLabel#
FontFace=#FontValue#
StringEffect=#StringEffect#
StringAlign=RIGHT
AntiAlias=#AntiAlias#
NumOfDecimals=2
SolidColor=0,0,0,1
AutoScale=1

[ValueStringHugeStyle]
StringStyle=NORMAL
FontColor=#ColorAccent2#
FontSize=2*#FontSizeLabel#
FontFace=#FontValueHuge#
StringEffect=#StringEffect#
StringAlign=RIGHT
AntiAlias=#AntiAlias#
NumOfDecimals=2
SolidColor=0,0,0,1
AutoScale=1

[LinkDefaultStyle]
StringStyle=NORMAL
FontColor=#ColorDefault#
FontSize=#FontSizeText#
FontFace=#FontText#
ClipString=1
AntiAlias=#AntiAlias#
SolidColor=0,0,0,1
ImageTint=#ColorDefault#
W=#MaxTextWidth#
Y=#LineSpacing#r

[LinkHoverStyle]
StringStyle=NORMAL
FontColor=#ColorHover#
FontSize=#FontSizeText#
FontFace=#FontText#
ClipString=1
AntiAlias=#AntiAlias#
SolidColor=0,0,0,1
ImageTint=#ColorHover#
W=#MaxTextWidth#
Y=(#LineSpacing#r)

[BackgroundStyle]
SolidColor=#ColorBack#AA

[BackgroundOverlayGlowStyle]
SolidColor=#ColorHighlight#19
SolidColor2=#ColorBack#19

