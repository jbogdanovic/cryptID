# CryptID:
*** 
  CryptID is a free open source Windows application. CryptID is an application build using c# which identifies algorithmic hashes by using regular expressions. Because hashes will sometimes share the same regular expressions, the user will sometimes need to further narrow down the results returned by CryptID. However, CryptID will greatly help narrow down the possible hashes for any Windows user attempting to identify an algorithm.
  As we the developers are also busy full-time college students, there are still many features and hashes we would like to eventually add in the future. Due to this, we would ask your patience as we continue to provide updates to improve user experience.

## Motivation:
  While there are a few Linux and online applications to identify hashes, using methods like ours, applications for offline Windows usage are unfortunately lacking. Therefore, CryptID is an attempt to provide users of Windows another option for identifying cryptographic hashes. While this software was written for a Software Engineering undergrad class, we the developers will still do our best to provide updates to provide users with the best possible experience.
  Initially our goal was to also to code the project in such a way as to return the probablility of the hashes along with their names, however, after doing more research into hashes and regular expressions, we realized that this is impossible to do with regular expressions. One regex cannot match more than another. Likewise, many of these hashes are designed to be indiscernable between eachother, thus, while it was an exciting idea, it nonetheless had to be scrapped.

## Installation:
  Currently, CryptID is only offered for Windows. You can download the executable from our GitHub page, our download the files separately and compile it yourself. There are currently no immediate plans to add support for other platforms.

## Features:
  *	Allow users to identify different types of hashes
  *	Maintain a history of identification attempts
  *	Clean and responsive interface
  *	Works offline
  
## Usage:
  To identify a hashing algorithm, a user should copy the raw hash into the white textbox located in the center of the GUI. The placeholder text should hide upon clicking inside the box, however if there is any other text in the box the user should clear it using the “clear” button. Once the hash is pasted or typed into the hash identification box, the user may press the submit button which will run the code logic and return the possible results.
  CryptID also maintains a history file. If it is not already there, upon attempting to identify a hash a history file will be created in the same folder as CryptID. The user can then either view this file by double clicking it, or by clicking on the “History” button, which will show the user history.
  CryptID also contains a “Report bug” button, which will take users to our Bug Reporting page. Finally, the “Help” button will take users to this readme file.
  
## Currently Supported Hashes:
  At this time, CryptID currently supports 20 regular expressions of hashes, with more to eventually follow. These are contained within the expressions.cs file.
  * Adler-32
  * Blowfish
  * CRC-16
  * CRC-24
  * CRC-32
  * CRC-64
  * LM
  * MD2
  * MD5
  * NTLM
  * RIPEMD-256
  * RIPEMD-320
  * SHA-1
  * SHA-224
  * SHA-384
  * SHA-512
  * Tiger-128
  * Tiger-160
  * Tiger-192
  * Snefru-256
  
## Reporting Bugs
Report bugs from within the application using the "Report bug" button, which will take users to our Bug Reporting page. Must be signed into Github to change and submit. For non-Github users send an email to cryptid2017@gmail.com detailing the bug encountered.

## Contributors:
  •	Thomas Lange
  •	Daniel Burwitz
  •	Andrew Lessin
  •	Jovana Bogdanovich
  
***
Also, for some of the more vague algorithms, we used the regular expressions from this github page(https://github.com/psypanda/hashID), so partial credit goes to them for compiling a list of regular expressions for these types of algorithms that we were able to use, saving us massive amounts of time we would have spent researching vague algorithms from the internet.
***
