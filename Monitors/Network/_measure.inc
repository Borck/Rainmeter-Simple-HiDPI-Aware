[measureNetUp]
Measure=NetOut
Substitute="k":"K","m":"M","g":"G","t":"T"
NetOutSpeed=#MaxUL#

[measureNetDown]
Measure=NetIn
Substitute="k":"K","m":"M","g":"G","t":"T"
NetInSpeed=#MaxDL#
; NetInSpeed must be set so your maximun download speed for the download bar to scale correctly

[measureNetInAll]
Measure=NetIn
Cumulative=1
IfAboveValue=10000000000
IfAboveAction=!Execute [!RainmeterResetStats]

[measureNetOutAll]
Measure=NetOut
Cumulative=1
IfAboveValue=5000000000
IfAboveAction=!Execute [!RainmeterResetStats]

[measureExternalIP]
Measure=Plugin
Plugin=Plugins\WebParser.dll
URL=http://checkip.dyndns.org
RegExp="(?siU)<body>(.+)Address: (.+)</body>"
StringIndex=2
UpdateRate=3600
