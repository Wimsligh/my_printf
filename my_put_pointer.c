/*
** EPITECH PROJECT, 2022
** My_put_hexa_float
** File description:
** my_put_hexa_float
*/

#include <stdarg.h>
#include <stdio.h>
#include "include/my.h"

int my_put_pointer(int i)
{
    int count = 0;
    my_putstr("0x");
    count = count + 2;
    count = count + my_put_hexa_min(i);
    return (count);
}
