/*
** EPITECH PROJECT, 2022
** my_strlen
** File description:
** Task03
*/

#include "include/my.h"

int my_strlen(char const *str)
{
    int c = 0;
    for (int i = 0;str[i] != '\0'; i++) {
        c++;
    }
    return (c);
}
