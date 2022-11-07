/*
** EPITECH PROJECT, 2022
** my_put_octet
** File description:
** my_put_octet
*/

#include "include/my.h"

int my_put_octet(unsigned int n)
{
    int c = 0;
    int count = 0;
    int resultat = 0;
    int i = 1;

    while (n != 0) {
        resultat = resultat + (n % 8) * i;
        n = n / 8;
        i = i * 10;
    }
    my_put_nbr(resultat, c, count);
    return (count);
}
