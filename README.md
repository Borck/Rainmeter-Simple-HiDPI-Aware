<style>
td, th {
   border: none!important;
   text-align:center;
}
</style>
# Rainmeter: Simple HiDPI-Aware
A minimalistic and flat skin pack for Rainmeter, which unlocks the awesomeness of HiDPI. Thus, skins are sharp on each scale level of the screen. The problem, that was solved is that the scaling is taken over by Windows itself, which scales an already rendered skin object to a blurry one. An enclosed DLL sets the dpi awareness flag for Rainmeter at runtime and thus the automatic scaling is disabled. It also provides the scale factor that can be used by meters.

![Simple HiDPI Aware](./@Doc/banner.png)

## Features

* All skins are scalable/HiDPI-aware
* Different news feed skins
  * Different predefined RSS feeds (mostly german)
  * Ability to procedurally change the number of displayed entries (up to 30)
  * Support for merging multiple feeds without the need of third party online services, including title prefixes to indicate different feed sources
* Different net meter skins
* Different weather meters (currently not responding)
* A theme changer skin,
* Skins for system shutdown/restart
* Different skin for visual layouting
* Skins are optimized for low CPU/GPU load

## Installation

To installation of Simple HiDPI-aware requires two components to be installed:
  
<table> 
  <tr>
    <td width=150px>
      <img height="100px" src="https://upload.wikimedia.org/wikipedia/commons/8/89/Rainmeter_Icon.svg"/>
      <p style="text-align: center">Rainmeter 4.3+</br><a href="https://www.rainmeter.net/">Download</a></p>
    </td>
    <td>
      <img height="100px" src="./@Doc/Rainstaller.png">
      <p style="text-align: center">Skin Pack</br><a href="https://github.com/Borck/Rainmeter-Simple-HiDPI-Aware/releases/latest">Download</a></p>
    </td>
  </tr>
</table>

For more information about installing skins follow the [documentation of Rainmeter](https://docs.rainmeter.net/manual/installing-skins/).

## Known issues

* Weather meters are currently not working.
* The collision box of the meters are not scaled, so meters may not be movable to the right or bottom. This can be worked around by unchecking 'Keep on screen' on each affected skin.
* Other skins may scale incorrectly.
* Multiple displays with different scaling may cause incorrect scaling.

## License

Code released under the [LGPL-2.1 License](License).

## Feedback

I would appreciate any feedback. If you have any issue, feel free to [file a ticket](https://github.com/Borck/Rainmeter-Simple-HiDPI-Aware/issues).

