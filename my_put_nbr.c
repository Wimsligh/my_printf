/*
** EPITECH PROJECT, 2022
** put_nbr
** File description:
** putnbr
*/

#include "include/my.h"

int my_put_nbr(int n, int c, int count)
{
    int nb = n;
    if (n < 0) {
        my_putchar('-');
        nb = -n;
        count++;
    }
    if (nb > 9) {
        count++;
        count = my_put_nbr(nb / 10, c, count);
        my_put_nbr(nb % 10, c, count);
        return count;
    }  else {
        my_putchar(nb + '0');
        count++;
    }
    return (count +1);
}
