/*
** EPITECH PROJECT, 2022
** cond5
** File description:
** cond5
*/

#include <stdarg.h>
#include "include/my.h"

int flag_d(va_list list,int c)
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
