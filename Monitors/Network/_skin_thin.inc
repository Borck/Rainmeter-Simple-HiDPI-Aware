[Variables]
@includeVars=#@#variables.inc
@includeStyles=#@#styles.inc
@includeMeasure=#CURRENTPATH#_measure.inc
x0=(26*#$#)
h=(107*#$#)
titleW=(55*#$#)
vMargin=(20*#$#)
vSpace=(5*#$#)
barW=(7*#$#)

lineLengthVirtual=350
lineLength=(#lineLengthUnscaled#*#$#)
barLineSpace=(5*#$#)
autoscale=0
titleBarSpace=(10*#$#)
timeLineSpace=(60*#$#)
loadValueSpace=(48*#$#)

rowH=((#h#-#vMargin#-#vMargin#-#vSpace#)/2)
barX0=(#x0#+#titleBarSpace#)
lineX0=(#barX0#+#barW#+#barLineSpace#)
lineH=#rowH#
headerSize=(#FontSizeH2#)
y0Up=#vMargin#
y0Down=(#y0Up#+#vSpace#+#rowH#)
arrowImage=#@#Images/arrow_18x33_line.png
w=(#lineX0#+#lineLength#)
loadLabelX0=(#barX0#+12*#$#)

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
Meter=Bar
SolidColor=#ColorAccent5#
X=(#lineX0#+#timeLineSpace#)
Y=#y0Up#
W=1
H=#rowH#

[ulTimeLine2m]
Meter=Bar
MeterStyle=ulTimeLine1m
X=#timeLineSpace#r

[ulTimeLine3m]
Meter=Bar
MeterStyle=ulTimeLine1m
X=#timeLineSpace#r

[ulTimeLine4m]
Meter=Bar
MeterStyle=ulTimeLine1m
X=#timeLineSpace#r

[ulTimeLine5m]
Meter=Bar
MeterStyle=ulTimeLine1m
X=#timeLineSpace#r

[upText]
Meter=STRING
MeterStyle=ValueStringStyle|NetValue
Text="UL"
x=#loadLabelX0#
y=3

[netUpValue]
Meter=STRING
MeasureName=measureNetUp
MeterStyle=ValueStringStyle|NetValue
x=#loadValueSpace#r
y=r

[uploadBar]
Meter=Bar
MeasureName=measureNetUp
MeterStyle=LoadBar
Y=#y0Up#

[netUpFill]
Meter=Histogram
MeasureName=measureNetUp
MeterStyle=NetLine|NetLineFill
Y=(#rowH#-#lineH#)r

[netUpLine]
Meter=Line
MeasureName=measureNetUp
MeterStyle=NetLine|NetLineOut
Y=r

;//------title-------//

[Title]
Meter=STRING
MeterStyle=SectionHeaderVerticalStyle
Text=".: N / W :."
X=#x0#
Y=(#h#/2)
H=#titleW#
W=#h#

;//--meters download--//

[dlTimeLine1m]
Meter=Bar
SolidColor=#ColorAccent5#
X=(#lineX0#+#timeLineSpace#)
Y=#y0Down#
W=1
H=#rowH#

[dlTimeLine2m]
Meter=Bar
MeterStyle=dlTimeLine1m
X=#timeLineSpace#r

[dlTimeLine3m]
Meter=Bar
MeterStyle=dlTimeLine1m
X=#timeLineSpace#r

[dlTimeLine4m]
Meter=Bar
MeterStyle=dlTimeLine1m
X=#timeLineSpace#r

[dlTimeLine5m]
Meter=Bar
MeterStyle=dlTimeLine1m
X=#timeLineSpace#r

[downText]
Meter=STRING
MeterStyle=ValueStringStyle|NetValue
Text="DL"
x=#loadLabelX0#
y=(#Y0Down#+#rowH#+#$#*2)

[netDownValue]
Meter=STRING
MeterStyle=ValueStringStyle|NetValue
MeasureName=measureNetDown
x=#loadValueSpace#r
y=r

[downloadBar]
Meter=Bar
MeterStyle=LoadBar|Flip
MeasureName=measureNetDown
Y=#Y0Down#

[netDownFill]
Meter=Histogram
MeterStyle=NetLine|NetLineFill
MeasureName=measureNetDown
Y=#$#r
Flip=1

[netDownLine]
Meter=Line
MeasureName=measureNetDown
MeterStyle=NetLine|NetLineOut
Y=r
Flip=1

;//-- time labels --//

[ulLabel1m]
Meter=STRING
MeterStyle=ValueStringStyle|TimeLabel
Text="-1"
X=(#lineX0#+#timeLineSpace#)
Y=(#y0Up#-15*#$#)

[ulLabel2m]
Meter=STRING
MeterStyle=ValueStringStyle|TimeLabel
Text="-2"
X=#timeLineSpace#r
Y=r

[ulLabel3m]
Meter=STRING
MeterStyle=ValueStringStyle|TimeLabel
Text="-3"
X=#timeLineSpace#r
Y=r

[ulLabel4m]
Meter=STRING
MeterStyle=ValueStringStyle|TimeLabel
Text="-4"
X=#timeLineSpace#r
Y=r

[ulLabel5m]
Meter=STRING
MeterStyle=ValueStringStyle|TimeLabel
Text="-5min"
X=#timeLineSpace#r
Y=r

