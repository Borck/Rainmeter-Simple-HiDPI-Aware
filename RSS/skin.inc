[Variables]
@includeVars=#@#variables.inc
@includeStyles=#@#styles.inc
HeaderSize=#FontSizeH2#

[TitleStyle]
FontColor=#ColorHighlight#
FontSize=#HeaderSize#
FontFace=#FontHeader#
AntiAlias=#AntiAlias#
SolidColor=0,0,0,1
Text=".:#Title#:."
StringCase=UPPER
X=2

[FeedStyle]
W=#MaxTextWidth#
ClipString=1
StringStyle=NORMAL
FontColor=#ColorAccent3#
FontSize=#FontSizeText#
FontFace=#FontText#
AntiAlias=#AntiAlias#
SolidColor=0,0,0,1
X=2

[LinkStyle]
W=#MaxTextWidth#
ClipString=1
StringStyle=NORMAL
FontColor=#ColorAccent2#
FontSize=#FontSizeText#
FontFace=#FontText#
AntiAlias=#AntiAlias#
SolidColor=0,0,0,1
X=2

; ----------------------------------

[RSS]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=#URL#
RegExp=#Expression#
UpdateRate=60
StringIndex=1

[MeasureRSS1]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=1)?3:1
Substitute=#Substitute#

[MeasureLink1]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=1)?4:1
Substitute="&amp;":"&"

---

[MeasureRSS2]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=2)?5:1
Substitute=#Substitute#

[MeasureLink2]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=2)?6:1
Substitute="&amp;":"&"

---

[MeasureRSS3]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=3)?7:1
Substitute=#Substitute#

[MeasureLink3]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=3)?8:1
Substitute="&amp;":"&"

---

[MeasureRSS4]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=4)?9:1
Substitute=#Substitute#

[MeasureLink4]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=4)?10:1
Substitute="&amp;":"&"

---

[MeasureRSS5]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=5)?11:1
Substitute=#Substitute#

[MeasureLink5]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=5)?12:1
Substitute="&amp;":"&"

---

[MeasureRSS6]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=6)?13:1
Substitute=#Substitute#

[MeasureLink6]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=6)?14:1
Substitute="&amp;":"&"

---

[MeasureRSS7]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=7)?15:1
Substitute=#Substitute#

[MeasureLink7]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=7)?16:1
Substitute="&amp;":"&"

---

[MeasureRSS8]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=8)?17:1
Substitute=#Substitute#

[MeasureLink8]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=8)?18:1
Substitute="&amp;":"&"

---

[MeasureRSS9]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=9)?19:1
Substitute=#Substitute#

[MeasureLink9]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=9)?20:1
Substitute="&amp;":"&"

---

[MeasureRSS10]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=10)?21:1
Substitute=#Substitute#

[MeasureLink10]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=10)?22:1
Substitute="&amp;":"&"

---

[MeasureRSS11]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=11)?23:1
Substitute=#Substitute#

[MeasureLink11]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=11)?24:1
Substitute="&amp;":"&"

---

[MeasureRSS12]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=12)?25:1
Substitute=#Substitute#

[MeasureLink12]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=12)?26:1
Substitute="&amp;":"&"

[MeasureRSS13]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=13)?27:1
Substitute=#Substitute#

[MeasureLink13]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=13)?28:1
Substitute="&amp;":"&"

[MeasureRSS14]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=14)?29:1
Substitute=#Substitute#

[MeasureLink14]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=14)?30:1
Substitute="&amp;":"&"

[MeasureRSS15]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=15)?31:1
Substitute=#Substitute#

[MeasureLink15]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=15)?32:1
Substitute="&amp;":"&"

[MeasureRSS16]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=16)?33:1
Substitute=#Substitute#

[MeasureLink16]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=16)?34:1
Substitute="&amp;":"&"

[MeasureRSS17]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=17)?35:1
Substitute=#Substitute#

[MeasureLink17]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=17)?36:1
Substitute="&amp;":"&"

[MeasureRSS18]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=18)?37:1
Substitute=#Substitute#

[MeasureLink18]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=18)?38:1
Substitute="&amp;":"&"

[MeasureRSS19]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=19)?39:1
Substitute=#Substitute#

[MeasureLink19]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=19)?40:1
Substitute="&amp;":"&"

[MeasureRSS20]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=20)?41:1
Substitute=#Substitute#

[MeasureLink20]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=20)?42:1
Substitute="&amp;":"&"

[MeasureRSS21]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=21)?43:1
Substitute=#Substitute#

[MeasureLink21]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=21)?44:1
Substitute="&amp;":"&"

[MeasureRSS22]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=22)?45:1
Substitute=#Substitute#

[MeasureLink22]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=22)?46:1
Substitute="&amp;":"&"

[MeasureRSS23]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=23)?47:1
Substitute=#Substitute#

[MeasureLink23]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=23)?48:1
Substitute="&amp;":"&"

[MeasureRSS24]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=24)?49:1
Substitute=#Substitute#

[MeasureLink24]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=24)?50:1
Substitute="&amp;":"&"

[MeasureRSS25]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=25)?51:1
Substitute=#Substitute#

[MeasureLink25]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[RSS]
StringIndex=(#Entries#>=25)?52:1
Substitute="&amp;":"&"

; ------------------------------------------------------------------------------------------------

[Title]
Meter=STRING
MeasureName=RSS
Y=0
MeterStyle=TitleStyle

[Feed1]
Meter=STRING
MeasureName=MeasureRSS1
Y=(#Entries#>=1)*(#HeaderSpacing#+#HeaderSize#)r
H=(#Entries#>=1)*#LineHeight#
MeterStyle=FeedStyle
Hidden=(#Entries#<1)?1:0
MouseOverAction=!execute [!RainmeterShowMeter Link1][!RainmeterHideMeter Feed1][!RainmeterRedraw]

[Link1]
Meter=STRING
MeasureName=MeasureRSS1
X=r
Y=r
H=(#Entries#>=1)*#LineHeight#
MeterStyle=LinkStyle
Hidden=1
MouseLeaveAction=!execute [!RainmeterShowMeter Feed1][!RainmeterHideMeter Link1][!RainmeterRedraw]
LeftMouseDownAction=!execute [[MeasureLink1]]

[Feed2]
Meter=STRING
MeasureName=MeasureRSS2
MeasureName2=MeasureLink2
X=2
Y=(#Entries#>=2)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=2)*#LineHeight#
MeterStyle=FeedStyle
Hidden=(#Entries#<2)?1:0
MouseOverAction=!execute [!RainmeterShowMeter Link2][!RainmeterHideMeter Feed2][!RainmeterRedraw]

[Link2]
Meter=STRING
MeasureName=MeasureRSS2
X=r
Y=r
H=(#Entries#>=2)*#LineHeight#
MeterStyle=LinkStyle
Hidden=1
MouseLeaveAction=!execute [!RainmeterShowMeter Feed2][!RainmeterHideMeter Link2][!RainmeterRedraw]
LeftMouseDownAction=!execute [[MeasureLink2]]

[Feed3]
Meter=STRING
MeasureName=MeasureRSS3
MeasureName2=MeasureLink3
X=2
Y=(#Entries#>=3)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=3)*#LineHeight#
MeterStyle=FeedStyle
Hidden=(#Entries#<3)?1:0
MouseOverAction=!execute [!RainmeterShowMeter Link3][!RainmeterHideMeter Feed3][!RainmeterRedraw]

[Link3]
Meter=STRING
MeasureName=MeasureRSS3
X=r
Y=r
H=(#Entries#>=3)*#LineHeight#
MeterStyle=LinkStyle
Hidden=1
MouseLeaveAction=!execute [!RainmeterShowMeter Feed3][!RainmeterHideMeter Link3][!RainmeterRedraw]
LeftMouseDownAction=!execute [[MeasureLink3]]

[Feed4]
Meter=STRING
MeasureName=MeasureRSS4
MeasureName2=MeasureLink4
X=2
Y=(#Entries#>=4)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=4)*#LineHeight#
MeterStyle=FeedStyle
Hidden=(#Entries#<4)?1:0
MouseOverAction=!execute [!RainmeterShowMeter Link4][!RainmeterHideMeter Feed4][!RainmeterRedraw]

[Link4]
Meter=STRING
MeasureName=MeasureRSS4
X=r
Y=r
H=(#Entries#>=4)*#LineHeight#
MeterStyle=LinkStyle
Hidden=1
MouseLeaveAction=!execute [!RainmeterShowMeter Feed4][!RainmeterHideMeter Link4][!RainmeterRedraw]
LeftMouseDownAction=!execute [[MeasureLink4]]

[Feed5]
Meter=STRING
MeasureName=MeasureRSS5
MeasureName2=MeasureLink5
X=2
Y=(#Entries#>=5)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=5)*#LineHeight#
MeterStyle=FeedStyle
Hidden=(#Entries#<5)?1:0
MouseOverAction=!execute [!RainmeterShowMeter Link5][!RainmeterHideMeter Feed5][!RainmeterRedraw]

[Link5]
Meter=STRING
MeasureName=MeasureRSS5
X=r
Y=r
H=(#Entries#>=5)*#LineHeight#
MeterStyle=LinkStyle
Hidden=1
MouseLeaveAction=!execute [!RainmeterShowMeter Feed5][!RainmeterHideMeter Link5][!RainmeterRedraw]
LeftMouseDownAction=!execute [[MeasureLink5]]

[Feed6]
Meter=STRING
MeasureName=MeasureRSS6
MeasureName2=MeasureLink6
X=2
Y=(#Entries#>=6)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=6)*#LineHeight#
MeterStyle=FeedStyle
Hidden=(#Entries#<6)?1:0
MouseOverAction=!execute [!RainmeterShowMeter Link6][!RainmeterHideMeter Feed6][!RainmeterRedraw]

[Link6]
Meter=STRING
MeasureName=MeasureRSS6
X=r
Y=r
H=(#Entries#>=6)*#LineHeight#
MeterStyle=LinkStyle
Hidden=1
MouseLeaveAction=!execute [!RainmeterShowMeter Feed6][!RainmeterHideMeter Link6][!RainmeterRedraw]
LeftMouseDownAction=!execute [[MeasureLink6]]

[Feed7]
Meter=STRING
MeasureName=MeasureRSS7
MeasureName2=MeasureLink7
X=2
Y=(#Entries#>=7)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=7)*#LineHeight#
MeterStyle=FeedStyle
Hidden=(#Entries#<7)?1:0
MouseOverAction=!execute [!RainmeterShowMeter Link7][!RainmeterHideMeter Feed7][!RainmeterRedraw]

[Link7]
Meter=STRING
MeasureName=MeasureRSS7
X=r
Y=r
H=(#Entries#>=7)*#LineHeight#
MeterStyle=LinkStyle
Hidden=1
MouseLeaveAction=!execute [!RainmeterShowMeter Feed7][!RainmeterHideMeter Link7][!RainmeterRedraw]
LeftMouseDownAction=!execute [[MeasureLink7]]

[Feed8]
Meter=STRING
MeasureName=MeasureRSS8
MeasureName2=MeasureLink8
X=2
Y=(#Entries#>=8)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=8)*#LineHeight#
MeterStyle=FeedStyle
Hidden=(#Entries#<8)?1:0
MouseOverAction=!execute [!RainmeterShowMeter Link8][!RainmeterHideMeter Feed8][!RainmeterRedraw]

[Link8]
Meter=STRING
MeasureName=MeasureRSS8
X=r
Y=r
H=(#Entries#>=8)*#LineHeight#
MeterStyle=LinkStyle
Hidden=1
MouseLeaveAction=!execute [!RainmeterShowMeter Feed8][!RainmeterHideMeter Link8][!RainmeterRedraw]
LeftMouseDownAction=!execute [[MeasureLink8]]

[Feed9]
Meter=STRING
MeasureName=MeasureRSS9
MeasureName2=MeasureLink9
X=2
Y=(#Entries#>=9)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=9)*#LineHeight#
MeterStyle=FeedStyle
Hidden=(#Entries#<9)?1:0
MouseOverAction=!execute [!RainmeterShowMeter Link9][!RainmeterHideMeter Feed9][!RainmeterRedraw]

[Link9]
Meter=STRING
MeasureName=MeasureRSS9
X=r
Y=r
H=(#Entries#>=9)*#LineHeight#
MeterStyle=LinkStyle
Hidden=1
MouseLeaveAction=!execute [!RainmeterShowMeter Feed9][!RainmeterHideMeter Link9][!RainmeterRedraw]
LeftMouseDownAction=!execute [[MeasureLink9]]

[Feed10]
Meter=STRING
MeasureName=MeasureRSS10
MeasureName2=MeasureLink10
X=2
Y=(#Entries#>=10)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=10)*#LineHeight#
MeterStyle=FeedStyle
Hidden=(#Entries#<10)?1:0
MouseOverAction=!execute [!RainmeterShowMeter Link10][!RainmeterHideMeter Feed10][!RainmeterRedraw]

[Link10]
Meter=STRING
MeasureName=MeasureRSS10
X=r
Y=r
H=(#Entries#>=10)*#LineHeight#
MeterStyle=LinkStyle
Hidden=1
MouseLeaveAction=!execute [!RainmeterShowMeter Feed10][!RainmeterHideMeter Link10][!RainmeterRedraw]
LeftMouseDownAction=!execute [[MeasureLink10]]

[Feed11]
Meter=STRING
MeasureName=MeasureRSS11
MeasureName2=MeasureLink11
X=2
Y=(#Entries#>=11)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=11)*#LineHeight#
MeterStyle=FeedStyle
Hidden=(#Entries#<11)?1:0
MouseOverAction=!execute [!RainmeterShowMeter Link11][!RainmeterHideMeter Feed11][!RainmeterRedraw]

[Link11]
Meter=STRING
MeasureName=MeasureRSS11
X=r
Y=r
H=(#Entries#>=11)*#LineHeight#
MeterStyle=LinkStyle
Hidden=1
MouseLeaveAction=!execute [!RainmeterShowMeter Feed11][!RainmeterHideMeter Link11][!RainmeterRedraw]
LeftMouseDownAction=!execute [[MeasureLink11]]

[Feed12]
Meter=STRING
MeasureName=MeasureRSS12
MeasureName2=MeasureLink12
X=2
Y=(#Entries#>=12)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=12)*#LineHeight#
MeterStyle=FeedStyle
Hidden=(#Entries#<12)?1:0
MouseOverAction=!execute [!RainmeterShowMeter Link12][!RainmeterHideMeter Feed12][!RainmeterRedraw]

[Link12]
Meter=STRING
MeasureName=MeasureRSS12
X=r
Y=r
H=(#Entries#>=12)*#LineHeight#
MeterStyle=LinkStyle
Hidden=1
MouseLeaveAction=!execute [!RainmeterShowMeter Feed12][!RainmeterHideMeter Link12][!RainmeterRedraw]
LeftMouseDownAction=!execute [[MeasureLink12]]

[Feed13]
Meter=STRING
MeasureName=MeasureRSS13
MeasureName2=MeasureLink13
X=2
Y=(#Entries#>=13)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=13)*#LineHeight#
MeterStyle=FeedStyle
Hidden=(#Entries#<13)?1:0
MouseOverAction=!execute [!RainmeterShowMeter Link13][!RainmeterHideMeter Feed13][!RainmeterRedraw]

[Link13]
Meter=STRING
MeasureName=MeasureRSS13
X=r
Y=r
H=(#Entries#>=13)*#LineHeight#
MeterStyle=LinkStyle
Hidden=1
MouseLeaveAction=!execute [!RainmeterShowMeter Feed13][!RainmeterHideMeter Link13][!RainmeterRedraw]
LeftMouseDownAction=!execute [[MeasureLink13]]

[Feed14]
Meter=STRING
MeasureName=MeasureRSS14
MeasureName2=MeasureLink14
X=2
Y=(#Entries#>=14)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=14)*#LineHeight#
MeterStyle=FeedStyle
Hidden=(#Entries#<14)?1:0
MouseOverAction=!execute [!RainmeterShowMeter Link14][!RainmeterHideMeter Feed14][!RainmeterRedraw]

[Link14]
Meter=STRING
MeasureName=MeasureRSS14
X=r
Y=r
H=(#Entries#>=14)*#LineHeight#
MeterStyle=LinkStyle
Hidden=1
MouseLeaveAction=!execute [!RainmeterShowMeter Feed14][!RainmeterHideMeter Link14][!RainmeterRedraw]
LeftMouseDownAction=!execute [[MeasureLink14]]

[Feed15]
Meter=STRING
MeasureName=MeasureRSS15
MeasureName2=MeasureLink15
X=2
Y=(#Entries#>=15)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=15)*#LineHeight#
MeterStyle=FeedStyle
Hidden=(#Entries#<15)?1:0
MouseOverAction=!execute [!RainmeterShowMeter Link15][!RainmeterHideMeter Feed15][!RainmeterRedraw]

[Link15]
Meter=STRING
MeasureName=MeasureRSS15
X=r
Y=r
H=(#Entries#>=15)*#LineHeight#
MeterStyle=LinkStyle
Hidden=1
MouseLeaveAction=!execute [!RainmeterShowMeter Feed15][!RainmeterHideMeter Link15][!RainmeterRedraw]
LeftMouseDownAction=!execute [[MeasureLink15]]

[Feed16]
Meter=STRING
MeasureName=MeasureRSS16
MeasureName2=MeasureLink16
X=2
Y=(#Entries#>=16)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=16)*#LineHeight#
MeterStyle=FeedStyle
Hidden=(#Entries#<16)?1:0
MouseOverAction=!execute [!RainmeterShowMeter Link16][!RainmeterHideMeter Feed16][!RainmeterRedraw]

[Link16]
Meter=STRING
MeasureName=MeasureRSS16
X=r
Y=r
H=(#Entries#>=16)*#LineHeight#
MeterStyle=LinkStyle
Hidden=1
MouseLeaveAction=!execute [!RainmeterShowMeter Feed16][!RainmeterHideMeter Link16][!RainmeterRedraw]
LeftMouseDownAction=!execute [[MeasureLink16]]

[Feed17]
Meter=STRING
MeasureName=MeasureRSS17
MeasureName2=MeasureLink17
X=2
Y=(#Entries#>=17)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=17)*#LineHeight#
MeterStyle=FeedStyle
Hidden=(#Entries#<17)?1:0
MouseOverAction=!execute [!RainmeterShowMeter Link17][!RainmeterHideMeter Feed17][!RainmeterRedraw]

[Link17]
Meter=STRING
MeasureName=MeasureRSS17
X=r
Y=r
H=(#Entries#>=17)*#LineHeight#
MeterStyle=LinkStyle
Hidden=1
MouseLeaveAction=!execute [!RainmeterShowMeter Feed17][!RainmeterHideMeter Link17][!RainmeterRedraw]
LeftMouseDownAction=!execute [[MeasureLink17]]

[Feed18]
Meter=STRING
MeasureName=MeasureRSS18
MeasureName2=MeasureLink18
X=2
Y=(#Entries#>=18)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=18)*#LineHeight#
MeterStyle=FeedStyle
Hidden=(#Entries#<18)?1:0
MouseOverAction=!execute [!RainmeterShowMeter Link18][!RainmeterHideMeter Feed18][!RainmeterRedraw]

[Link18]
Meter=STRING
MeasureName=MeasureRSS18
X=r
Y=r
H=(#Entries#>=18)*#LineHeight#
MeterStyle=LinkStyle
Hidden=1
MouseLeaveAction=!execute [!RainmeterShowMeter Feed18][!RainmeterHideMeter Link18][!RainmeterRedraw]
LeftMouseDownAction=!execute [[MeasureLink18]]

[Feed19]
Meter=STRING
MeasureName=MeasureRSS19
MeasureName2=MeasureLink19
X=2
Y=(#Entries#>=19)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=19)*#LineHeight#
MeterStyle=FeedStyle
Hidden=(#Entries#<19)?1:0
MouseOverAction=!execute [!RainmeterShowMeter Link19][!RainmeterHideMeter Feed19][!RainmeterRedraw]

[Link19]
Meter=STRING
MeasureName=MeasureRSS19
X=r
Y=r
H=(#Entries#>=19)*#LineHeight#
MeterStyle=LinkStyle
Hidden=1
MouseLeaveAction=!execute [!RainmeterShowMeter Feed19][!RainmeterHideMeter Link19][!RainmeterRedraw]
LeftMouseDownAction=!execute [[MeasureLink19]]

[Feed20]
Meter=STRING
MeasureName=MeasureRSS20
MeasureName2=MeasureLink20
X=2
Y=(#Entries#>=20)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=20)*#LineHeight#
MeterStyle=FeedStyle
Hidden=(#Entries#<20)?1:0
MouseOverAction=!execute [!RainmeterShowMeter Link20][!RainmeterHideMeter Feed20][!RainmeterRedraw]

[Link20]
Meter=STRING
MeasureName=MeasureRSS20
X=r
Y=r
H=(#Entries#>=20)*#LineHeight#
MeterStyle=LinkStyle
Hidden=1
MouseLeaveAction=!execute [!RainmeterShowMeter Feed20][!RainmeterHideMeter Link20][!RainmeterRedraw]
LeftMouseDownAction=!execute [[MeasureLink20]]

[Feed21]
Meter=STRING
MeasureName=MeasureRSS21
MeasureName2=MeasureLink21
X=2
Y=(#Entries#>=21)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=21)*#LineHeight#
MeterStyle=FeedStyle
Hidden=(#Entries#<21)?1:0
MouseOverAction=!execute [!RainmeterShowMeter Link21][!RainmeterHideMeter Feed21][!RainmeterRedraw]

[Link21]
Meter=STRING
MeasureName=MeasureRSS21
X=r
Y=r
H=(#Entries#>=21)*#LineHeight#
MeterStyle=LinkStyle
Hidden=1
MouseLeaveAction=!execute [!RainmeterShowMeter Feed21][!RainmeterHideMeter Link21][!RainmeterRedraw]
LeftMouseDownAction=!execute [[MeasureLink21]]

[Feed22]
Meter=STRING
MeasureName=MeasureRSS22
MeasureName2=MeasureLink22
X=2
Y=(#Entries#>=22)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=22)*#LineHeight#
MeterStyle=FeedStyle
Hidden=(#Entries#<22)?1:0
MouseOverAction=!execute [!RainmeterShowMeter Link22][!RainmeterHideMeter Feed22][!RainmeterRedraw]

[Link22]
Meter=STRING
MeasureName=MeasureRSS22
X=r
Y=r
H=(#Entries#>=22)*#LineHeight#
MeterStyle=LinkStyle
Hidden=1
MouseLeaveAction=!execute [!RainmeterShowMeter Feed22][!RainmeterHideMeter Link22][!RainmeterRedraw]
LeftMouseDownAction=!execute [[MeasureLink22]]

[Feed23]
Meter=STRING
MeasureName=MeasureRSS23
MeasureName2=MeasureLink23
X=2
Y=(#Entries#>=23)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=23)*#LineHeight#
MeterStyle=FeedStyle
Hidden=(#Entries#<23)?1:0
MouseOverAction=!execute [!RainmeterShowMeter Link23][!RainmeterHideMeter Feed23][!RainmeterRedraw]

[Link23]
Meter=STRING
MeasureName=MeasureRSS23
X=r
Y=r
H=(#Entries#>=23)*#LineHeight#
MeterStyle=LinkStyle
Hidden=1
MouseLeaveAction=!execute [!RainmeterShowMeter Feed23][!RainmeterHideMeter Link23][!RainmeterRedraw]
LeftMouseDownAction=!execute [[MeasureLink23]]

[Feed24]
Meter=STRING
MeasureName=MeasureRSS24
MeasureName2=MeasureLink24
X=2
Y=(#Entries#>=24)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=24)*#LineHeight#
MeterStyle=FeedStyle
Hidden=(#Entries#<24)?1:0
MouseOverAction=!execute [!RainmeterShowMeter Link24][!RainmeterHideMeter Feed24][!RainmeterRedraw]

[Link24]
Meter=STRING
MeasureName=MeasureRSS24
X=r
Y=r
H=(#Entries#>=24)*#LineHeight#
MeterStyle=LinkStyle
Hidden=1
MouseLeaveAction=!execute [!RainmeterShowMeter Feed24][!RainmeterHideMeter Link24][!RainmeterRedraw]
LeftMouseDownAction=!execute [[MeasureLink24]]

[Feed25]
Meter=STRING
MeasureName=MeasureRSS25
MeasureName2=MeasureLink25
X=2
Y=(#Entries#>=25)*(#LineSpacing#+#LineHeight#)r
H=(#Entries#>=25)*#LineHeight#
MeterStyle=FeedStyle
Hidden=(#Entries#<24)?1:0
MouseOverAction=!execute [!RainmeterShowMeter Link25][!RainmeterHideMeter Feed25][!RainmeterRedraw]

[Link25]
Meter=STRING
MeasureName=MeasureRSS25
X=r
Y=r
H=(#Entries#>=25)*#LineHeight#
MeterStyle=LinkStyle
Hidden=1
MouseLeaveAction=!execute [!RainmeterShowMeter Feed25][!RainmeterHideMeter Link25][!RainmeterRedraw]
LeftMouseDownAction=!execute [[MeasureLink25]]

