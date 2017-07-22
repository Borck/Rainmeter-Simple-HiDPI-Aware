[Rainmeter]
Author=Borckla
UpdateDivider=-1

[Metadata]
Name=
Information=
Description=
License=
Version=

[Variables]
@includeScale=#@#_internal/scale.inc

[MeterSolidBackground]
Meter=Roundline
X=0
Y=0
W=(#W#*#$#)
H=(#H#*#$#)
LineColor=0,0,0,1
Solid=1

[MeterImage]
Meter=image
MeterStyle=ImageStyle
ImageName=#ImageName#
X=0
Y=0
W=(#W#*#$#)
H=(#H#*#$#)
LeftMouseUpAction=#Action#
AntiAlias=1

