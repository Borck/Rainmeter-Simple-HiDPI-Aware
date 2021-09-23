;  EXAMPLE:
;
;  [Variables]
;  label='D'
;  labelWidth=5
;  @includeMeasure=#CURRENTPATH#/../Network/_measure_local.inc
;  measureName=measureDownload
;  @includeSkin=../@Resources/NetHist_thin_tiny_3m.inc


[Variables]
@includeVars=#@#variables.inc
historyMinutes=3
historyAutoscale=0
historyLineWidth=1
;$=2
historyLabel=#label#
historyLabelX=0
historyLabelY=0
historyLabelFontSize=#FontSizeH1#

historyBarMinuteWidth=(70*#$#)
;value seams to be without scale, when transform is used
historyBarX=(#historyLabelFontSize#/#$#+(#labelWidth#*#$#)) 
historyBarY=(0.7*#historyLabelFontSize#)
historyBarHeight=(0.7*#historyLabelFontSize#)
historyBarWidth=(#historyMinutes#*#historyBarMinuteWidth#)


historyValueX=(#historyBarX#+#historyBarMinuteWidth#)
historyValueY=(#historyBarY#-5*#$#)


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

[Label]
FontColor=#ColorAccent4#

[NetValue]
X=#w#
Text=%1B/s
NumOfDecimals=0
FontColor=#ColorAccent3#
SolidColor=#StatsBackground1#66

[TimeLabel]
FontStyle=Normal
FontColor=#ColorAccent5#
StringAlign=Left

[Flip]
Flip=1
ImageFlip=Vertical



;//-------------------------------------------------//
;//---------------- meters -------------------------//
;//-------------------------------------------------//

[historyLabel]
Meter=STRING
MeterStyle=SectionHeaderStyle
Text=#historyLabel#
FontSize=#historyLabelFontSize#
StringAlign=Left
X=#historyLabelX#
Y=#historyLabelY#

[historyBarLineFill]
Meter=Histogram
MeasureName=#measureName#
MeterStyle=NetLine|NetLineFill|NetLineOut
X=#historyBarX#
Y=#historyBarY#
W=#historyBarWidth#
H=#historyBarHeight#

[historyBarLine]
Meter=Line
MeasureName=#measureName#
MeterStyle=NetLine|NetLineOut
X=#historyBarX#
Y=#historyBarY#
W=#historyBarWidth#
H=#historyBarHeight#

[historyBarValue]
Meter=STRING
MeasureName=#measureName#
MeterStyle=ValueStringStyle|NetValue
X=#historyValueX#
Y=#historyValueY#
Hidden=#hideLoadValues#



;//-------------------------------------------------//
;//---------------- time lines ---------------------//
;//-------------------------------------------------//

[timeLine1m]
Meter=Image
SolidColor=#ColorAccent5#
X=(#historyBarX#+#historyBarMinuteWidth#)
Y=#historyBarY#
W=1
H=#historyBarHeight#

[timeLine2m]
Meter=Image
MeterStyle=timeLine1m
X=(#historyBarMinuteWidth#)r

[timeLine3m]
Meter=Image
MeterStyle=timeLine1m
X=(#historyBarMinuteWidth#)r

