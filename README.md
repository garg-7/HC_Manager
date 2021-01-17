# Health Center Management System

This is a management system for the health center at IIT-Jodhpur. It was developed as a course project for CS212: Object Oriented Analysis & Design by [Devin](https://github.com/garg-7/), [Kartik](https://github.com/vyaskartik20) & [Mahendra](https://github.com/mahendra2890).
  
The aim of this project was to help develop an understanding (via an exemplar implementation) of object-oriented design of systems.
  
## Object-Oriented Design
Owing to the object-oriented design, first the actors of this system were recognized along with their interactions with the system. This was consolidated in the form of the following:
* [Class Responsibility & Collaboration a.k.a. CRC cards](Object-Oriented_Stuff/)
* [Use-Case diagram](Object-Oriented_Stuff/)
* [Class diagram](Object-Oriented_Stuff/)
* [Activity diagram](Object-Oriented_Stuff/)
  
Note: the above visualisations have been created with the help of a great modeling tool [StarUML](https://staruml.io/).
  
For more 'object-oriented' details head over [here](Object-Oriented_Stuff/).
  
  
## Requirements
There is just the additional requirement of `curses` library to stop echoing the entered password on the terminal.
  
### Windows
MinGW was used at the time of development. To add `ncurses.h` library, simply type the following on powershell/command prompt:
```bash
mingw-get
```
The MinGW installation window would open, in which you need to select libncurses (both dev and dll) and install them.
After that run the following command to compile the program:
```bash
g++ *.cpp -lncurses
```
Finally, double click on the executable created (by the name of `a.exe`)
  
### Ubuntu
To get `ncurses.h`, use the following apt-get command:
```bash
sudo apt-get install libncurses-dev
```
After that simply run make to get the `hc.out` executable:
```bash
make
./hc.out
```
If due to some reason, you don't have `make`, run the following command to compile and then run the program:
```bash
g++ *.cpp -lncurses
./a.out
```
