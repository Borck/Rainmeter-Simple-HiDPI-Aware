[Variables]
@includeVars=#@#variables.inc
@includeStyles=#@#styles.inc
@includeMeasure=#CURRENTPATH#_measure_local.inc
x0=(26*#$#)
h=(107*#$#)

Title="N / W"
titleW=(55*#$#)
vMargin=(20*#$#)
vSpace=(5*#$#)
barW=(7*#$#)

lineLengthVirtual=350
lineLength=(#lineLengthUnscaled#*#$#)
barLineSpace=(5*#$#)
autoscale=0
titleBarSpace=(14*#$#)
timeLineSpace=(60*#$#)

rowH=((#h#-#vMargin#-#vMargin#-#vSpace#)/2)
barX0=(#x0#+#titleBarSpace#)
lineX0=(#barX0#+#barW#+#barLineSpace#)
lineH=#rowH#
headerSize=(#FontSizeH2#)
y0Up=#vMargin#
y0Down=(#y0Up#+#vSpace#+#rowH#)
arrowImage=#@#Images/arrow_18x33_line.png
w=(#lineX0#+#lineLength#)
loadLabelX0=(#barX0#)
loadValueX0=(#barX0#+71*#$#)

;//--styles--//

[NetLine] ;net statistics
X=#lineX0#/#$#
W=#lineLengthVirtual#
H=#lineH#
GraphStart=Left
AutoScale=#autoscale#
AntiAlias=#AntiAlias#
lineWidth=2
TransformationMatrix=#$#; 0; 0; 1; 0; 0

[NetLineFill]
PrimaryImage=#@#Images\gradients_white_fadeout.png
PrimaryImageTint=#ColorHighlight#
PrimaryImageCrop=0,0,#lineLengthVirtual#,#lineH#,1

[NetLineOut]
SolidColor=#ColorAccent#33
SolidColor2=#ColorAccent#00
LineColor=#ColorAccent4#

[LoadBar]
BarColor=#ColorHighlight#
SolidColor=#ColorAccent5#
GraphStart=Right
AutoScale=#autoscale#
AntiAlias=1
H=#rowH#
W=#barW#
X=#barX0#

[NetValue]
X=#w#
Text=%1B/s
NumOfDecimals=0
FontColor=#ColorAccent4#

[TimeLabel]
FontStyle=Normal
FontColor=#ColorAccent5#
StringAlign=Left

[Flip]
Flip=1
ImageFlip=Vertical

;//--meters upload--//

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

[upText]
Meter=STRING
MeterStyle=TextStyle|NetValue
Text="U"
StringAlign=Right
x=#loadLabelX0#
y=(17*#$#)

[netUpValue]
Meter=STRING
MeasureName=measureNetOut
MeterStyle=ValueStringStyle|NetValue
x=#loadValueX0#
y=(30*#$#)

[uploadBar]
Meter=Bar
MeasureName=measureNetOut
MeterStyle=LoadBar
Y=#y0Up#

[netUpFill]
Meter=Histogram
MeasureName=measureNetOut
MeterStyle=NetLine|NetLineFill
Y=(#rowH#-#lineH#)r

[netUpLine]
Meter=Line
MeasureName=measureNetOut
MeterStyle=NetLine|NetLineOut
Y=r

;//------title-------//

[Title]
Meter=STRING
MeterStyle=SectionHeaderVerticalStyle
Text=#Title#
X=#x0#
Y=(#h#/2)
H=#titleW#
W=#h#

;//--meters download--//

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

[downText]
Meter=STRING
MeterStyle=TextStyle|NetValue
Text="D"
StringAlign=Right
x=(#loadLabelX0#)
y=(17*#$#)r

[netDownValue]
Meter=STRING
MeasureName=measureNetIn
MeterStyle=ValueStringStyle|NetValue
x=#loadValueX0#
y=(#Y0Down#+4*#$#)

[downloadBar]
Meter=Bar
MeasureName=measureNetIn
MeterStyle=LoadBar|Flip
Y=#Y0Down#

[netDownFill]
Meter=Histogram
MeasureName=measureNetIn
MeterStyle=NetLine|NetLineFill
Y=#$#r
Flip=1

[netDownLine]
Meter=Line
MeasureName=measureNetIn
MeterStyle=NetLine|NetLineOut
Y=r
Flip=1

;//-- time labels --//

[label1m]
Meter=STRING
MeterStyle=ValueStringStyle|TimeLabel
Text="-1"
X=(#lineX0#+#timeLineSpace#)
Y=(#y0Up#+53*#$#)

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

