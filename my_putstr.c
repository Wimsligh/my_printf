/*
** EPITECH PROJECT, 2022
** my_putstr
** File description:
** Task02
*/

#include "include/my.h"

int my_putstr(char const *str)
{
    for (int c = 0; str[c] != '\0'; c++) {
        my_putchar(str[c]);
    }
    return my_strlen(str);
}
