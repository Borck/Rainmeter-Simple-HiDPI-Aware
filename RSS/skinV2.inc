[Variables]
@includeVars=#@#variables.inc
X0Text=0
Y0Text=#FontSizeH2#
LinkUnhoverDelay=50
FontSizeTimeStamp=#FontSizeH3#
RefreshButtonRelOffsetX=(5*#$#)
RefreshButtonRelOffsetY=(8*#$#)
RefreshButtonW=#FontSizeH3#
RefreshButtonH=#FontSizeH3#



;//-------------------------------------------//
;//------------- title ------------------------//
;//-------------------------------------------//



[Title]
Meter=STRING
MeterStyle=SectionHeaderStyle
MeasureName=MeasureTime
UpdateDivider=-1
Text="#Title# [%1]"
InlineSetting=Size | (#FontSizeTimeStamp#)
InlinePattern=(\[\d{2}:\d{2}(:\d{2})?\])

[RefreshButton]
Meter=Image
MeterStyle=LinkDefaultStyle
ImageName=#@#Images\refresh_by_Becris_flaticon_com.png
Text=Refresh
;X=([Title:W]+(10*#$#)) ;is set by RSS measure update
Y=(#FontSizeH2#-#FontSizeTimeStamp#+#RefreshButtonRelOffsetY#)
W=#RefreshButtonW#
H=#RefreshButtonH#
MouseOverAction=[!SetOption RefreshButton MeterStyle LinkHoverStyle][!UpdateMeter RefreshButton][!Redraw]
MouseLeaveAction=[!SetOption RefreshButton MeterStyle LinkDefaultStyle][!Delay #LinkUnhoverDelay#][!UpdateMeter RefreshButton][!Redraw]
LeftMouseUpAction=[!Refresh]



;//-------------------------------------------//
;//------------- measures --------------------//
;//-------------------------------------------//

[MeasureTime]
Measure=Time
Format=%H:%M

[RSS]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parallel=1
UpdateRate="0:30:00"
;each 30 min

Url=#Url#
Prefixes=#Prefixes#
FinishAction=[!UpdateMeter Title][!SetOption RefreshButton X ([Title:W]+#RefreshButtonRelOffsetX#)][!UpdateMeter RefreshButton][!UpdateMeterGroup Links]

[MeasureLinkTitle1]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=1)?1:-1
Type=Title
Substitute=#Substitute#

[MeasureLinkUrl1]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=1)?1:-1
Type=URL
Substitute="&amp;":"&"



[MeasureLinkTitle2]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=2)?2:-1
Type=Title
Substitute=#Substitute#

[MeasureLinkUrl2]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=2)?2:-1
Type=URL
Substitute="&amp;":"&"



[MeasureLinkTitle3]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=3)?3:-1
Type=Title
Substitute=#Substitute#

[MeasureLinkUrl3]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=3)?3:-1
Type=URL
Substitute="&amp;":"&"



[MeasureLinkTitle4]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=4)?4:-1
Type=Title
Substitute=#Substitute#

[MeasureLinkUrl4]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=4)?4:-1
Type=URL
Substitute="&amp;":"&"



[MeasureLinkTitle5]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=5)?5:-1
Type=Title
Substitute=#Substitute#

[MeasureLinkUrl5]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=5)?5:-1
Type=URL
Substitute="&amp;":"&"



[MeasureLinkTitle6]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=6)?6:-1
Type=Title
Substitute=#Substitute#

[MeasureLinkUrl6]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=6)?6:-1
Type=URL
Substitute="&amp;":"&"



[MeasureLinkTitle7]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=7)?7:-1
Type=Title
Substitute=#Substitute#

[MeasureLinkUrl7]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=7)?7:-1
Type=URL
Substitute="&amp;":"&"



[MeasureLinkTitle8]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=8)?8:-1
Type=Title
Substitute=#Substitute#

[MeasureLinkUrl8]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=8)?8:-1
Type=URL
Substitute="&amp;":"&"



[MeasureLinkTitle9]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=9)?9:-1
Type=Title
Substitute=#Substitute#

[MeasureLinkUrl9]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=9)?9:-1
Type=URL
Substitute="&amp;":"&"



[MeasureLinkTitle10]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=10)?10:-1
Type=Title
Substitute=#Substitute#

[MeasureLinkUrl10]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=10)?10:-1
Type=URL
Substitute="&amp;":"&"



[MeasureLinkTitle11]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=11)?11:-1
Type=Title
Substitute=#Substitute#

[MeasureLinkUrl11]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=11)?11:-1
Type=URL
Substitute="&amp;":"&"



[MeasureLinkTitle12]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=12)?12:-1
Type=Title
Substitute=#Substitute#

[MeasureLinkUrl12]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=12)?12:-1
Type=URL
Substitute="&amp;":"&"



[MeasureLinkTitle13]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=13)?13:-1
Type=Title
Substitute=#Substitute#

[MeasureLinkUrl13]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=13)?13:-1
Type=URL
Substitute="&amp;":"&"



[MeasureLinkTitle14]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=14)?14:-1
Type=Title
Substitute=#Substitute#

[MeasureLinkUrl14]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=14)?14:-1
Type=URL
Substitute="&amp;":"&"



[MeasureLinkTitle15]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=15)?15:-1
Type=Title
Substitute=#Substitute#

[MeasureLinkUrl15]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=15)?15:-1
Type=URL
Substitute="&amp;":"&"



[MeasureLinkTitle16]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=16)?16:-1
Type=Title
Substitute=#Substitute#

[MeasureLinkUrl16]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=16)?16:-1
Type=URL
Substitute="&amp;":"&"



[MeasureLinkTitle17]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=17)?17:-1
Type=Title
Substitute=#Substitute#

[MeasureLinkUrl17]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=17)?17:-1
Type=URL
Substitute="&amp;":"&"



[MeasureLinkTitle18]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=18)?18:-1
Type=Title
Substitute=#Substitute#

[MeasureLinkUrl18]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=18)?18:-1
Type=URL
Substitute="&amp;":"&"



[MeasureLinkTitle19]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=19)?19:-1
Type=Title
Substitute=#Substitute#

[MeasureLinkUrl19]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=19)?19:-1
Type=URL
Substitute="&amp;":"&"



[MeasureLinkTitle20]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=20)?20:-1
Type=Title
Substitute=#Substitute#

[MeasureLinkUrl20]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=20)?20:-1
Type=URL
Substitute="&amp;":"&"



[MeasureLinkTitle21]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=21)?21:-1
Type=Title
Substitute=#Substitute#

[MeasureLinkUrl21]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=21)?21:-1
Type=URL
Substitute="&amp;":"&"



[MeasureLinkTitle22]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=22)?22:-1
Type=Title
Substitute=#Substitute#

[MeasureLinkUrl22]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=22)?22:-1
Type=URL
Substitute="&amp;":"&"



[MeasureLinkTitle23]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=23)?23:-1
Type=Title
Substitute=#Substitute#

[MeasureLinkUrl23]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=23)?23:-1
Type=URL
Substitute="&amp;":"&"



[MeasureLinkTitle24]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=24)?24:-1
Type=Title
Substitute=#Substitute#

[MeasureLinkUrl24]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=24)?24:-1
Type=URL
Substitute="&amp;":"&"



[MeasureLinkTitle25]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=25)?25:-1
Type=Title
Substitute=#Substitute#

[MeasureLinkUrl25]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=25)?25:-1
Type=URL
Substitute="&amp;":"&"



[MeasureLinkTitle26]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=26)?26:-1
Type=Title
Substitute=#Substitute#

[MeasureLinkUrl26]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=26)?26:-1
Type=URL
Substitute="&amp;":"&"



[MeasureLinkTitle27]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=27)?27:-1
Type=Title
Substitute=#Substitute#

[MeasureLinkUrl27]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=27)?27:-1
Type=URL
Substitute="&amp;":"&"



[MeasureLinkTitle28]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=28)?28:-1
Type=Title
Substitute=#Substitute#

[MeasureLinkUrl28]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=28)?28:-1
Type=URL
Substitute="&amp;":"&"



[MeasureLinkTitle29]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=29)?29:-1
Type=Title
Substitute=#Substitute#

[MeasureLinkUrl29]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=29)?29:-1
Type=URL
Substitute="&amp;":"&"



[MeasureLinkTitle30]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=30)?30:-1
Type=Title
Substitute=#Substitute#

[MeasureLinkUrl30]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=30)?30:-1
Type=URL
Substitute="&amp;":"&"



;//-------------------------------------------//
;//------------- link meters ---------------//
;//-------------------------------------------//



[Link1]
Meter=STRING
Group=Links
MeasureName=MeasureLinkTitle1
MeterStyle=LinkDefaultStyle
Y=(#Entries#>=1)*(#HeaderSpacing#+#Y0Text#)
H=(#Entries#>=1)*#LineHeight#
Hidden=(#Entries#<1)?1:0
UpdateDivider=-1
MouseOverAction=[!SetOption Link1 MeterStyle LinkHoverStyle][!UpdateMeter Link1][!Redraw]
MouseLeaveAction=[!SetOption Link1 MeterStyle LinkDefaultStyle][!Delay #LinkUnhoverDelay#][!UpdateMeter Link1][!Redraw]
LeftMouseUpAction=!execute [[MeasureLinkUrl1]]

[Link2]
Meter=STRING
Group=Links
MeasureName=MeasureLinkTitle2
MeterStyle=LinkDefaultStyle
Y=(#Entries#>=2)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=2)*#LineHeight#
Hidden=(#Entries#<2)?1:0
UpdateDivider=-1
MouseOverAction=[!SetOption Link2 MeterStyle LinkHoverStyle][!UpdateMeter Link2][!Redraw]
MouseLeaveAction=[!SetOption Link2 MeterStyle LinkDefaultStyle][!Delay #LinkUnhoverDelay#][!UpdateMeter Link2][!Redraw]
LeftMouseUpAction=!execute [[MeasureLinkUrl2]]

[Link3]
Meter=STRING
Group=Links
MeasureName=MeasureLinkTitle3
MeterStyle=LinkDefaultStyle
Y=(#Entries#>=3)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=3)*#LineHeight#
Hidden=(#Entries#<3)?1:0
UpdateDivider=-1
MouseOverAction=[!SetOption Link3 MeterStyle LinkHoverStyle][!UpdateMeter Link3][!Redraw]
MouseLeaveAction=[!SetOption Link3 MeterStyle LinkDefaultStyle][!Delay #LinkUnhoverDelay#][!UpdateMeter Link3][!Redraw]
LeftMouseUpAction=!execute [[MeasureLinkUrl3]]

[Link4]
Meter=STRING
Group=Links
MeasureName=MeasureLinkTitle4
MeterStyle=LinkDefaultStyle
Y=(#Entries#>=4)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=4)*#LineHeight#
Hidden=(#Entries#<4)?1:0
UpdateDivider=-1
MouseOverAction=[!SetOption Link4 MeterStyle LinkHoverStyle][!UpdateMeter Link4][!Redraw]
MouseLeaveAction=[!SetOption Link4 MeterStyle LinkDefaultStyle][!Delay #LinkUnhoverDelay#][!UpdateMeter Link4][!Redraw]
LeftMouseUpAction=!execute [[MeasureLinkUrl4]]

[Link5]
Meter=STRING
Group=Links
MeasureName=MeasureLinkTitle5
MeterStyle=LinkDefaultStyle
Y=(#Entries#>=5)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=5)*#LineHeight#
Hidden=(#Entries#<5)?1:0
UpdateDivider=-1
MouseOverAction=[!SetOption Link5 MeterStyle LinkHoverStyle][!UpdateMeter Link5][!Redraw]
MouseLeaveAction=[!SetOption Link5 MeterStyle LinkDefaultStyle][!Delay #LinkUnhoverDelay#][!UpdateMeter Link5][!Redraw]
LeftMouseUpAction=!execute [[MeasureLinkUrl5]]

[Link6]
Meter=STRING
Group=Links
MeasureName=MeasureLinkTitle6
MeterStyle=LinkDefaultStyle
Y=(#Entries#>=6)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=6)*#LineHeight#
Hidden=(#Entries#<6)?1:0
UpdateDivider=-1
MouseOverAction=[!SetOption Link6 MeterStyle LinkHoverStyle][!UpdateMeter Link6][!Redraw]
MouseLeaveAction=[!SetOption Link6 MeterStyle LinkDefaultStyle][!Delay #LinkUnhoverDelay#][!UpdateMeter Link6][!Redraw]
LeftMouseUpAction=!execute [[MeasureLinkUrl6]]

[Link7]
Meter=STRING
Group=Links
MeasureName=MeasureLinkTitle7
MeterStyle=LinkDefaultStyle
Y=(#Entries#>=7)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=7)*#LineHeight#
Hidden=(#Entries#<7)?1:0
UpdateDivider=-1
MouseOverAction=[!SetOption Link7 MeterStyle LinkHoverStyle][!UpdateMeter Link7][!Redraw]
MouseLeaveAction=[!SetOption Link7 MeterStyle LinkDefaultStyle][!Delay #LinkUnhoverDelay#][!UpdateMeter Link7][!Redraw]
LeftMouseUpAction=!execute [[MeasureLinkUrl7]]

[Link8]
Meter=STRING
Group=Links
MeasureName=MeasureLinkTitle8
MeterStyle=LinkDefaultStyle
Y=(#Entries#>=8)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=8)*#LineHeight#
Hidden=(#Entries#<8)?1:0
UpdateDivider=-1
MouseOverAction=[!SetOption Link8 MeterStyle LinkHoverStyle][!UpdateMeter Link8][!Redraw]
MouseLeaveAction=[!SetOption Link8 MeterStyle LinkDefaultStyle][!Delay #LinkUnhoverDelay#][!UpdateMeter Link8][!Redraw]
LeftMouseUpAction=!execute [[MeasureLinkUrl8]]

[Link9]
Meter=STRING
Group=Links
MeasureName=MeasureLinkTitle9
MeterStyle=LinkDefaultStyle
Y=(#Entries#>=9)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=9)*#LineHeight#
Hidden=(#Entries#<9)?1:0
UpdateDivider=-1
MouseOverAction=[!SetOption Link9 MeterStyle LinkHoverStyle][!UpdateMeter Link9][!Redraw]
MouseLeaveAction=[!SetOption Link9 MeterStyle LinkDefaultStyle][!Delay #LinkUnhoverDelay#][!UpdateMeter Link9][!Redraw]
LeftMouseUpAction=!execute [[MeasureLinkUrl9]]

[Link10]
Meter=STRING
Group=Links
MeasureName=MeasureLinkTitle10
MeterStyle=LinkDefaultStyle
Y=(#Entries#>=10)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=10)*#LineHeight#
Hidden=(#Entries#<10)?1:0
UpdateDivider=-1
MouseOverAction=[!SetOption Link10 MeterStyle LinkHoverStyle][!UpdateMeter Link10][!Redraw]
MouseLeaveAction=[!SetOption Link10 MeterStyle LinkDefaultStyle][!Delay #LinkUnhoverDelay#][!UpdateMeter Link10][!Redraw]
LeftMouseUpAction=!execute [[MeasureLinkUrl10]]

[Link11]
Meter=STRING
Group=Links
MeasureName=MeasureLinkTitle11
MeterStyle=LinkDefaultStyle
Y=(#Entries#>=11)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=11)*#LineHeight#
Hidden=(#Entries#<11)?1:0
UpdateDivider=-1
MouseOverAction=[!SetOption Link11 MeterStyle LinkHoverStyle][!UpdateMeter Link11][!Redraw]
MouseLeaveAction=[!SetOption Link11 MeterStyle LinkDefaultStyle][!Delay #LinkUnhoverDelay#][!UpdateMeter Link11][!Redraw]
LeftMouseUpAction=!execute [[MeasureLinkUrl11]]

[Link12]
Meter=STRING
Group=Links
MeasureName=MeasureLinkTitle12
MeterStyle=LinkDefaultStyle
Y=(#Entries#>=12)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=12)*#LineHeight#
Hidden=(#Entries#<12)?1:0
UpdateDivider=-1
MouseOverAction=[!SetOption Link12 MeterStyle LinkHoverStyle][!UpdateMeter Link12][!Redraw]
MouseLeaveAction=[!SetOption Link12 MeterStyle LinkDefaultStyle][!Delay #LinkUnhoverDelay#][!UpdateMeter Link12][!Redraw]
LeftMouseUpAction=!execute [[MeasureLinkUrl12]]

[Link13]
Meter=STRING
Group=Links
MeasureName=MeasureLinkTitle13
MeterStyle=LinkDefaultStyle
Y=(#Entries#>=13)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=13)*#LineHeight#
Hidden=(#Entries#<13)?1:0
UpdateDivider=-1
MouseOverAction=[!SetOption Link13 MeterStyle LinkHoverStyle][!UpdateMeter Link13][!Redraw]
MouseLeaveAction=[!SetOption Link13 MeterStyle LinkDefaultStyle][!Delay #LinkUnhoverDelay#][!UpdateMeter Link13][!Redraw]
LeftMouseUpAction=!execute [[MeasureLinkUrl13]]

[Link14]
Meter=STRING
Group=Links
MeasureName=MeasureLinkTitle14
MeterStyle=LinkDefaultStyle
Y=(#Entries#>=14)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=14)*#LineHeight#
Hidden=(#Entries#<14)?1:0
UpdateDivider=-1
MouseOverAction=[!SetOption Link14 MeterStyle LinkHoverStyle][!UpdateMeter Link14][!Redraw]
MouseLeaveAction=[!SetOption Link14 MeterStyle LinkDefaultStyle][!Delay #LinkUnhoverDelay#][!UpdateMeter Link14][!Redraw]
LeftMouseUpAction=!execute [[MeasureLinkUrl14]]

[Link15]
Meter=STRING
Group=Links
MeasureName=MeasureLinkTitle15
MeterStyle=LinkDefaultStyle
Y=(#Entries#>=15)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=15)*#LineHeight#
Hidden=(#Entries#<15)?1:0
UpdateDivider=-1
MouseOverAction=[!SetOption Link15 MeterStyle LinkHoverStyle][!UpdateMeter Link15][!Redraw]
MouseLeaveAction=[!SetOption Link15 MeterStyle LinkDefaultStyle][!Delay #LinkUnhoverDelay#][!UpdateMeter Link15][!Redraw]
LeftMouseUpAction=!execute [[MeasureLinkUrl15]]

[Link16]
Meter=STRING
Group=Links
MeasureName=MeasureLinkTitle16
MeterStyle=LinkDefaultStyle
Y=(#Entries#>=16)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=16)*#LineHeight#
Hidden=(#Entries#<16)?1:0
UpdateDivider=-1
MouseOverAction=[!SetOption Link16 MeterStyle LinkHoverStyle][!UpdateMeter Link16][!Redraw]
MouseLeaveAction=[!SetOption Link16 MeterStyle LinkDefaultStyle][!Delay #LinkUnhoverDelay#][!UpdateMeter Link16][!Redraw]
LeftMouseUpAction=!execute [[MeasureLinkUrl16]]

[Link17]
Meter=STRING
Group=Links
MeasureName=MeasureLinkTitle17
MeterStyle=LinkDefaultStyle
Y=(#Entries#>=17)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=17)*#LineHeight#
Hidden=(#Entries#<17)?1:0
UpdateDivider=-1
MouseOverAction=[!SetOption Link17 MeterStyle LinkHoverStyle][!UpdateMeter Link17][!Redraw]
MouseLeaveAction=[!SetOption Link17 MeterStyle LinkDefaultStyle][!Delay #LinkUnhoverDelay#][!UpdateMeter Link17][!Redraw]
LeftMouseUpAction=!execute [[MeasureLinkUrl17]]

[Link18]
Meter=STRING
Group=Links
MeasureName=MeasureLinkTitle18
MeterStyle=LinkDefaultStyle
Y=(#Entries#>=18)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=18)*#LineHeight#
Hidden=(#Entries#<18)?1:0
UpdateDivider=-1
MouseOverAction=[!SetOption Link18 MeterStyle LinkHoverStyle][!UpdateMeter Link18][!Redraw]
MouseLeaveAction=[!SetOption Link18 MeterStyle LinkDefaultStyle][!Delay #LinkUnhoverDelay#][!UpdateMeter Link18][!Redraw]
LeftMouseUpAction=!execute [[MeasureLinkUrl18]]

[Link19]
Meter=STRING
Group=Links
MeasureName=MeasureLinkTitle19
MeterStyle=LinkDefaultStyle
Y=(#Entries#>=19)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=19)*#LineHeight#
Hidden=(#Entries#<19)?1:0
UpdateDivider=-1
MouseOverAction=[!SetOption Link19 MeterStyle LinkHoverStyle][!UpdateMeter Link19][!Redraw]
MouseLeaveAction=[!SetOption Link19 MeterStyle LinkDefaultStyle][!Delay #LinkUnhoverDelay#][!UpdateMeter Link19][!Redraw]
LeftMouseUpAction=!execute [[MeasureLinkUrl19]]

[Link20]
Meter=STRING
Group=Links
MeasureName=MeasureLinkTitle20
MeterStyle=LinkDefaultStyle
Y=(#Entries#>=20)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=20)*#LineHeight#
Hidden=(#Entries#<20)?1:0
UpdateDivider=-1
MouseOverAction=[!SetOption Link20 MeterStyle LinkHoverStyle][!UpdateMeter Link20][!Redraw]
MouseLeaveAction=[!SetOption Link20 MeterStyle LinkDefaultStyle][!Delay #LinkUnhoverDelay#][!UpdateMeter Link20][!Redraw]
LeftMouseUpAction=!execute [[MeasureLinkUrl20]]

[Link21]
Meter=STRING
Group=Links
MeasureName=MeasureLinkTitle21
MeterStyle=LinkDefaultStyle
Y=(#Entries#>=21)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=21)*#LineHeight#
Hidden=(#Entries#<21)?1:0
UpdateDivider=-1
MouseOverAction=[!SetOption Link21 MeterStyle LinkHoverStyle][!UpdateMeter Link21][!Redraw]
MouseLeaveAction=[!SetOption Link21 MeterStyle LinkDefaultStyle][!Delay #LinkUnhoverDelay#][!UpdateMeter Link21][!Redraw]
LeftMouseUpAction=!execute [[MeasureLinkUrl21]]

[Link22]
Meter=STRING
Group=Links
MeasureName=MeasureLinkTitle22
MeterStyle=LinkDefaultStyle
Y=(#Entries#>=22)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=22)*#LineHeight#
Hidden=(#Entries#<22)?1:0
UpdateDivider=-1
MouseOverAction=[!SetOption Link22 MeterStyle LinkHoverStyle][!UpdateMeter Link22][!Redraw]
MouseLeaveAction=[!SetOption Link22 MeterStyle LinkDefaultStyle][!Delay #LinkUnhoverDelay#][!UpdateMeter Link22][!Redraw]
LeftMouseUpAction=!execute [[MeasureLinkUrl22]]

[Link23]
Meter=STRING
Group=Links
MeasureName=MeasureLinkTitle23
MeterStyle=LinkDefaultStyle
Y=(#Entries#>=23)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=23)*#LineHeight#
Hidden=(#Entries#<23)?1:0
UpdateDivider=-1
MouseOverAction=[!SetOption Link23 MeterStyle LinkHoverStyle][!UpdateMeter Link23][!Redraw]
MouseLeaveAction=[!SetOption Link23 MeterStyle LinkDefaultStyle][!Delay #LinkUnhoverDelay#][!UpdateMeter Link23][!Redraw]
LeftMouseUpAction=!execute [[MeasureLinkUrl23]]

[Link24]
Meter=STRING
Group=Links
MeasureName=MeasureLinkTitle24
MeterStyle=LinkDefaultStyle
Y=(#Entries#>=24)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=24)*#LineHeight#
Hidden=(#Entries#<24)?1:0
UpdateDivider=-1
MouseOverAction=[!SetOption Link24 MeterStyle LinkHoverStyle][!UpdateMeter Link24][!Redraw]
MouseLeaveAction=[!SetOption Link24 MeterStyle LinkDefaultStyle][!Delay #LinkUnhoverDelay#][!UpdateMeter Link24][!Redraw]
LeftMouseUpAction=!execute [[MeasureLinkUrl24]]

[Link25]
Meter=STRING
Group=Links
MeasureName=MeasureLinkTitle25
MeterStyle=LinkDefaultStyle
Y=(#Entries#>=25)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=25)*#LineHeight#
Hidden=(#Entries#<25)?1:0
UpdateDivider=-1
MouseOverAction=[!SetOption Link25 MeterStyle LinkHoverStyle][!UpdateMeter Link25][!Redraw]
MouseLeaveAction=[!SetOption Link25 MeterStyle LinkDefaultStyle][!Delay #LinkUnhoverDelay#][!UpdateMeter Link25][!Redraw]
LeftMouseUpAction=!execute [[MeasureLinkUrl25]]

[Link26]
Meter=STRING
Group=Links
MeasureName=MeasureLinkTitle26
MeterStyle=LinkDefaultStyle
Y=(#Entries#>=26)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=26)*#LineHeight#
Hidden=(#Entries#<26)?1:0
UpdateDivider=-1
MouseOverAction=[!SetOption Link26 MeterStyle LinkHoverStyle][!UpdateMeter Link26][!Redraw]
MouseLeaveAction=[!SetOption Link26 MeterStyle LinkDefaultStyle][!Delay #LinkUnhoverDelay#][!UpdateMeter Link26][!Redraw]
LeftMouseUpAction=!execute [[MeasureLinkUrl26]]

[Link27]
Meter=STRING
Group=Links
MeasureName=MeasureLinkTitle27
MeterStyle=LinkDefaultStyle
Y=(#Entries#>=27)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=27)*#LineHeight#
Hidden=(#Entries#<27)?1:0
UpdateDivider=-1
MouseOverAction=[!SetOption Link27 MeterStyle LinkHoverStyle][!UpdateMeter Link27][!Redraw]
MouseLeaveAction=[!SetOption Link27 MeterStyle LinkDefaultStyle][!Delay #LinkUnhoverDelay#][!UpdateMeter Link27][!Redraw]
LeftMouseUpAction=!execute [[MeasureLinkUrl27]]

[Link28]
Meter=STRING
Group=Links
MeasureName=MeasureLinkTitle28
MeterStyle=LinkDefaultStyle
Y=(#Entries#>=28)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=28)*#LineHeight#
Hidden=(#Entries#<28)?1:0
UpdateDivider=-1
MouseOverAction=[!SetOption Link28 MeterStyle LinkHoverStyle][!UpdateMeter Link28][!Redraw]
MouseLeaveAction=[!SetOption Link28 MeterStyle LinkDefaultStyle][!Delay #LinkUnhoverDelay#][!UpdateMeter Link28][!Redraw]
LeftMouseUpAction=!execute [[MeasureLinkUrl28]]

[Link29]
Meter=STRING
Group=Links
MeasureName=MeasureLinkTitle29
MeterStyle=LinkDefaultStyle
Y=(#Entries#>=29)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=29)*#LineHeight#
Hidden=(#Entries#<29)?1:0
UpdateDivider=-1
MouseOverAction=[!SetOption Link29 MeterStyle LinkHoverStyle][!UpdateMeter Link29][!Redraw]
MouseLeaveAction=[!SetOption Link29 MeterStyle LinkDefaultStyle][!Delay #LinkUnhoverDelay#][!UpdateMeter Link29][!Redraw]
LeftMouseUpAction=!execute [[MeasureLinkUrl29]]

[Link30]
Meter=STRING
Group=Links
MeasureName=MeasureLinkTitle30
MeterStyle=LinkDefaultStyle
Y=(#Entries#>=30)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=30)*#LineHeight#
Hidden=(#Entries#<30)?1:0
UpdateDivider=-1
MouseOverAction=[!SetOption Link30 MeterStyle LinkHoverStyle][!UpdateMeter Link30][!Redraw]
MouseLeaveAction=[!SetOption Link30 MeterStyle LinkDefaultStyle][!Delay #LinkUnhoverDelay#][!UpdateMeter Link30][!Redraw]
LeftMouseUpAction=!execute [[MeasureLinkUrl30]]

