[Variables]
@includeVars=#@#variables.inc
BarWidth=(140*#$#)
BarThickness=(5*#$#)
HGap=(20*#$#)
VGap=(6*#$#)
SymbolWidth=(16*#$#)
SymbolHeight=(16*#$#)
BarY0=(#SymbolHeight#+#VGap#)
ValueY0=(3*#$#)
[meterbg1]
Meter=STRING
X=0
Y=0
H=(20*#$#)
W=(745*#$#)
BackgroundMode=2
SolidColor=0,0,0,1

--------------------------Measures-------------------------

[measureNetIn]
Measure=NetIn
NetInSpeed=#MaxDL#
; NetInSpeed must be set so your maximun download speed for the download bar to scale correctly

[measureNetOut]
Measure=NetOut
NetOutSpeed=#MaxUL#

--------------------------Upload-------------------------

[MeterUploadimg]
Meter=IMAGE
ImageName=#@#Images/up.png
X=0
Y=0
W=#SymbolWidth#
H=#SymbolHeight#
ImageTint=#ColorAccent2#
BackgroundMode=2
SolidColor= 0,0,0,1
AntiAlias=1

[meterUploadBar]
Meter=BAR
MeasureName=measureNetOut
X=r
Y=#BarY0#
W=#BarWidth#
H=#BarThickness#
Flip=1
BackgroundMode=2
SolidColor= #ColorAccent5#
BarColor=#ColorHighlight#
BarOrientation=HORIZONTAL

[meterUploadValue]
Meter=STRING
MeasureName=measureNetOut
X=#BarWidth#
Y=#ValueY0#
W=1
H=14
FontColor=#ColorAccent2#
FontSize=#FontSizeText#
FontFace=#FontLabel#
StringStyle=BOLD
StringEffect=#StringEffect#
StringAlign=right
AntiAlias=#AntiAlias#
Text=%1B/s
NumOfDecimals=2
AutoScale=1

; Because measureIP returns the current upload speed in bytes, we must use AutoScale=1 to
; automatically scale the value into a more readable figure.

;-------------------------------download--------------------

[meterDownloadValue]
Meter=STRING
MeasureName=measureNetIn
X=#HGap#r
Y=#ValueY0#
W=(147*#$#)
H=(14*#$#)
FontColor=#ColorAccent2#
FontSize=#FontSizeText#
FontFace=#FontLabel#
StringStyle=BOLD
StringEffect=#StringEffect#
StringAlign=left
AntiAlias=#AntiAlias#
Text=%1B/s
NumOfDecimals=2
AutoScale=1

[meterDownloadBar]
Meter=BAR
MeasureName=measureNetIn
X=r
Y=#BarY0#
W=#BarWidth#
H=#BarThickness#
BackgroundMode=2
SolidColor= #ColorAccent5#
BarColor=#ColorHighlight#
BarOrientation=HORIZONTAL

[MeterDownloadimg]
Meter=IMAGE
ImageName=#@#Images/down.png
X=(#BarWidth#-#SymbolWidth#)r
Y=(-#SymbolHeight#-#VGap#)r
W=#SymbolWidth#
H=#SymbolHeight#
BackgroundMode=2
ImageTint=#ColorAccent2#
SolidColor= 0,0,0,1
AntiAlias=1
