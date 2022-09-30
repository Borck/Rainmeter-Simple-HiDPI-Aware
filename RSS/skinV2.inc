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
;//------------- title -----------------------//
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
;//------------- basics ----------------------//
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



;//-------------------------------------------//
;//------------- feeds -----------------------//
;//-------------------------------------------//

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
ToolTipText=[MeasureLinkTitle1]

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
ToolTipText=[MeasureLinkTitle2]

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
ToolTipText=[MeasureLinkTitle3]

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
ToolTipText=[MeasureLinkTitle4]

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
ToolTipText=[MeasureLinkTitle5]

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
ToolTipText=[MeasureLinkTitle6]

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
ToolTipText=[MeasureLinkTitle7]

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
ToolTipText=[MeasureLinkTitle8]

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
ToolTipText=[MeasureLinkTitle9]

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
ToolTipText=[MeasureLinkTitle10]

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
ToolTipText=[MeasureLinkTitle11]

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
ToolTipText=[MeasureLinkTitle12]

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
ToolTipText=[MeasureLinkTitle13]

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
ToolTipText=[MeasureLinkTitle14]

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
ToolTipText=[MeasureLinkTitle15]

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
ToolTipText=[MeasureLinkTitle16]

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
ToolTipText=[MeasureLinkTitle17]

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
ToolTipText=[MeasureLinkTitle18]

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
ToolTipText=[MeasureLinkTitle19]

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
ToolTipText=[MeasureLinkTitle20]

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
ToolTipText=[MeasureLinkTitle21]

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
ToolTipText=[MeasureLinkTitle22]

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
ToolTipText=[MeasureLinkTitle23]

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
ToolTipText=[MeasureLinkTitle24]

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
ToolTipText=[MeasureLinkTitle25]

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
ToolTipText=[MeasureLinkTitle26]

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
ToolTipText=[MeasureLinkTitle27]

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
ToolTipText=[MeasureLinkTitle28]

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
ToolTipText=[MeasureLinkTitle29]

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
ToolTipText=[MeasureLinkTitle30]

[MeasureLinkTitle31]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=31)?31:-1
Type=Title
Substitute=#Substitute#

[MeasureLinkUrl31]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=31)?31:-1
Type=URL
Substitute="&amp;":"&"

[Link31]
Meter=STRING
Group=Links
MeasureName=MeasureLinkTitle31
MeterStyle=LinkDefaultStyle
Y=(#Entries#>=31)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=31)*#LineHeight#
Hidden=(#Entries#<31)?1:0
UpdateDivider=-1
MouseOverAction=[!SetOption Link31 MeterStyle LinkHoverStyle][!UpdateMeter Link31][!Redraw]
MouseLeaveAction=[!SetOption Link31 MeterStyle LinkDefaultStyle][!Delay #LinkUnhoverDelay#][!UpdateMeter Link31][!Redraw]
LeftMouseUpAction=!execute [[MeasureLinkUrl31]]
ToolTipText=[MeasureLinkTitle31]

[MeasureLinkTitle32]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=32)?32:-1
Type=Title
Substitute=#Substitute#

[MeasureLinkUrl32]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=32)?32:-1
Type=URL
Substitute="&amp;":"&"

[Link32]
Meter=STRING
Group=Links
MeasureName=MeasureLinkTitle32
MeterStyle=LinkDefaultStyle
Y=(#Entries#>=32)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=32)*#LineHeight#
Hidden=(#Entries#<32)?1:0
UpdateDivider=-1
MouseOverAction=[!SetOption Link32 MeterStyle LinkHoverStyle][!UpdateMeter Link32][!Redraw]
MouseLeaveAction=[!SetOption Link32 MeterStyle LinkDefaultStyle][!Delay #LinkUnhoverDelay#][!UpdateMeter Link32][!Redraw]
LeftMouseUpAction=!execute [[MeasureLinkUrl32]]
ToolTipText=[MeasureLinkTitle32]

[MeasureLinkTitle33]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=33)?33:-1
Type=Title
Substitute=#Substitute#

[MeasureLinkUrl33]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=33)?33:-1
Type=URL
Substitute="&amp;":"&"

[Link33]
Meter=STRING
Group=Links
MeasureName=MeasureLinkTitle33
MeterStyle=LinkDefaultStyle
Y=(#Entries#>=33)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=33)*#LineHeight#
Hidden=(#Entries#<33)?1:0
UpdateDivider=-1
MouseOverAction=[!SetOption Link33 MeterStyle LinkHoverStyle][!UpdateMeter Link33][!Redraw]
MouseLeaveAction=[!SetOption Link33 MeterStyle LinkDefaultStyle][!Delay #LinkUnhoverDelay#][!UpdateMeter Link33][!Redraw]
LeftMouseUpAction=!execute [[MeasureLinkUrl33]]
ToolTipText=[MeasureLinkTitle33]

[MeasureLinkTitle34]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=34)?34:-1
Type=Title
Substitute=#Substitute#

[MeasureLinkUrl34]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=34)?34:-1
Type=URL
Substitute="&amp;":"&"

[Link34]
Meter=STRING
Group=Links
MeasureName=MeasureLinkTitle34
MeterStyle=LinkDefaultStyle
Y=(#Entries#>=34)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=34)*#LineHeight#
Hidden=(#Entries#<34)?1:0
UpdateDivider=-1
MouseOverAction=[!SetOption Link34 MeterStyle LinkHoverStyle][!UpdateMeter Link34][!Redraw]
MouseLeaveAction=[!SetOption Link34 MeterStyle LinkDefaultStyle][!Delay #LinkUnhoverDelay#][!UpdateMeter Link34][!Redraw]
LeftMouseUpAction=!execute [[MeasureLinkUrl34]]
ToolTipText=[MeasureLinkTitle34]

[MeasureLinkTitle35]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=35)?35:-1
Type=Title
Substitute=#Substitute#

[MeasureLinkUrl35]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=35)?35:-1
Type=URL
Substitute="&amp;":"&"

[Link35]
Meter=STRING
Group=Links
MeasureName=MeasureLinkTitle35
MeterStyle=LinkDefaultStyle
Y=(#Entries#>=35)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=35)*#LineHeight#
Hidden=(#Entries#<35)?1:0
UpdateDivider=-1
MouseOverAction=[!SetOption Link35 MeterStyle LinkHoverStyle][!UpdateMeter Link35][!Redraw]
MouseLeaveAction=[!SetOption Link35 MeterStyle LinkDefaultStyle][!Delay #LinkUnhoverDelay#][!UpdateMeter Link35][!Redraw]
LeftMouseUpAction=!execute [[MeasureLinkUrl35]]
ToolTipText=[MeasureLinkTitle35]

[MeasureLinkTitle36]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=36)?36:-1
Type=Title
Substitute=#Substitute#

[MeasureLinkUrl36]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=36)?36:-1
Type=URL
Substitute="&amp;":"&"

[Link36]
Meter=STRING
Group=Links
MeasureName=MeasureLinkTitle36
MeterStyle=LinkDefaultStyle
Y=(#Entries#>=36)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=36)*#LineHeight#
Hidden=(#Entries#<36)?1:0
UpdateDivider=-1
MouseOverAction=[!SetOption Link36 MeterStyle LinkHoverStyle][!UpdateMeter Link36][!Redraw]
MouseLeaveAction=[!SetOption Link36 MeterStyle LinkDefaultStyle][!Delay #LinkUnhoverDelay#][!UpdateMeter Link36][!Redraw]
LeftMouseUpAction=!execute [[MeasureLinkUrl36]]
ToolTipText=[MeasureLinkTitle36]

[MeasureLinkTitle37]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=37)?37:-1
Type=Title
Substitute=#Substitute#

[MeasureLinkUrl37]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=37)?37:-1
Type=URL
Substitute="&amp;":"&"

[Link37]
Meter=STRING
Group=Links
MeasureName=MeasureLinkTitle37
MeterStyle=LinkDefaultStyle
Y=(#Entries#>=37)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=37)*#LineHeight#
Hidden=(#Entries#<37)?1:0
UpdateDivider=-1
MouseOverAction=[!SetOption Link37 MeterStyle LinkHoverStyle][!UpdateMeter Link37][!Redraw]
MouseLeaveAction=[!SetOption Link37 MeterStyle LinkDefaultStyle][!Delay #LinkUnhoverDelay#][!UpdateMeter Link37][!Redraw]
LeftMouseUpAction=!execute [[MeasureLinkUrl37]]
ToolTipText=[MeasureLinkTitle37]

[MeasureLinkTitle38]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=38)?38:-1
Type=Title
Substitute=#Substitute#

[MeasureLinkUrl38]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=38)?38:-1
Type=URL
Substitute="&amp;":"&"

[Link38]
Meter=STRING
Group=Links
MeasureName=MeasureLinkTitle38
MeterStyle=LinkDefaultStyle
Y=(#Entries#>=38)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=38)*#LineHeight#
Hidden=(#Entries#<38)?1:0
UpdateDivider=-1
MouseOverAction=[!SetOption Link38 MeterStyle LinkHoverStyle][!UpdateMeter Link38][!Redraw]
MouseLeaveAction=[!SetOption Link38 MeterStyle LinkDefaultStyle][!Delay #LinkUnhoverDelay#][!UpdateMeter Link38][!Redraw]
LeftMouseUpAction=!execute [[MeasureLinkUrl38]]
ToolTipText=[MeasureLinkTitle38]

[MeasureLinkTitle39]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=39)?39:-1
Type=Title
Substitute=#Substitute#

[MeasureLinkUrl39]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=39)?39:-1
Type=URL
Substitute="&amp;":"&"

[Link39]
Meter=STRING
Group=Links
MeasureName=MeasureLinkTitle39
MeterStyle=LinkDefaultStyle
Y=(#Entries#>=39)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=39)*#LineHeight#
Hidden=(#Entries#<39)?1:0
UpdateDivider=-1
MouseOverAction=[!SetOption Link39 MeterStyle LinkHoverStyle][!UpdateMeter Link39][!Redraw]
MouseLeaveAction=[!SetOption Link39 MeterStyle LinkDefaultStyle][!Delay #LinkUnhoverDelay#][!UpdateMeter Link39][!Redraw]
LeftMouseUpAction=!execute [[MeasureLinkUrl39]]
ToolTipText=[MeasureLinkTitle39]

[MeasureLinkTitle40]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=40)?40:-1
Type=Title
Substitute=#Substitute#

[MeasureLinkUrl40]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=40)?40:-1
Type=URL
Substitute="&amp;":"&"

[Link40]
Meter=STRING
Group=Links
MeasureName=MeasureLinkTitle40
MeterStyle=LinkDefaultStyle
Y=(#Entries#>=40)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=40)*#LineHeight#
Hidden=(#Entries#<40)?1:0
UpdateDivider=-1
MouseOverAction=[!SetOption Link40 MeterStyle LinkHoverStyle][!UpdateMeter Link40][!Redraw]
MouseLeaveAction=[!SetOption Link40 MeterStyle LinkDefaultStyle][!Delay #LinkUnhoverDelay#][!UpdateMeter Link40][!Redraw]
LeftMouseUpAction=!execute [[MeasureLinkUrl40]]
ToolTipText=[MeasureLinkTitle40]

[MeasureLinkTitle41]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=41)?41:-1
Type=Title
Substitute=#Substitute#

[MeasureLinkUrl41]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=41)?41:-1
Type=URL
Substitute="&amp;":"&"

[Link41]
Meter=STRING
Group=Links
MeasureName=MeasureLinkTitle41
MeterStyle=LinkDefaultStyle
Y=(#Entries#>=41)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=41)*#LineHeight#
Hidden=(#Entries#<41)?1:0
UpdateDivider=-1
MouseOverAction=[!SetOption Link41 MeterStyle LinkHoverStyle][!UpdateMeter Link41][!Redraw]
MouseLeaveAction=[!SetOption Link41 MeterStyle LinkDefaultStyle][!Delay #LinkUnhoverDelay#][!UpdateMeter Link41][!Redraw]
LeftMouseUpAction=!execute [[MeasureLinkUrl41]]
ToolTipText=[MeasureLinkTitle41]

[MeasureLinkTitle42]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=42)?42:-1
Type=Title
Substitute=#Substitute#

[MeasureLinkUrl42]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=42)?42:-1
Type=URL
Substitute="&amp;":"&"

[Link42]
Meter=STRING
Group=Links
MeasureName=MeasureLinkTitle42
MeterStyle=LinkDefaultStyle
Y=(#Entries#>=42)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=42)*#LineHeight#
Hidden=(#Entries#<42)?1:0
UpdateDivider=-1
MouseOverAction=[!SetOption Link42 MeterStyle LinkHoverStyle][!UpdateMeter Link42][!Redraw]
MouseLeaveAction=[!SetOption Link42 MeterStyle LinkDefaultStyle][!Delay #LinkUnhoverDelay#][!UpdateMeter Link42][!Redraw]
LeftMouseUpAction=!execute [[MeasureLinkUrl42]]
ToolTipText=[MeasureLinkTitle42]

[MeasureLinkTitle43]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=43)?43:-1
Type=Title
Substitute=#Substitute#

[MeasureLinkUrl43]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=43)?43:-1
Type=URL
Substitute="&amp;":"&"

[Link43]
Meter=STRING
Group=Links
MeasureName=MeasureLinkTitle43
MeterStyle=LinkDefaultStyle
Y=(#Entries#>=43)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=43)*#LineHeight#
Hidden=(#Entries#<43)?1:0
UpdateDivider=-1
MouseOverAction=[!SetOption Link43 MeterStyle LinkHoverStyle][!UpdateMeter Link43][!Redraw]
MouseLeaveAction=[!SetOption Link43 MeterStyle LinkDefaultStyle][!Delay #LinkUnhoverDelay#][!UpdateMeter Link43][!Redraw]
LeftMouseUpAction=!execute [[MeasureLinkUrl43]]
ToolTipText=[MeasureLinkTitle43]

[MeasureLinkTitle44]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=44)?44:-1
Type=Title
Substitute=#Substitute#

[MeasureLinkUrl44]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=44)?44:-1
Type=URL
Substitute="&amp;":"&"

[Link44]
Meter=STRING
Group=Links
MeasureName=MeasureLinkTitle44
MeterStyle=LinkDefaultStyle
Y=(#Entries#>=44)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=44)*#LineHeight#
Hidden=(#Entries#<44)?1:0
UpdateDivider=-1
MouseOverAction=[!SetOption Link44 MeterStyle LinkHoverStyle][!UpdateMeter Link44][!Redraw]
MouseLeaveAction=[!SetOption Link44 MeterStyle LinkDefaultStyle][!Delay #LinkUnhoverDelay#][!UpdateMeter Link44][!Redraw]
LeftMouseUpAction=!execute [[MeasureLinkUrl44]]
ToolTipText=[MeasureLinkTitle44]

[MeasureLinkTitle45]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=45)?45:-1
Type=Title
Substitute=#Substitute#

[MeasureLinkUrl45]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=45)?45:-1
Type=URL
Substitute="&amp;":"&"

[Link45]
Meter=STRING
Group=Links
MeasureName=MeasureLinkTitle45
MeterStyle=LinkDefaultStyle
Y=(#Entries#>=45)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=45)*#LineHeight#
Hidden=(#Entries#<45)?1:0
UpdateDivider=-1
MouseOverAction=[!SetOption Link45 MeterStyle LinkHoverStyle][!UpdateMeter Link45][!Redraw]
MouseLeaveAction=[!SetOption Link45 MeterStyle LinkDefaultStyle][!Delay #LinkUnhoverDelay#][!UpdateMeter Link45][!Redraw]
LeftMouseUpAction=!execute [[MeasureLinkUrl45]]
ToolTipText=[MeasureLinkTitle45]

[MeasureLinkTitle46]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=46)?46:-1
Type=Title
Substitute=#Substitute#

[MeasureLinkUrl46]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=46)?46:-1
Type=URL
Substitute="&amp;":"&"

[Link46]
Meter=STRING
Group=Links
MeasureName=MeasureLinkTitle46
MeterStyle=LinkDefaultStyle
Y=(#Entries#>=46)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=46)*#LineHeight#
Hidden=(#Entries#<46)?1:0
UpdateDivider=-1
MouseOverAction=[!SetOption Link46 MeterStyle LinkHoverStyle][!UpdateMeter Link46][!Redraw]
MouseLeaveAction=[!SetOption Link46 MeterStyle LinkDefaultStyle][!Delay #LinkUnhoverDelay#][!UpdateMeter Link46][!Redraw]
LeftMouseUpAction=!execute [[MeasureLinkUrl46]]
ToolTipText=[MeasureLinkTitle46]

[MeasureLinkTitle47]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=47)?47:-1
Type=Title
Substitute=#Substitute#

[MeasureLinkUrl47]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=47)?47:-1
Type=URL
Substitute="&amp;":"&"

[Link47]
Meter=STRING
Group=Links
MeasureName=MeasureLinkTitle47
MeterStyle=LinkDefaultStyle
Y=(#Entries#>=47)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=47)*#LineHeight#
Hidden=(#Entries#<47)?1:0
UpdateDivider=-1
MouseOverAction=[!SetOption Link47 MeterStyle LinkHoverStyle][!UpdateMeter Link47][!Redraw]
MouseLeaveAction=[!SetOption Link47 MeterStyle LinkDefaultStyle][!Delay #LinkUnhoverDelay#][!UpdateMeter Link47][!Redraw]
LeftMouseUpAction=!execute [[MeasureLinkUrl47]]
ToolTipText=[MeasureLinkTitle47]

[MeasureLinkTitle48]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=48)?48:-1
Type=Title
Substitute=#Substitute#

[MeasureLinkUrl48]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=48)?48:-1
Type=URL
Substitute="&amp;":"&"

[Link48]
Meter=STRING
Group=Links
MeasureName=MeasureLinkTitle48
MeterStyle=LinkDefaultStyle
Y=(#Entries#>=48)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=48)*#LineHeight#
Hidden=(#Entries#<48)?1:0
UpdateDivider=-1
MouseOverAction=[!SetOption Link48 MeterStyle LinkHoverStyle][!UpdateMeter Link48][!Redraw]
MouseLeaveAction=[!SetOption Link48 MeterStyle LinkDefaultStyle][!Delay #LinkUnhoverDelay#][!UpdateMeter Link48][!Redraw]
LeftMouseUpAction=!execute [[MeasureLinkUrl48]]
ToolTipText=[MeasureLinkTitle48]

[MeasureLinkTitle49]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=49)?49:-1
Type=Title
Substitute=#Substitute#

[MeasureLinkUrl49]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=49)?49:-1
Type=URL
Substitute="&amp;":"&"

[Link49]
Meter=STRING
Group=Links
MeasureName=MeasureLinkTitle49
MeterStyle=LinkDefaultStyle
Y=(#Entries#>=49)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=49)*#LineHeight#
Hidden=(#Entries#<49)?1:0
UpdateDivider=-1
MouseOverAction=[!SetOption Link49 MeterStyle LinkHoverStyle][!UpdateMeter Link49][!Redraw]
MouseLeaveAction=[!SetOption Link49 MeterStyle LinkDefaultStyle][!Delay #LinkUnhoverDelay#][!UpdateMeter Link49][!Redraw]
LeftMouseUpAction=!execute [[MeasureLinkUrl49]]
ToolTipText=[MeasureLinkTitle49]

[MeasureLinkTitle50]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=50)?50:-1
Type=Title
Substitute=#Substitute#

[MeasureLinkUrl50]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>=50)?50:-1
Type=URL
Substitute="&amp;":"&"

[Link50]
Meter=STRING
Group=Links
MeasureName=MeasureLinkTitle50
MeterStyle=LinkDefaultStyle
Y=(#Entries#>=50)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=50)*#LineHeight#
Hidden=(#Entries#<50)?1:0
UpdateDivider=-1
MouseOverAction=[!SetOption Link50 MeterStyle LinkHoverStyle][!UpdateMeter Link50][!Redraw]
MouseLeaveAction=[!SetOption Link50 MeterStyle LinkDefaultStyle][!Delay #LinkUnhoverDelay#][!UpdateMeter Link50][!Redraw]
LeftMouseUpAction=!execute [[MeasureLinkUrl50]]
ToolTipText=[MeasureLinkTitle50]

