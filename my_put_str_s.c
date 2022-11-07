/*
** EPITECH PROJECT, 2022
** printf
** File description:
** my_put_str_s
*/

#include "include/my.h"

int my_put_str_s(char const *str)
{
    int count = 0;
    for (int c = 0; str[c] != '\0'; c++) {
        if (str[c] < 32 || str[c] >= 127) {
            my_putchar('\\');
            my_put_octet(str[c]);
        } else
            my_putchar(str[c]);
    }
    count = my_strlen(str);
    return (count);
}
