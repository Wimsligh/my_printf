/*
** EPITECH PROJECT, 2022
** printf
** File description:
** cond2
*/

#include <stdarg.h>
#include "include/my.h"

int flag_o(va_list list,int c)
{
    int count = 0;
    count = count + my_put_octet(va_arg(list, int));
    return (count);
}

int flag_x(va_list list,int c)
{
    int count = 0;
    count = count + my_put_hexa_min(va_arg(list, int));
    return (count);
}

int flag_x_maj(va_list list,int c)
{
    int count = 0;
    count = count + my_put_hexa_maj(va_arg(list, int));
    return (count);
}

int flag_f(va_list list,int c)
{
    int count = 0;
    count = count + my_put_float(va_arg(list, double));
    return (count);
}

int flag_f_maj(va_list list,int c)
{
    int count = 0;
    count = count + my_put_float(va_arg(list, double));
    return (count);
}
