/*
** EPITECH PROJECT, 2022
** printf
** File description:
** put_short
*/

#include "include/my.h"

int my_put_short_maj(double f)
{
    double cp = f;
    int i = 0;

    while (!(f < 10 && f > -10)) {
        f = f / 10;
        i++;
    }
}
