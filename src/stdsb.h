#ifndef stdsb_H
#define stdsb_H

#include <stdio.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

typedef char* string;
typedef int integer;

void new_line(void)
{
    printf("\n");
}

void add(int a, int b)
{
    printf("%d", a + b);
    new_line();
}

void multiply(int a, int b)
{
    printf("%d", a * b);
    new_line();
}

void division(int a, int b)
{
    printf("%d", a / b);
    new_line();
}

void sq_pf(int a)
{
    printf("%d", a * a);
    new_line();
}

void add_3(int a, int b, int c)
{
    printf("%d", a + b + c);
    new_line();
}
void multiply_3(int n1, int n2, int n3)
{
    printf("%d", n1 * n2 * n3);
    new_line();
}
void division_3(int n1, int n2, int n3)
{
    printf("%d", n1 / n2 / n3);
    new_line();
}
void decrease(int n1, int n2)
{
    printf("%d", n1 - n2);
    new_line();
}
void decrease_3(int n1, int n2, int n3)
{
    printf("%d", n1 - n2 - n3);
    new_line();
}

void get_localtime(void)
{
    time_t rawtime;
    struct tm *timeinfo;

    time(&rawtime);
    timeinfo = localtime(&rawtime);
    printf("%s", asctime(timeinfo));
}
void get_date(void)
{
    time_t t;
    t = time(NULL);
    struct tm tm = *localtime(&t);
    printf(" %d-%d-%d", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900);
    new_line();
}
void get_hour(void)
{
    time_t t;
    t = time(NULL);
    struct tm tm;
    tm = *localtime(&t);
    printf("Current hour is: %d", tm.tm_hour);
    new_line();
}
void get_hour_and_minutes(void)
{
    time_t t;
    t = time(NULL);
    struct tm tm;
    tm = *localtime(&t);
    printf("%d:%d", tm.tm_hour, tm.tm_min);
    new_line();
}
void get_year(void)
{
    time_t t;
    t = time(NULL);
    struct tm tm;
    tm = *localtime(&t);
    printf("%d", tm.tm_year + 1900);
    new_line();
}
void get_minutes(void)
{
    time_t t;
    t = time(NULL);
    struct tm tm;
    tm = *localtime(&t);
    printf("%d", tm.tm_min);
    new_line();
}
void get_seconds(void)
{
    time_t t;
    t = time(NULL);
    struct tm tm;
    tm = *localtime(&t);
    printf("%d", tm.tm_sec);
    new_line();
}

void get_month(void)
{
    time_t t;
    t = time(NULL);
    struct tm tm;
    tm = *localtime(&t);
    printf("%d", tm.tm_mon + 1);
    new_line();
}
void get_day(void)
{
    time_t t;
    t = time(NULL);
    struct tm tm;
    tm = *localtime(&t);
    printf("%d", tm.tm_mday);
    new_line();
}
void is_holiday(void)
{
    time_t t;
    t = time(NULL);
    struct tm tm;
    tm = *localtime(&t);
    if (tm.tm_mon == 12 || tm.tm_mday == 24)
    {
        printf("It's Christmas Eve!");
        new_line();
    }
    else if (tm.tm_mon == 12 || tm.tm_mday == 31)
    {
        printf("It's New Year's Eve!");
        new_line();
    }
    else if (tm.tm_mon == 3 || tm.tm_mday == 8)
    {
        printf("It's mother's day!");
        new_line();
    }
    else if (tm.tm_mon == 10 || tm.tm_mday == 31)
    {
        printf("It's Halloween!\n  Booo...");
        new_line();
    }
    else if (tm.tm_mon == 12 || tm.tm_mday == 25)
    {
        printf("It's Christmas!\nMerry Christmas!\n  HO..HO..HO!");
        new_line();
    }
    else if (tm.tm_mon == 12 || tm.tm_mday == 26)
    {
        printf("It's secondary Christmas day!\n  HO..HO..HO!");
        new_line();
    }
    else if (tm.tm_mon == 12 || tm.tm_mday == 27)
    {
        printf("It's third Christams day!\n  HO..HO..HO!");
        new_line();
    }
    else
    {
        printf("At the moment it is not a defined holiday. You can define it anytime!");
        new_line();
    }
}
void make_upper(char str[])
{
    int j = 0;
    char ch;
    while (str[j])
    {
        ch = str[j];
        putchar(toupper(ch));
        j++;
    }
    new_line();
}
void make_lower(char str[])
{
    int j = 0;
    char ch;
    while (str[j])
    {
        ch = str[j];
        putchar(tolower(ch));
        j++;
    }
    new_line();
}
void what_lenght(char s[])
{
    int n;
    n = strlen(s);
    printf("%d", n);
    new_line();
}
void swap(int n1, int n2)
{
    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
    printf("%d %d", n1, n2);
    new_line();
}
void test(void)
{
    swap(1, 2);
    new_line();
    add(1, 3);
}

void version()
{
    printf("Copyright for Sebastian Enache aka AlyGame\n");
    printf("Version number: 0.0.2\n");
}

void print_string(char string[])
{
    printf("%s",string);
}

void print_int(int number_to_be_printded)
{
    printf("%d",number_to_be_printded);
}

void print_float(float number)
{
    printf("%f",number);
}

void print_double(double number)
{
    printf("%f",number);
}

void print_string_with_int(char string[],int num)
{
    printf("%s %i",string,num);
}

void print_string_with_float(string str,float n)
{
    printf("%s %f",str,n);
}

void print_double_with_string(string str,double num)
{
    printf("%s %f",str,num);
}

void print(string str)
{
    printf("%s",str);
}

void compare_max(int num,int num1)
{
    if(num < num1)
    {
        printf("%d is greater than %d",num1,num);
    }
    else if(num > num1)
    {
        printf("%d is greater than %d",num,num1);
    }
}

void compare_min(int num,int num1)
{
    if(num < num1)
    {
        printf("%d is lower than %d",num,num1);
    }
    else if(num > num1)
    {
        printf("%d is lower than %d",num1,num);
    }
}


#endif
