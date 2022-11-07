/*
** EPITECH PROJECT, 2022
** put_nbr
** File description:
** putnbr
*/

#include "include/my.h"

int my_put_nbr_count(int n, int c, int count)
{
    int nb = n;
    if (n < 0) {
        my_putchar('-');
        nb = -n;
        count++;
    }
    if (nb > 9) {
        count++;
        count = my_put_nbr_count(nb / 10, c, count);
        my_put_nbr_count(nb % 10, c, count);
        return count;
    }
    return (count +1);
}
