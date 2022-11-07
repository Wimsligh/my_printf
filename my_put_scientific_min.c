/*
** EPITECH PROJECT, 2022
** my_put_scientifique
** File description:
** my_put_scientifique
*/

#include "include/my.h"

int my_put_scientific_min(double f)
{
    int i = 0;
    int c = 0;
    int count = 0;
    while (!(f < 10)) {
        f = f / 10;
        i++;
        count++;
    }
    my_put_float(f);
    my_putchar('e');
    my_putchar('+');
    count = count + 2;
    if (i <= 9) {
        my_putchar('0');
        count ++;
    }
    my_put_nbr(i, c, count);
    return (count + 1);
}
