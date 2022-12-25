# How use `stdsb.h`

First this libary is customized by me.

# Let's start!

What makes `new_line()`?

* The `new_line()` function make a new line like ``printf("\n");``
* The `add()` function make add two numbers exp: 2 and 3 `add(2,3);` and the result will be like this:
 
![image](https://user-images.githubusercontent.com/96312446/209476962-20db2b77-6d65-4e26-9168-3ec0c05c9307.png)

More beautiful is: 

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

And the output will be like this:

![image](https://user-images.githubusercontent.com/96312446/209477397-8fec2219-dabd-4dc9-a911-89008f747891.png)

* The `add_3()` funtion allow user to add up to three numbers `add_3(1,3,2);` and the output will be like this:

![image](https://user-images.githubusercontent.com/96312446/209477458-a28372ac-bfce-47f8-b6dc-f3cdf4c3868e.png)

More beautiful will be:

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

And the output will be like this:

![image](https://user-images.githubusercontent.com/96312446/209477533-1aab63f0-ae4b-4110-a754-0dc663628555.png)

* The `decrease()` function exp (negative number): `decrease(2,4);` exp (possitive): `decrease(4,3);` and the output will be like this:

Negative result: 

![image](https://user-images.githubusercontent.com/96312446/209477701-e10933fc-9732-4630-9c11-0532be4cf356.png)

Possitive result:

![image](https://user-images.githubusercontent.com/96312446/209477720-dfcd99f0-ccee-43af-b658-2b8314aacdf8.png)


* The `decrease_3();` allow user to make decrease with 3 numbers exp: `decrease_3(7,2,1);` and the output will be like this:

![image](https://user-images.githubusercontent.com/96312446/209477796-5d29d7ef-717f-40d4-9154-50b64933dbae.png)


* The `multiply();` function exp: `multiply(3,2);` the output will be like this:

![image](https://user-images.githubusercontent.com/96312446/209478316-53cda7e8-da09-405f-9d10-e8822bc7b184.png)

* The `multiply_3();` this function allow user to make multiply with 3 numbers exp: `multiply_3();` the output will be like this:

![image](https://user-images.githubusercontent.com/96312446/209478390-04f22f14-ebd8-4bc4-b5d3-114610f7923d.png)

* The `devide();` function exp: `devide(12,2);` the output will be like this:

![image](https://user-images.githubusercontent.com/96312446/209478440-b8a172a4-80a7-4628-bee9-cdea449d50f0.png)

* The `devide_3();` function  allow user to make devides with 3 numbers exp: `devide_3(12,2,2)` the output will be like this:

![image](https://user-images.githubusercontent.com/96312446/209478541-563c83d2-1af2-47e0-af98-ccba7408750d.png)

## Time functions

* The `get_localtime();` output will be like this:

![image](https://user-images.githubusercontent.com/96312446/209478593-496f096e-74ef-4e48-ada2-b2ee31d326da.png)

* The `get_date()` output will be like this:

![image](https://user-images.githubusercontent.com/96312446/209478616-66c5d632-1ddd-4867-84ab-09f91adbfbd4.png)

* The `get_hour()` output will be like this:

![image](https://user-images.githubusercontent.com/96312446/209478648-a8a3de24-6c6d-433f-8915-4062925d857e.png)

* The `get_hour_and_time()` output will be like this:

![image](https://user-images.githubusercontent.com/96312446/209478679-260d332e-e5e3-4f65-9a4f-075fb36ea82d.png)

* The `get_minutes()` output will be like this:

![image](https://user-images.githubusercontent.com/96312446/209478699-1ab0f4f5-efa4-406f-a87e-30291f9de7f8.png)

* The `get_seconds()` output will be like this:

![image](https://user-images.githubusercontent.com/96312446/209478721-9af7275c-9356-4b09-8431-6a4feabb3da6.png)

* The `get_month()` output will be like this:

![image](https://user-images.githubusercontent.com/96312446/209478949-b28b62ce-f41f-4889-9458-dde179986f67.png)

* The `is_holiday()` this function analyse the date and return holiday or if not a holiday returns "Right now,in your localtime,I not found any holiday!" :

![image](https://user-images.githubusercontent.com/96312446/209479072-a1f4cc61-f9b5-40fb-8288-197adaa1924b.png)

* The `make_upper()` output will be like this:

```c
make_upper("cs12");
```

The result is:

![image](https://user-images.githubusercontent.com/96312446/209479255-8caa2f12-44b6-4be6-9e78-2f73e5962214.png)

* The `make_lower()` output will be like this:

```c
make_lower("CS12");
```

The result is:

![image](https://user-images.githubusercontent.com/96312446/209479292-e26613f4-2582-416d-9df6-17c7d4198fc8.png)

* The `what_lenght` output will be like this:

```c
what_lenght("en");
```

The result is: 

![image](https://user-images.githubusercontent.com/96312446/209479421-8e443e79-d143-4d22-b5d7-8ff150061979.png)

* The `swap()` output will be:

```c
swap(1,2);
```

The result is:

![image](https://user-images.githubusercontent.com/96312446/209479456-ea0a8fd3-7040-478f-85f4-f2e654a2e40c.png)

# How test the libary works?

Type this code to your code IDE:

```c
#include <stdsb.h>

int maib()
{
    test();
}
```

Your output necesary to be:

![image](https://user-images.githubusercontent.com/96312446/209479805-944f025a-4b65-4cfd-a585-971e4cf07c2e.png)

If you haven't this output.You not installed libary or installed incorrectly.

# How install?
