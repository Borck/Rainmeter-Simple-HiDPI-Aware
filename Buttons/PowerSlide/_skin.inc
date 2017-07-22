[Variables]
@includeVars=#@#variables.inc
ShowText=[!RainmeterHideMeter MeterButton1][!RainmeterShowMeter MeterButton2][!RainmeterShowMeter MeterComp][!RainmeterShowMeter MeterShutdown][!RainmeterShowMeter MeterRestart][!RainmeterShowMeter OpenText2][!RainmeterShowMeter MeterBack][!RainmeterShowMeter Background][!RainmeterRedraw]
HideText=[!RainmeterShowMeter MeterButton1][!RainmeterHideMeter MeterButton2][!RainmeterHideMeter MeterComp][!RainmeterHideMeter MeterShutdown][!RainmeterHideMeter MeterRestart][!RainmeterHideMeter MeterBack][!RainmeterHideMeter Background][!RainmeterRedraw]
BackTint=333333cc
ForeTint=#ColorHighlight#

;//--- styles ---//

[ButtonImageStyle]
Y=(14*#$#)
W=(48*#$#)
H=(48*#$#)
ImageTint=#ForeTint#
AntiAlias=#AntiAlias#
Hidden=1

;//--- meters ---//

[MeterButton1]
Meter=IMAGE
X=(160*#$#)
Y=0
W=(42*#$#)
H=(77*#$#)
ImageName=#@#Images/Power/slider_backleft.png
ImageTint=#BackTint#
LeftMouseDownAction=!Execute #ShowText#

[Background]
Meter=IMAGE
MeterStyle=StyleNotesBackground
X=r
Y=r
W=(42*#$#)
H=(77*#$#)
SolidColor=0,0,0,1
LeftMouseDownAction=!Execute #HideText#
Hidden=1

[MeterButton2]
Meter=IMAGE
MeterStyle=MeterButton1
X=0
Hidden=1
LeftMouseDownAction=!Execute #HideText#

[MeterBack]
Meter=IMAGE
X=(42*#$#-0.5)
Y=(0*#$#)
H=(100*#$#)
ImageCrop=0,0,160,100,1
ImageName=#@#Images/Power/slider_back.png
ImageTint=#BackTint#
Hidden=1

[MeterShutdown]
Meter=IMAGE
MeterStyle=ButtonImageStyle
X=(50*#$#)
ImageName=#@#Images/Power/power_standby.png
LeftMouseDownAction=%systemroot%\system32\shutdown.exe -s -t 00
MouseOverAction=!execute [!RainmeterShowMeter ShutdownText][!RainmeterRedraw]
MouseLeaveAction=!execute [!RainmeterHideMeter ShutdownText][!RainmeterRedraw]

[MeterRestart]
Meter=IMAGE
MeterStyle=ButtonImageStyle
X=(110*#$#)
ImageName=#@#Images/Power/power_restart.png
LeftMouseDownAction=!execute [!RainmeterShowMeter RestartText][!RainmeterRedraw]
MouseLeaveAction=!execute [!RainmeterHideMeter RestartText][!RainmeterRedraw]
LeftMouseUpAction=!Execute [%windir%\System32\shutdown.exe -r -t 00]

