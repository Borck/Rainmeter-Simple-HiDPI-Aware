[measureDownload]
Measure=NetIn
Substitute="k":"K","m":"M","g":"G","t":"T"
NetInSpeed=#MaxUL#

[measureDownloadAggregated]
Measure=NetIn
Cumulative=1
IfAboveValue=10000000000
IfAboveAction=!Execute [!RainmeterResetStats]

[measureUpload]
Measure=NetOut
Substitute="k":"K","m":"M","g":"G","t":"T"
NetOutSpeed=#MaxDL#
; NetInSpeed must be set so your maximun download speed for the download bar to scale correctly

[measureUploadAggregated]
Measure=NetOut
Cumulative=1
IfAboveValue=5000000000
IfAboveAction=!Execute [!RainmeterResetStats]

