# Introduction

Hello,again! This time we will make a custom libary for C

# Let's codeee

First we make header file,witch contains functions for our code.

Because the libary code it's so long,I explain shortly!

First we make a header file named "stdsb.h".

We define the start code and where end's code for libary like that:

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

After we import this libaries we make new_line function(return to a new line like '\n') like this:

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
* And we make a funtion `is_holiday`,this funtion verify current date and time and print holiday name,**else** _if not_ a holiday function return's "**Right now,in your localtime,I not found any holiday!**";

After we made **time-based** functions,we make converter functions like this _lowercase -> uppercase_ and _uppercase -> lowercase_.

After make 'converter' we make lenght verifier and displays the string lenght.

After we made lenght verifier,we make `swap()` function,and displays the numbers or values swaped.
