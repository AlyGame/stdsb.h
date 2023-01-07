# Introduction

Hello,again! This time we will make a custom libary for C

# Details:

Name:Enache

Surename:Sebastian Gabriel

Age: 13 years old

email: enachesebi615@yahoo.com

school: Gimnaziala Nr.1 Lumina



# Let's codeee

First we make header file,witch contains functions for our code.

Because the library code it's so long,I explain shortly!

First we make a header file named "stdsb.h".

We define the start code and where end's code for library like that:

```h
#ifndef stdsb_H
#define stdsb_H

// your imported libaries

// your functions
```

After this we import the libaries:

```h
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
```

After we import this libraries we make new_line function(return to a new line like '\n') like this:

```h
void new_line(void)
{
    printf("\n");
}
```

After we made this function we make logical funtions like  `multiply( * )`, `add( + )`,etc.

After we made this logical functions funtions we make like this funtions,but exp: the multiply will be three numbers **not 2.**

After we make three numbers multiply we code time.

***What is this chinese?***

* We make a function get time,hour or date;

* And we make a funtion `is_holiday`,this funtion verify current date and time and print holiday name,**else** _if not_ a holiday function return's "**At the moment it is not a defined holiday. You can define it anytime!**";

After we made **time-based** functions,we make converter functions like this _lowercase -> uppercase_ and _uppercase -> lowercase_.

After make 'converter' we make lenght verifier and displays the string lenght.

After we made lenght verifier,we make `swap()` function,and displays the numbers or values swaped.

After we make swap function we make `test()` function,witch verify the library works

# Install

You can install my library following this steps:

> 1.Download last version of stdsb.h libary for ubuntu

> 2.Unzip the archive and open terminal to extracted folder and type in terminal:


```bash
sudo cp stdsb.h /usr/include
```

You can use clang with Makefile file.

Type in your project (terminal):

```bash
nano Makefile
```

And type:

``` Makefile
CC := clang
```

##### Install for macOS:

> 1.Download last version of stdsb.h libary for macOS

> 2.Unzip the archive and open terminal to extracted folder and type in terminal:

```
sudo 
```