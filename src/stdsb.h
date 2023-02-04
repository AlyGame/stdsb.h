#ifndef stdsb_H
#define stdsb_H

#include <stdio.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <strings.h>

typedef char *string;
typedef int integer;

// version 0.0.1

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

void square_of(int a)
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

// version 0.0.1

void print_string(char string[])
{
    printf("%s", string);
}

void print_int(int number_to_be_printded)
{
    printf("%d", number_to_be_printded);
}

void print_float(float number)
{
    printf("%f", number);
}

void print_double(double number)
{
    printf("%f", number);
}

void print_string_with_int(char string[], int num)
{
    printf("%s %i", string, num);
}

void print_string_with_float(string str, float n)
{
    printf("%s %f", str, n);
}

void print_double_with_string(string str, double num)
{
    printf("%s %f", str, num);
}

void print(string str)
{
    printf("%s", str);
}

void compare_max(int num, int num1)
{
    if (num < num1)
    {
        printf("%d is greater than %d", num1, num);
    }
    else if (num > num1)
    {
        printf("%d is greater than %d", num, num1);
    }
}

void compare_min(int num, int num1)
{
    if (num < num1)
    {
        printf("%d is lower than %d", num, num1);
    }
    else if (num > num1)
    {
        printf("%d is lower than %d", num1, num);
    }
}

void square_root(float num)
{
    float x = num;
    float y = 1;
    float e = 0.000001;
    while (x - y > e)
    {
        x = (x + y) / 2;
        y = num / x;
    }
    printf("%f", x);
}

// version 0.0.3

void get_circle_lenght(int radius)
{
    printf("%d兀", radius * 2);
}

void get_circle_radius_from_lenght_pie(int lenght)
{
    printf("%d", lenght / 2);
}

void get_circle_area(int radius)
{
    printf("%d", radius * radius);
}

void get_triangle_perimeter(int first_size, int second_side, int third_side)
{
    printf("%d", first_size + second_side + third_side);
}

void get_triangle_area(int height, int base)
{
    printf("%d", (base * height) / 2);
}

void get_rectangle_perimeter(int first_size, int second_size, int third_size, int forth_size)
{
    printf("%d", first_size + second_size + third_size + forth_size);
}

void get_rectangle_area(int lenght, int width)
{
    printf("%d", lenght * width);
}

void get_trapeze_perimeter(int first_size, int second_size, int third_size, int forth_size)
{
    printf("%d", first_size + second_size + third_size + forth_size);
}

void get_trapeze_area(float big_base, float small_base, float height)
{
    printf("%f", (big_base + small_base) * height / 2);
}

void get_parallelogram_perimeter(int first_size, int second_size, int third_size, int forth_size)
{
    printf("%d", first_size + second_size + third_size + forth_size);
}

void get_parallelogram_area(float base, float height)
{
    printf("%f", base * height);
}

void get_rhomb_perimeter(int lenght)
{
    printf("%d", lenght * 4);
}

void get_rhomb_area(int height, int base)
{
    printf("%d", base * height);
}

void pythagoras_theorem(float first_cathetus, float second_cathetus)
{
    int third_cathetus = (first_cathetus) + (second_cathetus);
    square_root(third_cathetus);
}

// version 0.0.4

void clear_window(int lines)
{
    for (int i = 0; i < lines; i++)
    {
        printf("\n");
    }
}

int get_integer(char message[])
{
    printf("%s", message);
    int n;
    int check = scanf("%d", &n);

    while (check != 1)
    {
        printf("Retry: ");
        fflush(stdin);
        check = scanf("%d", &n);
    }
    return n;
}

char get_character(char message[])
{
    printf("%s", message);
    char c = getchar();
    while (isspace(c))
    {
        c = getchar();
    }
    return c;
}

float get_float(char message[])
{
    float n;
    int check = scanf("%f", &n);

    while (check != 1)
    {
        printf("Retry: ");
        fflush(stdin);
        check = scanf("%f", &n);
    }
    return n;
}

char *encrypt_string(char *text, int key)
{
    int length = strlen(text);
    char *encrypted_text = (char *)malloc(length + 1);
    for (int i = 0; i < length; i++)
    {
        encrypted_text[i] = text[i] + key;
    }
    encrypted_text[length] = '\0';
    return encrypted_text;
}

char *decrypt_string(char *text, int key)
{
    int lenght = strlen(text);
    char *decrypted_text = (char *)malloc(lenght + 1);
    for (int i = 0; i < lenght; i++)
    {
        decrypted_text[i] = text[i] - key;
    }
    decrypted_text[lenght] = '\0';
    return decrypted_text;
}

int encrypt_integer(int num, int key)
{
    return num + key;
}

int decrypt_integer(int num, int key)
{
    return num - key;
}

int remove_file(const char *file_name)
{
    if (remove(file_name) == 0)
    {
        return 0;
    }
    else
    {
        perror("Error deleting file!\n");
        return 1;
    }
}

void sort_int_array(int *array, int array_size)
{
    int i, j, temp;
    for (i = 0; i < array_size - 1; i++)
    {
        for (j = 0; j < array_size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void print_int_array(int arraySize, int array[arraySize])
{
    while (arraySize--)
    {
        printf("%d ", *array++);
    }
    printf("\n");
}

void sort_char_array(char *array, int arraySize)
{
    int i, j;
    char temp;
    for (i = 0; i < arraySize - 1; i++)
    {
        for (j = 0; j < arraySize - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void print_char_array(int arraySize, char array[arraySize])
{
    while (arraySize--)
    {
        printf("%c ", *array++);
    }
    printf("\n");
}

void sort_words_array(char words[][100], int n)
{
    char temp[100];
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (strcmp(words[i], words[j]) > 0)
            {
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
        }
    }
}

void print_words_array(char words[][100], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%s ", words[i]);
    }
    printf("\n");
}

void reverse(char *str)
{
    int length = strlen(str);
    int half_length = length / 2;
    for (int i = 0; i < half_length; i++)
    {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int string_length(char *str) {
    int length = 0;
    while (*str != '\0') {
        length++;
        str++;
    }
    return length;
}

char *concatenate_strings(char *str1, char *str2) {
    int length1 = string_length(str1);
    int length2 = string_length(str2);
    char *result = (char *)malloc(length1 + length2 + 1);
    for (int i = 0; i < length1; i++) {
        result[i] = str1[i];
    }
    for (int i = 0; i < length2; i++) {
        result[length1 + i] = str2[i];
    }
    result[length1 + length2] = '\0';
    return result;
}

#endif