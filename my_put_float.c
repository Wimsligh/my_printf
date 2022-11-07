/*
** EPITECH PROJECT, 2022
** printf
** File description:
** my_put_float
*/

#include "include/my.h"

int my_put_float(double f)
{
    int count = 0;
    int c = 0;
    int m = f;
    int g = f;
    count = count + my_put_nbr(m, c, count);
    my_putchar('.');
    count++;
    m = (f - m) * 1000000;
    g = (f - g) * 100;
    if (g <= 9) {
        my_putchar('0');
        count++;
    }
    count = my_put_nbr(m, c, count);
    return (count);
}
