/**
 * stdsb Library for C
 * https://github.com/AlyGame/stdsb.h
 *
 *
 * Copyright (c) 2022
 * All rights reserved
 *
 * BSD 3-Clause License
 * http://www.opensource.org/licenses/BSD-3-Clause
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *
 * * Redistributions of source code must retain the above copyright notice,
 *   this list of conditions and the following disclaimer.
 * * Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in the
 *   documentation and/or other materials provided with the distribution.
 * * Neither the name of stdsb nor the names of its contributors may be used
 *   to endorse or promote products derived from this software without
 *   specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS
 * IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED
 * TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A
 * PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED
 * TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

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


#endif