#CryptID:
  CryptID is a free open source Windows application. CryptID is an application build using c# which identifies algorithmic hashes by using regular expressions. Because hashes will sometimes share the same regular expressions, the user will sometimes need to further narrow down the results returned by CryptID. However, CryptID will greatly help narrow down the possible hashes for any Windows user attempting to identify an algorithm.
  As we the developers are also busy full-time college students, there are still many features and hashes we would like to eventually add in the future. Due to this, we would ask your patience as we continue to provide updates to improve user experience.

Motivation:
	While there are a few Linux and online applications to identify hashes, using methods like ours, applications for offline Windows usage are unfortunately lacking. Therefore, CryptID is an attempt to provide users of Windows another option for identifying cryptographic hashes. While this software was written for a Software Engineering undergrad class, we the developers will still do our best to provide updates to provide users with the best possible experience.

Installation:
  Currently, CryptID is only offered for Windows. You can download the executable from our GitHub page, our download the files separately and compile it yourself. There are currently no immediate plans to add support for other platforms.

Features:
  •	Allow users to identify different types of hashes
  •	Maintain a history of identification attempts
  •	Clean and responsive interface
  •	Works offline
  
Usage:
  To identify a hashing algorithm, a user should copy the raw hash into the white textbox located in the center of the GUI. The placeholder text should hide upon clicking inside the box, however if there is any other text in the box the user should clear it using the “clear” button. Once the hash is pasted or typed into the hash identification box, the user may press the submit button which will run the code logic and return the possible results.
  CryptID also maintains a history file. If it is not already there, upon attempting to identify a hash a history file will be created in the same folder as CryptID. The user can then either view this file by double clicking it, or by clicking on the “History” button, which will show the user history.
  CryptID also contains a “Report bug” button, which will take users to our Bug Reporting page. Finally, the “Help” button will take users to this readme file.
  
Currently Supported Hashes:
  At this time, CryptID currently supports 10 regular expressions of hashes, with more to eventually follow. These are contained within the expressions.cs file.
  •	MD5
  •	MD2
  •	SHA-256
  •	SHA-384
  •	SHA-1
  •	SHA-512
  •	Crc32
  •	RIPEMD-320
  •	$nefru-256
  •	Adler-32

Contributors:
  •	Thomas Lange
  •	Daniel Burwitz
  •	Andrew Lessin
  •	Jovana Bogdanovich
Also, for some of the more vague algorithms, we used the regular expressions from this github page, so partial credit goes to them for compiling a list of regular expressions for these types of algorithms
