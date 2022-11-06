/*
** EPITECH PROJECT, 2022
** printf
** File description:
** cond1
*/
#include <stdarg.h>
#include "include/my.h"

int flag_s(va_list list,int c)
{
    int count = 0;
    count = my_putstr(va_arg(list, char *));
    return (count);
}

int flag_c(va_list list,int c)
{
    my_putchar(va_arg(list, int));
    return (1);
}

int flag_i(va_list list,int c)
{
    int arg = va_arg(list,int);
    int count = 0;
    count = count + my_put_nbr_count(arg, c, count);
    while (count < c) {
        my_putchar('0');
        count++;
    }
    my_put_nbr(arg, c, count);
    return (count);
}

int flag_pr(va_list list,int c)
{
    my_putchar('%');
    return (1);
}

int flag_u(va_list list,int c)
{
    int count = 0;
    count = count + my_put_unsigned(va_arg(list, int));
    return (count);
}
