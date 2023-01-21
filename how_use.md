# How use `stdsb.h`

First this libary is customized by me.

# Let's start!

What makes `new_line()`?

- The `new_line()` function make a new line like `printf("\n");`
- The `add()` function make add two numbers exp: 2 and 3 `add(2,3);`

Code will be:

```c
    int f;
    int n;

    printf("Enter first value: ");
    scanf("%d",&f);
    new_line();
    printf("Enter second value: ");
    scanf("%d",&n);
    new_line();
    add(f,n);
```

- The `add_3()` funtion allow user to add up to three numbers `add_3(1,3,2);`

Code will be:

```c
    int n;
    int f;
    int s;
    printf("Enter first value: ");
    scanf("%d",&f);
    new_line();
    printf("Enter second value: ");
    scanf("%d",&n);
    new_line();
    printf("Enter third value: ");
    scanf("%d",&s);
    new_line();
    add_3(f,n,s);
```

- The `decrease()` function exp (negative number): `decrease(2,4);` exp (possitive): `decrease(4,3);`

- The `decrease_3();` allow user to make decrease with 3 numbers exp: `decrease_3(7,2,1);`

- The `multiply();` function exp: `multiply(3,2);`

- The `multiply_3();` this function allow user to make multiply with 3 numbers exp: `multiply_3();`

- The `devide();` function exp: `devide(12,2);`

- The `devide_3();` function allow user to make devides with 3 numbers exp: `devide_3(12,2,2)`

## Time functions

- The `get_localtime();` output will be like your local time

- The `get_date()` output will be your current date

- The `get_hour()` output will be your current hour

- The `get_hour_and_time()` output will be current hour and time

- The `get_minutes()` output will be current minutes

- The `get_seconds()` output will be your current **seconds**

- The `get_month()` output will be current **month**

- The `is_holiday()` this function analyse the date and return holiday or if not a holiday returns "Right now,in your localtime,I not found any holiday!"

- The `make_upper()` code will be like this:

```c
make_upper("cs12");
```

The result is:

![image](https://user-images.githubusercontent.com/96312446/209479255-8caa2f12-44b6-4be6-9e78-2f73e5962214.png)

- The `make_lower()` code will be like this:

```c
make_lower("CS12");
```

The result is:

![image](https://user-images.githubusercontent.com/96312446/209479292-e26613f4-2582-416d-9df6-17c7d4198fc8.png)

- The `what_lenght` code will be like this:

```c
what_lenght("en");
```

The result is:

![image](https://user-images.githubusercontent.com/96312446/209479421-8e443e79-d143-4d22-b5d7-8ff150061979.png)

- The `swap()` output will be:

```c
swap(1,2);
```

The result is:

![image](https://user-images.githubusercontent.com/96312446/209479456-ea0a8fd3-7040-478f-85f4-f2e654a2e40c.png)

- You can declare an integer like this `integer num`

- You can declare an string like this `string str`

- You can check version of this library with `version();` function

- You can print strings with `print_string` function

- You can print an integer with `print_int` function

- You can print float with `print_float` function

- You can print double values with `print_double` function

- You can print string with an int with `print_string_with_int` function

  - first type string definded or in this brakets " / your string / " and after you do this, type int name or value exp: `print_string_with_int("The value of the integer is: ",/* your integer */)`

- You can print string with a float with `print_string_with_float` function

    - first type string defined or in this brakets " / your string /" and after you do this, type float name or value exp: `print_string_with_float("The value of the float is: ", /* your float */)`

- You can print string with an double value with `print_string_with_float` function
    
    - first type string defined or in this brakets " / your string /" and after you do this, type double name or value exp: `print_string_with_double("THe value of the double is: ",/* your float */)`

- You can print a string ( simple ) with `print("Hello,world!")` 

- You can compare two numbers (maximum) with `compare_max` function,the output will be:

```c
integer num1 = 1;
integer num2 = 2;
compare_max(num1,num2);
```

And the output will be: `2 is greater than 1`

- You can compare two numbers (minimum) with `compare_min` function,the output will be like this:

```c
integer num1 = 1;
integer num2 = 2;

compare_min(num1,num2);
```

And the output will be: `1 is lower than 2`

# How test the libary works?

Type this code to your code IDE:

```c
#include <stdsb.h>

int main()
{
    test();
}
```

Your output necesary to be:

![image](https://user-images.githubusercontent.com/96312446/209479805-944f025a-4b65-4cfd-a585-971e4cf07c2e.png)

If you haven't this output.You not installed libary or installed incorrectly.
