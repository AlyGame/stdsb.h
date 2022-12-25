#ifndef stdsb_H
#define stdsb_H

#include <stdio.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

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

void devide(int a, int b)
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
    printf("Current local time and date: %s", asctime(timeinfo));
}

void get_date(void)
{
    time_t t;
    t = time(NULL);
    struct tm tm = *localtime(&t);
    printf("Current Date: %d-%d-%d", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900);
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

void get_hour_and_time(void)
{
    time_t t;
    t = time(NULL);
    struct tm tm;
    tm = *localtime(&t);
    printf("Current hour is: %d:%d", tm.tm_hour, tm.tm_min);
    new_line();
}

void get_minutes(void)
{
    time_t t;
    t = time(NULL);
    struct tm tm;
    tm = *localtime(&t);
    printf("Current minutes is: %d minutes", tm.tm_min);
    new_line();
}

void get_seconds(void)
{
    time_t t;
    t = time(NULL);
    struct tm tm;
    tm = *localtime(&t);
    printf("Current seconds is: %d seconds", tm.tm_sec);
    new_line();
}

void get_month(void)
{
    time_t t;
    t = time(NULL);
    struct tm tm;
    tm = *localtime(&t);
    printf("Current month is: %d", tm.tm_mon);
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
    }
    else if (tm.tm_mon == 12 || tm.tm_mday == 27)
    {
        printf("It's third Christams day!\n  HO..HO..HO!");
    }
}

void make_upper(char str[])
{
    int j = 0;
    char ch;
    printf("The uppercase text is: ");
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
    printf("The lowercase text is: ");
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
    printf("%d %d",n1,n2);
    new_line();
}

void test(void)
{
    swap(1,2);
    new_line();
    add(1,3);
}

#endif