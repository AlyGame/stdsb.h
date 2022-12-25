# Introduction

Hello,again! This time we will make a custom libary for C

# Let's codeee

First we make header file,witch contains functions for our code.

Type in terminal:

```bash
code stdsb.h
```

and:

```bash
code test.c
```

Please press ctrl + s keys for save file on your folder.

First,we define libary and it's name

```h
#ifndef stdsb_H
#define stdsb_H
```

After,we define linary and it's name we have to import libaries for code.

```h
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
```

After you import libaries you have make functions,first we make function can return a new line:

```h
void new_line(void)
{
    printf("\n");
}
```

After we make new_line() function,we create logic functions:

Adding function

```h
void add(int a,int b)
{
    printf("%d",a + b);
    new_line();
}
```

Multiply function:

```h
void multiply(int a,int b)
{
    printf("%d",a * b);
    new_line();
}
```

Devide function:

```h
void devide(int a,int b)
{
    printf("%d",a / b);
    new_line();
}
```

