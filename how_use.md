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

- How can I get square root,use `square_root()` function,in the brakets fill square number

- How can I get circle lenght,use `get_circle_lenght()` function,in the brakets fill with circle radius

- How can I get circle radius from lenght pie,with `get_circle_radius_form_lenght_pie()`,in the brakets fill with **ATTENTION!!** _circle lenght_

- How can I get circle area,with `get_circle_area()` fucntion,in the brakets fill with **circle radius**

- How can I get triangle perimeter,with `get_triangle_perimeter()`,fill in the brakets with triangle sides

- How can I get triangle area,with `get_triangle_area()`,in the brakets fill with height and base of the triangle

- How can I get rectangle perimeter,with `get_rectangle_perimeter()`,in the brakets fill with rectangle sides

- How can I get rectangle area,with `get_rectangle_area(height,width)`,in the brakets,fill with height width

- How can I get trapeze perimeter,with `get_trapez_perimeter()`,in the brakets fill with sides of trapeze

- How can I get trapeze area,with `get_trapeze_area(big_base,small_base,height`,fill with big base,small base and height in the brakets

- How can I get parallelogram perimeter,with `get_parallelogram_perimeter()`,fill with parallelogram sides

- How can I get parallelogram area,with `get_parallelogram_area(base,height)`,fill this brakets with base and height

- How can I get rhomb perimeter,with `get_rhomb_perimeter()`,fill this brakets with lenght of side od rhomb

- How can I get rhomb area,with `get_rhomb_area(height,base)`,fill this brakets with height and base

- How can apply pythagoras theorem,with `pythagoras_theorem(first_cathetus,second cathetus)`,fill with first cathetus and second cathetus

- How can I clear terminal,with `clear_window(lines)`,fill in the brakets with number of lines

- How can I read integer values,with `get_integer(message)`,fill in brakets with message,if you don't have any message you can make `""`

- How can I read a char value,with `get_character(message)`,fill in the brakets with message,if you don't have any message you can make `""`

- How can I read a float value,with `get_float(message)`,fill in the brakets with message,if you don't have any message you can make `""`

- How can I encrypt a text,with `encrypt_string(text,key)`,you can make a simple encrypt with this code:

```c
    string name = "ABC";
    char *encrypted = encrypt(name,11); 
    printf("%s",encrypted); // print encrypted text
    free(encrypted);
```

And the output will be `LMN` encrypted text.

- How can I decrypt a text,first you need key encypted with `decrypt_string(text,key)` function.

In our example key was 11,decrypt key is 11.

```c
string name = "LMN";
    char *encrypted = decrypt(name,11);
    printf("%s",encrypted);
    free(encrypted);
```

Output will be "ABC".

- How can I encrypt an integer,first you need key for encrypt function `encrypt_integer(num,key)`

```c
    int number = 11;
    int encrypt_integer = encrypt_integer(number,11);

    printf("%d",encrypt_integer);
```

Output will be 22.

- How can I decrypt an integer,first you need a key for decrypt used for encryption,you can decrypt with `decrypt_integer(num,key)`

```c
    int number = 22;
    int decrypt_num = decrypt_integer(number,11);

    printf("%d",decrypt_num);
```

- How can I delete a file,with `remove_file(path)` like this code:

```c
remove_file("exaple.txt");
```

- How can I sort an array with integers,with `sort_int_array(array,array_size)` and `print_int_array(array_size)`

```c
    int array[] = {1865,2765,82653,8652,9762,62,6,1};
    int array_size = sizeof(array) / sizeof(array[0]);

    sort_int_array(array,array_size);
    print_int_array(array_size,array);
```

Output will be: `1 6 62 1865 8652 9762 82653`

- How can I sort an array with char,with `sort_char_array(array,array_size)`

```c
    char array[] = "POIUYTREWQLKJHGFDSAMNBVCXZ";
    int array_size = strlen(array);

    sort_char_array(array,array_size);
    print_char_array(array_size,array);
```

Output will be:  `A B C D E F G H I J K L M N O P Q R S T U V W X Y Z`

You can sort words with this code:

```c
    char words[][100] = {"dog", "apple", "cat", "banana"};
    int n = 4;
    sort_words_array(words, n);
    print_words_array(words, n);
```

Output will be: `apple banana cat dog`

- How can I reverse string? - with `reverse(string_name)`,fill the brakets with string name.

```c
    char str[] = "Hello, world!";
    reverse(str);
    printf("%s\n", str);
    return 0;
```

Output: "!dlrow ,olleH"

- How can I make concatenate strings with `concatenate_strings(str1,str2)` function.

```c
    char str1[] = "Hello";
    char str2[] = ", world!";
    char *concatenated_string = concatenate_strings(str1, str2);
    printf("%s\n", concatenated_string);
    free(concatenated_string);
```

Output: "Hello,world"

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