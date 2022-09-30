import os

n = int(input("Maximum number of feeds:"))

with open(os.path.dirname(os.path.realpath(__file__)) + '/skinV2.inc', 'w') as f:
  f.write("""[Variables]
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
ImageName=#@#Images\\refresh_by_Becris_flaticon_com.png
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

""")

  for i in range(1, n+1):
    # print(x)
    f.write(f"""[MeasureLinkTitle{i}]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>={i})?{i}:-1
Type=Title
Substitute=#Substitute#

[MeasureLinkUrl{i}]
Measure=Plugin
Plugin=Plugins\FeedParser.dll
Parent=RSS
FeedIndex=(#Entries#>={i})?{i}:-1
Type=URL
Substitute="&amp;":"&"

[Link{i}]
Meter=STRING
Group=Links
MeasureName=MeasureLinkTitle{i}
MeterStyle=LinkDefaultStyle
Y=(#Entries#>={i})*{"(#HeaderSpacing#+#Y0Text#)" if i == 1 else "(#LineSpacing#+#LineHeight#)r"}
H=(#Entries#>={i})*#LineHeight#
Hidden=(#Entries#<{i})?1:0
UpdateDivider=-1
MouseOverAction=[!SetOption Link{i} MeterStyle LinkHoverStyle][!UpdateMeter Link{i}][!Redraw]
MouseLeaveAction=[!SetOption Link{i} MeterStyle LinkDefaultStyle][!Delay #LinkUnhoverDelay#][!UpdateMeter Link{i}][!Redraw]
LeftMouseUpAction=!execute [[MeasureLinkUrl{i}]]
ToolTipText=[MeasureLinkTitle{i}]

""")
