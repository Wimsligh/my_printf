/*
** EPITECH PROJECT, 2022
** my_printf
** File description:
** my_printf Matheo Hanss
*/

#include <stdarg.h>
#include <stdio.h>
#include "include/my.h"

int my_printf(const char * format , ...)
{
    int count = 0;
    int c = 0;
    va_list list;
    va_start(list, format);
    int i = 0;
    while (format[i] != '\0') {
        i = my_printf_2(i, list, format, count);
        i++;
    }
    va_end(list);
    return (count);
}

int my_printf_2(int i, va_list list, const char *format, int count)
{
    int c = 0;
    if (format[i] == '%') {
        if (format[i + 1] == '.') {
            int c = get_precision(format,i,list);
            i = i + 3;
            count = count + tableau(list,format,i,c);
            return (i);
        }
        i++;
        count = count + tableau(list,format,i,c);
    } else {
        my_putchar(format[i]);
        count++;
    }
    return i;
}

int main()
{
    double c = 365.65;
    my_printf("Hello %f\n",c);
    printf("hello %f\n",c);
}