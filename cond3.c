/*
** EPITECH PROJECT, 2022
** cond3
** File description:
** printf
*/

#include <stdarg.h>
#include "include/my.h"

int flag_e(va_list list,int c)
{
    int count = 0;
    count = count + my_put_scientific_min(va_arg(list, double));
    return (count);
}

int flag_e_maj(va_list list,int c)
{
    int count = 0;
    count = count + my_put_scientific_maj(va_arg(list, double));
    return (count);
}

int flag_g(va_list list,int c)
{
    int count = 0;
    count = count + my_put_short_min(va_arg(list,int));
    return (count);
}

int flag_g_maj(va_list list,int c)
{
    int count = 0;
    count = count + my_put_short_maj(va_arg(list, int));
}

int flag_a(va_list list,int c)
{
    my_put_hexa_float(va_arg(list, double));
}
