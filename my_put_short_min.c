/*
** EPITECH PROJECT, 2022
** my_put_short_min
** File description:
** my_put_short_min
*/

#include "include/my.h"

int my_put_short_min(double f)
{
    double cp = f;
    int i = 0;

    while (!(f < 10 && f > -10)) {
        f = f / 10;
        i++;
    }
}
