/*
** EPITECH PROJECT, 2022
** my_put_hexa
** File description:
** my_put_hexa
*/

#include "include/my.h"

int my_put_hexa_min(unsigned int n)
{
    int size = 16;
    int count = 0;

    if (n >= (unsigned)size - 1)
    count = my_put_hexa_maj(n / size);
    count = count + 1;

    my_putchar("0123456789abcdef"[n % size]);
    return (count);
}
