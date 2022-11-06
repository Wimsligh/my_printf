/*
** EPITECH PROJECT, 2022
** my_str_min
** File description:
** my_str_min
*/
#include "include/my.h"

char *my_str_min(char *str)
{
    int m = 0;

    while (str[m] != '\0') {
        if (str[m] <= 'Z' && str[m] >= 'A')
            str[m] = str[m] + 32;
        m++;
    }
    return (str);
}
