;  EXAMPLE:
;
;  [Variables]
;  title='D'
;  titleWidth=5
;  @includeMeasure=#CURRENTPATH#/../Network/_measure_local.inc
;  measureName=measureDownload
;  @includeSkin=../@Resources/NetHist_thin_tiny_3m.inc


[Variables]
@includeVars=#@#variables.inc
historyMinutes=3
historyAutoscale=0
historyLineWidth=1
;$=2
historyTitle=#title#
historyTitleX=0
historyTitleY=0
historyTitleFontSize=#FontSizeH1#

;value seams to be without scale, when transform is used
historyBarX=(#historyTitleFontSize#*1.0) 
historyBarY=(0.7*#historyTitleFontSize#)
historyBarHeight=(0.7*#historyTitleFontSize#)
historyBarWidth=(220*#$#)


historyValueX=(#historyBarX#+#historyBarWidth#)
historyValueY=(#historyBarY#-5*#$#)
historyBarMinuteWidth=(#historyBarWidth#/#historyMinutes#)

;//---------------- colors -------------------------//
StatsForeground=777777
StatsBackground1=333333
StatsBackground2=00000000




;//-------------------------------------------------//
;//---------------- style --------------------------//
;//-------------------------------------------------//



[NetLine]
GraphStart=Left
AutoScale=#historyAutoscale#
AntiAlias=#AntiAlias#
TransformationMatrix=#$#; 0; 0; 1; -(10*#$#); 0

[NetLineFill]
PrimaryImage=#@#Images\gradients_white_fadeout.png
PrimaryImageTint=#StatsForeground#
PrimaryImageCrop=0,0,#lineLengthVirtual#,#lineH#,1
LineWidth=0
SolidColor=#StatsBackground1#
SolidColor2=#StatsBackground2#

[NetLineOut]
LineColor=#StatsForeground#
LineWidth=#historyLineWidth#

[Title]
FontColor=#ColorAccent4#

[NetValue]
X=#w#
Text=%1B/s
NumOfDecimals=0
FontColor=#ColorAccent3#
SolidColor=#StatsBackground1#66



;//-------------------------------------------------//
;//---------------- meters -------------------------//
;//-------------------------------------------------//

[MeterTitle]
Meter=STRING
MeterStyle=SectionHeaderStyle
Text=#historyTitle#
FontSize=#historyTitleFontSize#
StringAlign=Left
X=#historyTitleX#
Y=#historyTitleY#

[MeterTitleIcon]
Meter=IMAGE
ImageName=#Icon#
ImageFlip=#IconFlip#
X=(#historyTitleX#+4*#$#)
Y=(#historyTitleY#+10*#$#)
H=(#historyTitleFontSize#)
W=(#historyTitleFontSize#)
BackgroundMode=2
ImageTint=#ColorHighlight#
SolidColor= 0,0,0,1
AntiAlias=1

[MeterBarFill]
Meter=Histogram
MeasureName=#measureName#
MeterStyle=NetLine|NetLineFill|NetLineOut
X=#historyBarX#
Y=#historyBarY#
W=#historyBarWidth#
H=#historyBarHeight#

[MeterBarLine]
Meter=Line
MeasureName=#measureName#
MeterStyle=NetLine|NetLineOut
X=#historyBarX#
Y=#historyBarY#
W=#historyBarWidth#
H=#historyBarHeight#

[MeterValue]
Meter=STRING
MeasureName=#measureName#
MeterStyle=ValueStringStyle|NetValue
X=#historyBarX#+#historyBarWidth#
Y=#historyValueY#
W=#historyBarWidth#
Hidden=#hideLoadValues#





;//-------------------------------------------------//
;//---------------- time lines ---------------------//
;//-------------------------------------------------//

[MeterTimeLine1m]
Meter=Image
SolidColor=#ColorAccent5#
X=(#historyBarX#+#historyBarMinuteWidth#)
Y=#historyBarY#
W=1
H=#historyBarHeight#

[MeterTimeLine2m]
Meter=Image
MeterStyle=timeLine1m
X=(#historyBarMinuteWidth#)r

[MeterTimeLine3m]
Meter=Image
MeterStyle=timeLine1m
X=(#historyBarMinuteWidth#)r

