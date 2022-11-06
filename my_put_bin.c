/*
** EPITECH PROJECT, 2022
** my_put_bin
** File description:
** my_put_bin
*/

#include "include/my.h"

int my_put_bin(unsigned a, int count)
{
    int c = 0;
    if (a > 1) {
        count = my_put_bin(a / 2, count);
    }
    count = my_put_nbr(a % 2, c, count);
    return (count);
}
