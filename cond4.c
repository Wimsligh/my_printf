/*
** EPITECH PROJECT, 2022
** cond4
** File description:
** cond4
*/

#include <stdarg.h>
#include "include/my.h"

int flag_a_maj(va_list list,int c)
{
    my_put_hexa_float(va_arg(list, double));
}

int flag_p(va_list list,int c)
{
    int count = 0;
    count = count + my_put_pointer(va_arg(list, int));
    return (count);
}

int flag_n(va_list list,int c,char * str)
{
    int count = 0;
    count = count + my_strlen(str);
    return (count);
}

int flag_b(va_list list,int c)
{
    int count = 0;
    count = count + my_put_bin(va_arg(list,int), count);
    return (count);
}

int flag_s_maj(va_list list,int c)
{
    int count = 0;
    count = count + my_put_str_s(va_arg(list,char *));
    return (count);
}
