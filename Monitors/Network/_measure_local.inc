[measureNetIn]
Measure=NetIn
Substitute="k":"K","m":"M","g":"G","t":"T"
NetInSpeed=#MaxUL#

[measureNetInAll]
Measure=NetIn
Cumulative=1
IfAboveValue=10000000000
IfAboveAction=!Execute [!RainmeterResetStats]

[measureNetOut]
Measure=NetOut
Substitute="k":"K","m":"M","g":"G","t":"T"
NetOutSpeed=#MaxDL#
; NetInSpeed must be set so your maximun download speed for the download bar to scale correctly

[measureNetOutAll]
Measure=NetOut
Cumulative=1
IfAboveValue=5000000000
IfAboveAction=!Execute [!RainmeterResetStats]

