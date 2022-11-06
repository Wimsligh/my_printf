/*
** EPITECH PROJECT, 2022
** My_put_dec
** File description:
** my_put_dec
*/

#include "include/my.h"

int my_put_unsigned(unsigned int n)
{
    int c = 0;
    int count = 0;
    unsigned int nb = n;
    if (n < 0) {
        my_putchar('-');
        nb = -n;
        count++;
    }
    if (nb > 9) {
        my_put_nbr(nb / 10, c, count);
        my_put_nbr(nb % 10, c, count);
        count++;
    }  else {
        my_putchar(nb + '0');
        count++;
    }
    return (count);
}
