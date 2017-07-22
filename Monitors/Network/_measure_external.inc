[measureExternalIP]
Measure=Plugin
Plugin=Plugins\WebParser.dll
URL=http://checkip.dyndns.org
RegExp="(?siU)<body>(.+)Address: (.+)</body>"
StringIndex=2
UpdateRate=3600
