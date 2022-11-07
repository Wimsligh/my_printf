/*
** EPITECH PROJECT, 2022
** get_précision
** File description:
** get_précision
*/
#include <stdarg.h>
#include "include/my.h"
#include <stdio.h>

int get_precision(const char *format, int nb, va_list list)
{
    int add = nb + 1;
    int precision = 0;
    for (add = add + 1; format[add] != '\0'; add++) {
        if (my_digit(format[add])) {
            precision = precision * 10;
            precision = precision + format[add] - '0';
        }
        get_precision_star(format, list, add, precision);
    }
    nb = add - 1;
    return (precision);
}

int get_precision_star(const char *format, va_list list, int add,
                        int precision)
{
    if (format[add] == '*') {
            add++;
            precision = va_arg(list, int);
            return (0);
        }
}
