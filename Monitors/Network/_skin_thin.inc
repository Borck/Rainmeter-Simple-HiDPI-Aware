[Variables]
@includeVars=#@#variables.inc
@includeMeasure=#CURRENTPATH#_measure_local.inc
x0=0
vSpace=(5*#$#)
barW=(7*#$#)
lineLengthVirtual=350
lineLength=(#lineLengthUnscaled#*#$#)
barLineSpace=(5*#$#)
autoscale=0
titleBarSpace=(14*#$#)
timeLineSpace=(60*#$#)

rowH=((#h#-#vSpace#)/2)
barX0=(#x0#+#titleBarSpace#)
lineX0=(#barX0#+#barW#+#barLineSpace#)
lineH=#rowH#
headerSize=(#FontSizeH2#)
y0Up=#FontSizeH1#+#HeaderSpacing#
y0Down=(#y0Up#+#vSpace#+#rowH#)
arrowImage=#@#Images/arrow_18x33_line.png
w=(#lineX0#+#lineLength#)
loadLabelX0=(#barX0#)
loadValueX0=(#barX0#+71*#$#)

;//---------------- colors -------------------------//
StatsForeground=777777
StatsBackground1=333333
StatsBackground2=00000000




;//-------------------------------------------------//
;//---------------- style --------------------------//
;//-------------------------------------------------//



[NetLine]
X=#lineX0#/#$#
W=#lineLengthVirtual#
H=#lineH#
GraphStart=Left
AutoScale=#autoscale#
AntiAlias=#AntiAlias#
lineWidth=1
TransformationMatrix=#$#; 0; 0; 1; 0; 0

[NetLineFill]
PrimaryImage=#@#Images\gradients_white_fadeout.png
PrimaryImageTint=#StatsForeground#
PrimaryImageCrop=0,0,#lineLengthVirtual#,#lineH#,1
SolidColor=#StatsBackground1#
SolidColor2=#StatsBackground2#

[NetLineOut]
LineColor=#StatsForeground#

[LoadBar]
BarColor=#StatsForeground#
SolidColor=#StatsBackground1#
GraphStart=Right
AutoScale=#autoscale#
AntiAlias=1
H=#rowH#
W=#barW#
X=#barX0#

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
;//---------------- title ---------------------------//
;//-------------------------------------------------//



[Title]
Meter=STRING
MeterStyle=SectionHeaderStyle
Text="NETWORK"
X=#x0#
Y=0
H=(55*#$#)
W=#h#



;//-------------------------------------------------//
;//---------------- meters upload ---------------//
;//-------------------------------------------------//



[upText]
Meter=STRING
MeterStyle=TextStyle|Label
Text="U"
StringAlign=Right
x=#loadLabelX0#
y=#y0Up#-4*#$#

[uploadBar]
Meter=Bar
MeasureName=measureUpload
MeterStyle=LoadBar
Y=#y0Up#

[netUpFill]
Meter=Histogram
MeasureName=measureUpload
MeterStyle=NetLine|NetLineFill
Y=(#rowH#-#lineH#)r

[netUpLine]
Meter=Line
MeasureName=measureUpload
MeterStyle=NetLine|NetLineOut
Y=r

[netUpValue]
Meter=STRING
MeasureName=measureUpload
MeterStyle=ValueStringStyle|NetValue
x=#loadValueX0#
y=#y0Up#+#rowH#-21*#$#
Hidden=#hideLoadValues#



;//-------------------------------------------------//
;//---------------- meters download ------------//
;//-------------------------------------------------//



[downText]
Meter=STRING
MeterStyle=TextStyle|Label
Text="D"
StringAlign=Right
x=(#loadLabelX0#)
y=(#y0Down#+#rowH#-1.7*#FontSizeLabel#)

[downloadBar]
Meter=Bar
MeasureName=measureDownload
MeterStyle=LoadBar|Flip
Y=#Y0Down#

[netDownFill]
Meter=Histogram
MeasureName=measureDownload
MeterStyle=NetLine|NetLineFill
Y=#$#r
Flip=1

[netDownLine]
Meter=Line
MeasureName=measureDownload
MeterStyle=NetLine|NetLineOut
Y=r
Flip=1

[netDownValue]
Meter=STRING
MeasureName=measureDownload
MeterStyle=ValueStringStyle|NetValue
x=#loadValueX0#
y=(#Y0Down#+2*#$#)
Hidden=#hideLoadValues#



;//-------------------------------------------------//
;//---------------- time lines --------------------//
;//-------------------------------------------------//



[ulTimeLine1m]
Meter=Image
SolidColor=#ColorAccent5#
X=(#lineX0#+#timeLineSpace#)
Y=#y0Up#
W=1
H=#rowH#

[ulTimeLine2m]
Meter=Image
MeterStyle=ulTimeLine1m
X=#timeLineSpace#r

[ulTimeLine3m]
Meter=Image
MeterStyle=ulTimeLine1m
X=#timeLineSpace#r

[ulTimeLine4m]
Meter=Image
MeterStyle=ulTimeLine1m
X=#timeLineSpace#r

[ulTimeLine5m]
Meter=Image
MeterStyle=ulTimeLine1m
X=#timeLineSpace#r



[dlTimeLine1m]
Meter=Image
SolidColor=#ColorAccent5#
X=(#lineX0#+#timeLineSpace#)
Y=#y0Down#
W=1
H=#rowH#

[dlTimeLine2m]
Meter=Image
MeterStyle=dlTimeLine1m
X=#timeLineSpace#r

[dlTimeLine3m]
Meter=Image
MeterStyle=dlTimeLine1m
X=#timeLineSpace#r

[dlTimeLine4m]
Meter=Image
MeterStyle=dlTimeLine1m
X=#timeLineSpace#r

[dlTimeLine5m]
Meter=Image
MeterStyle=dlTimeLine1m
X=#timeLineSpace#r



;//-------------------------------------------------//
;//---------------- time labels -------------------//
;//-------------------------------------------------//



[label1m]
Meter=STRING
MeterStyle=ValueStringStyle|TimeLabel
Text="-1"
X=(#lineX0#+#timeLineSpace#+2*#$#)
Y=(#y0Down#+#rowH#-#FontSizeLabel#-5*#$#)

[label2m]
Meter=STRING
MeterStyle=ValueStringStyle|TimeLabel
Text="-2"
X=#timeLineSpace#r
Y=r

[label3m]
Meter=STRING
MeterStyle=ValueStringStyle|TimeLabel
Text="-3"
X=#timeLineSpace#r
Y=r

[label4m]
Meter=STRING
MeterStyle=ValueStringStyle|TimeLabel
Text="-4"
X=#timeLineSpace#r
Y=r

[label5m]
Meter=STRING
MeterStyle=ValueStringStyle|TimeLabel
Text="-5min"
X=#timeLineSpace#r
Y=r

