[Variables]
@includeVars=#@#variables.inc
X0Text=0
Y0Text=#FontSizeH2#

;//-------------------------------------------//
;//------------- title ------------------------//
;//-------------------------------------------//



[Title]
Meter=STRING
MeterStyle=SectionHeaderStyle
Text="#Title#"


;//-------------------------------------------//
;//------------- parser ---------------------//
;//-------------------------------------------//



[RSS]
Measure=Plugin
Plugin=Plugins\WebParser.dll
UpdateRate=600
Url=#URL#
RegExp=#Expression#
StringIndex=1

[MeasureLinkTitle1]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=1)?3:1
Substitute=#Substitute#

[MeasureLinkUrl1]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=1)?4:1
Substitute="&amp;":"&"



[MeasureLinkTitle2]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=2)?5:1
Substitute=#Substitute#

[MeasureLinkUrl2]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=2)?6:1
Substitute="&amp;":"&"



[MeasureLinkTitle3]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=3)?7:1
Substitute=#Substitute#

[MeasureLinkUrl3]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=3)?8:1
Substitute="&amp;":"&"



[MeasureLinkTitle4]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=4)?9:1
Substitute=#Substitute#

[MeasureLinkUrl4]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=4)?10:1
Substitute="&amp;":"&"



[MeasureLinkTitle5]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=5)?11:1
Substitute=#Substitute#

[MeasureLinkUrl5]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=5)?12:1
Substitute="&amp;":"&"



[MeasureLinkTitle6]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=6)?13:1
Substitute=#Substitute#

[MeasureLinkUrl6]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=6)?14:1
Substitute="&amp;":"&"



[MeasureLinkTitle7]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=7)?15:1
Substitute=#Substitute#

[MeasureLinkUrl7]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=7)?16:1
Substitute="&amp;":"&"



[MeasureLinkTitle8]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=8)?17:1
Substitute=#Substitute#

[MeasureLinkUrl8]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=8)?18:1
Substitute="&amp;":"&"



[MeasureLinkTitle9]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=9)?19:1
Substitute=#Substitute#

[MeasureLinkUrl9]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=9)?20:1
Substitute="&amp;":"&"



[MeasureLinkTitle10]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=10)?21:1
Substitute=#Substitute#

[MeasureLinkUrl10]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=10)?22:1
Substitute="&amp;":"&"



[MeasureLinkTitle11]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=11)?23:1
Substitute=#Substitute#

[MeasureLinkUrl11]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=11)?24:1
Substitute="&amp;":"&"



[MeasureLinkTitle12]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=12)?25:1
Substitute=#Substitute#

[MeasureLinkUrl12]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=12)?26:1
Substitute="&amp;":"&"



[MeasureLinkTitle13]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=13)?27:1
Substitute=#Substitute#

[MeasureLinkUrl13]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=13)?28:1
Substitute="&amp;":"&"



[MeasureLinkTitle14]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=14)?29:1
Substitute=#Substitute#

[MeasureLinkUrl14]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=14)?30:1
Substitute="&amp;":"&"



[MeasureLinkTitle15]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=15)?31:1
Substitute=#Substitute#

[MeasureLinkUrl15]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=15)?32:1
Substitute="&amp;":"&"



[MeasureLinkTitle16]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=16)?33:1
Substitute=#Substitute#

[MeasureLinkUrl16]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=16)?34:1
Substitute="&amp;":"&"



[MeasureLinkTitle17]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=17)?35:1
Substitute=#Substitute#

[MeasureLinkUrl17]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=17)?36:1
Substitute="&amp;":"&"



[MeasureLinkTitle18]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=18)?37:1
Substitute=#Substitute#

[MeasureLinkUrl18]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=18)?38:1
Substitute="&amp;":"&"



[MeasureLinkTitle19]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=19)?39:1
Substitute=#Substitute#

[MeasureLinkUrl19]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=19)?40:1
Substitute="&amp;":"&"



[MeasureLinkTitle20]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=20)?41:1
Substitute=#Substitute#

[MeasureLinkUrl20]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=20)?42:1
Substitute="&amp;":"&"



[MeasureLinkTitle21]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=21)?43:1
Substitute=#Substitute#

[MeasureLinkUrl21]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=21)?44:1
Substitute="&amp;":"&"



[MeasureLinkTitle22]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=22)?45:1
Substitute=#Substitute#

[MeasureLinkUrl22]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=22)?46:1
Substitute="&amp;":"&"



[MeasureLinkTitle23]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=23)?47:1
Substitute=#Substitute#

[MeasureLinkUrl23]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=23)?48:1
Substitute="&amp;":"&"



[MeasureLinkTitle24]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=24)?49:1
Substitute=#Substitute#

[MeasureLinkUrl24]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=24)?50:1
Substitute="&amp;":"&"



[MeasureLinkTitle25]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=25)?51:1
Substitute=#Substitute#

[MeasureLinkUrl25]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=25)?52:1
Substitute="&amp;":"&"



;//-------------------------------------------//
;//------------- link meters ---------------//
;//-------------------------------------------//



[Link1]
Meter=STRING
MeasureName=MeasureLinkTitle1
MeterStyle=LinkDefaultStyle
Y=(#Entries#>=1)*(#HeaderSpacing#+#Y0Text#)r
H=(#Entries#>=1)*#LineHeight#
Hidden=(#Entries#<1)?1:0
MouseOverAction=[!SetOption Link1 MeterStyle LinkHoverStyle]
MouseLeaveAction=[!SetOption Link1 MeterStyle LinkDefaultStyle]
LeftMouseUpAction=!execute [[MeasureLinkUrl1]]

[Link2]
Meter=STRING
MeasureName=MeasureLinkTitle2
MeterStyle=LinkDefaultStyle
Y=(#Entries#>=2)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=2)*#LineHeight#
Hidden=(#Entries#<2)?1:0
MouseOverAction=[!SetOption Link2 MeterStyle LinkHoverStyle]
MouseLeaveAction=[!SetOption Link2 MeterStyle LinkDefaultStyle]
LeftMouseUpAction=!execute [[MeasureLinkUrl2]]

[Link3]
Meter=STRING
MeasureName=MeasureLinkTitle3
MeterStyle=LinkDefaultStyle
Y=(#Entries#>=3)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=3)*#LineHeight#
Hidden=(#Entries#<3)?1:0
MouseOverAction=[!SetOption Link3 MeterStyle LinkHoverStyle]
MouseLeaveAction=[!SetOption Link3 MeterStyle LinkDefaultStyle]
LeftMouseUpAction=!execute [[MeasureLinkUrl3]]

[Link4]
Meter=STRING
MeasureName=MeasureLinkTitle4
MeterStyle=LinkDefaultStyle
Y=(#Entries#>=4)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=4)*#LineHeight#
Hidden=(#Entries#<4)?1:0
MouseOverAction=[!SetOption Link4 MeterStyle LinkHoverStyle]
MouseLeaveAction=[!SetOption Link4 MeterStyle LinkDefaultStyle]
LeftMouseUpAction=!execute [[MeasureLinkUrl4]]

[Link5]
Meter=STRING
MeasureName=MeasureLinkTitle5
MeterStyle=LinkDefaultStyle
Y=(#Entries#>=5)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=5)*#LineHeight#
Hidden=(#Entries#<5)?1:0
MouseOverAction=[!SetOption Link5 MeterStyle LinkHoverStyle]
MouseLeaveAction=[!SetOption Link5 MeterStyle LinkDefaultStyle]
LeftMouseUpAction=!execute [[MeasureLinkUrl5]]

[Link6]
Meter=STRING
MeasureName=MeasureLinkTitle6
MeterStyle=LinkDefaultStyle
Y=(#Entries#>=6)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=6)*#LineHeight#
Hidden=(#Entries#<6)?1:0
MouseOverAction=[!SetOption Link6 MeterStyle LinkHoverStyle]
MouseLeaveAction=[!SetOption Link6 MeterStyle LinkDefaultStyle]
LeftMouseUpAction=!execute [[MeasureLinkUrl6]]

[Link7]
Meter=STRING
MeasureName=MeasureLinkTitle7
MeterStyle=LinkDefaultStyle
Y=(#Entries#>=7)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=7)*#LineHeight#
Hidden=(#Entries#<7)?1:0
MouseOverAction=[!SetOption Link7 MeterStyle LinkHoverStyle]
MouseLeaveAction=[!SetOption Link7 MeterStyle LinkDefaultStyle]
LeftMouseUpAction=!execute [[MeasureLinkUrl7]]

[Link8]
Meter=STRING
MeasureName=MeasureLinkTitle8
MeterStyle=LinkDefaultStyle
Y=(#Entries#>=8)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=8)*#LineHeight#
Hidden=(#Entries#<8)?1:0
MouseOverAction=[!SetOption Link8 MeterStyle LinkHoverStyle]
MouseLeaveAction=[!SetOption Link8 MeterStyle LinkDefaultStyle]
LeftMouseUpAction=!execute [[MeasureLinkUrl8]]

[Link9]
Meter=STRING
MeasureName=MeasureLinkTitle9
MeterStyle=LinkDefaultStyle
Y=(#Entries#>=9)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=9)*#LineHeight#
Hidden=(#Entries#<9)?1:0
MouseOverAction=[!SetOption Link9 MeterStyle LinkHoverStyle]
MouseLeaveAction=[!SetOption Link9 MeterStyle LinkDefaultStyle]
LeftMouseUpAction=!execute [[MeasureLinkUrl9]]

[Link10]
Meter=STRING
MeasureName=MeasureLinkTitle10
MeterStyle=LinkDefaultStyle
Y=(#Entries#>=10)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=10)*#LineHeight#
Hidden=(#Entries#<10)?1:0
MouseOverAction=[!SetOption Link10 MeterStyle LinkHoverStyle]
MouseLeaveAction=[!SetOption Link10 MeterStyle LinkDefaultStyle]
LeftMouseUpAction=!execute [[MeasureLinkUrl10]]

[Link11]
Meter=STRING
MeasureName=MeasureLinkTitle11
MeterStyle=LinkDefaultStyle
Y=(#Entries#>=11)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=11)*#LineHeight#
Hidden=(#Entries#<11)?1:0
MouseOverAction=[!SetOption Link11 MeterStyle LinkHoverStyle]
MouseLeaveAction=[!SetOption Link11 MeterStyle LinkDefaultStyle]
LeftMouseUpAction=!execute [[MeasureLinkUrl11]]

[Link12]
Meter=STRING
MeasureName=MeasureLinkTitle12
MeterStyle=LinkDefaultStyle
Y=(#Entries#>=12)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=12)*#LineHeight#
Hidden=(#Entries#<12)?1:0
MouseOverAction=[!SetOption Link12 MeterStyle LinkHoverStyle]
MouseLeaveAction=[!SetOption Link12 MeterStyle LinkDefaultStyle]
LeftMouseUpAction=!execute [[MeasureLinkUrl12]]

[Link13]
Meter=STRING
MeasureName=MeasureLinkTitle13
MeterStyle=LinkDefaultStyle
Y=(#Entries#>=13)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=13)*#LineHeight#
Hidden=(#Entries#<13)?1:0
MouseOverAction=[!SetOption Link13 MeterStyle LinkHoverStyle]
MouseLeaveAction=[!SetOption Link13 MeterStyle LinkDefaultStyle]
LeftMouseUpAction=!execute [[MeasureLinkUrl13]]

[Link14]
Meter=STRING
MeasureName=MeasureLinkTitle14
MeterStyle=LinkDefaultStyle
Y=(#Entries#>=14)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=14)*#LineHeight#
Hidden=(#Entries#<14)?1:0
MouseOverAction=[!SetOption Link14 MeterStyle LinkHoverStyle]
MouseLeaveAction=[!SetOption Link14 MeterStyle LinkDefaultStyle]
LeftMouseUpAction=!execute [[MeasureLinkUrl14]]

[Link15]
Meter=STRING
MeasureName=MeasureLinkTitle15
MeterStyle=LinkDefaultStyle
Y=(#Entries#>=15)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=15)*#LineHeight#
Hidden=(#Entries#<15)?1:0
MouseOverAction=[!SetOption Link15 MeterStyle LinkHoverStyle]
MouseLeaveAction=[!SetOption Link15 MeterStyle LinkDefaultStyle]
LeftMouseUpAction=!execute [[MeasureLinkUrl15]]

[Link16]
Meter=STRING
MeasureName=MeasureLinkTitle16
MeterStyle=LinkDefaultStyle
Y=(#Entries#>=16)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=16)*#LineHeight#
Hidden=(#Entries#<16)?1:0
MouseOverAction=[!SetOption Link16 MeterStyle LinkHoverStyle]
MouseLeaveAction=[!SetOption Link16 MeterStyle LinkDefaultStyle]
LeftMouseUpAction=!execute [[MeasureLinkUrl16]]

[Link17]
Meter=STRING
MeasureName=MeasureLinkTitle17
MeterStyle=LinkDefaultStyle
Y=(#Entries#>=17)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=17)*#LineHeight#
Hidden=(#Entries#<17)?1:0
MouseOverAction=[!SetOption Link17 MeterStyle LinkHoverStyle]
MouseLeaveAction=[!SetOption Link17 MeterStyle LinkDefaultStyle]
LeftMouseUpAction=!execute [[MeasureLinkUrl17]]

[Link18]
Meter=STRING
MeasureName=MeasureLinkTitle18
MeterStyle=LinkDefaultStyle
Y=(#Entries#>=18)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=18)*#LineHeight#
Hidden=(#Entries#<18)?1:0
MouseOverAction=[!SetOption Link18 MeterStyle LinkHoverStyle]
MouseLeaveAction=[!SetOption Link18 MeterStyle LinkDefaultStyle]
LeftMouseUpAction=!execute [[MeasureLinkUrl18]]

[Link19]
Meter=STRING
MeasureName=MeasureLinkTitle19
MeterStyle=LinkDefaultStyle
Y=(#Entries#>=19)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=19)*#LineHeight#
Hidden=(#Entries#<19)?1:0
MouseOverAction=[!SetOption Link19 MeterStyle LinkHoverStyle]
MouseLeaveAction=[!SetOption Link19 MeterStyle LinkDefaultStyle]
LeftMouseUpAction=!execute [[MeasureLinkUrl19]]

[Link20]
Meter=STRING
MeasureName=MeasureLinkTitle20
MeterStyle=LinkDefaultStyle
Y=(#Entries#>=20)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=20)*#LineHeight#
Hidden=(#Entries#<20)?1:0
MouseOverAction=[!SetOption Link20 MeterStyle LinkHoverStyle]
MouseLeaveAction=[!SetOption Link20 MeterStyle LinkDefaultStyle]
LeftMouseUpAction=!execute [[MeasureLinkUrl20]]

[Link21]
Meter=STRING
MeasureName=MeasureLinkTitle21
MeterStyle=LinkDefaultStyle
Y=(#Entries#>=21)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=21)*#LineHeight#
Hidden=(#Entries#<21)?1:0
MouseOverAction=[!SetOption Link21 MeterStyle LinkHoverStyle]
MouseLeaveAction=[!SetOption Link21 MeterStyle LinkDefaultStyle]
LeftMouseUpAction=!execute [[MeasureLinkUrl21]]

[Link22]
Meter=STRING
MeasureName=MeasureLinkTitle22
MeterStyle=LinkDefaultStyle
Y=(#Entries#>=22)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=22)*#LineHeight#
Hidden=(#Entries#<22)?1:0
MouseOverAction=[!SetOption Link22 MeterStyle LinkHoverStyle]
MouseLeaveAction=[!SetOption Link22 MeterStyle LinkDefaultStyle]
LeftMouseUpAction=!execute [[MeasureLinkUrl22]]

[Link23]
Meter=STRING
MeasureName=MeasureLinkTitle23
MeterStyle=LinkDefaultStyle
Y=(#Entries#>=23)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=23)*#LineHeight#
Hidden=(#Entries#<23)?1:0
MouseOverAction=[!SetOption Link23 MeterStyle LinkHoverStyle]
MouseLeaveAction=[!SetOption Link23 MeterStyle LinkDefaultStyle]
LeftMouseUpAction=!execute [[MeasureLinkUrl23]]

[Link24]
Meter=STRING
MeasureName=MeasureLinkTitle24
MeterStyle=LinkDefaultStyle
Y=(#Entries#>=24)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=24)*#LineHeight#
Hidden=(#Entries#<24)?1:0
MouseOverAction=[!SetOption Link24 MeterStyle LinkHoverStyle]
MouseLeaveAction=[!SetOption Link24 MeterStyle LinkDefaultStyle]
LeftMouseUpAction=!execute [[MeasureLinkUrl24]]

[Link25]
Meter=STRING
MeasureName=MeasureLinkTitle25
MeterStyle=LinkDefaultStyle
Y=(#Entries#>=25)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=25)*#LineHeight#
Hidden=(#Entries#<25)?1:0
MouseOverAction=[!SetOption Link25 MeterStyle LinkHoverStyle]
MouseLeaveAction=[!SetOption Link25 MeterStyle LinkDefaultStyle]
LeftMouseUpAction=!execute [[MeasureLinkUrl25]]

