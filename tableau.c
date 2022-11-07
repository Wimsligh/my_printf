/*
** EPITECH PROJECT, 2022
** Condition
** File description:
** Condition
*/

#include <stdarg.h>
#include "include/my.h"

int tableau(va_list list,const char *format,int i,int c)
{
    char tableflag[21] = {'s','c','i','d','%','u','o','x','X','f','F','e','E',
                        'g','G','a','A','p','n','b','S'};
    int (*tablefonction[21])(va_list,int) = {flag_s, flag_c, flag_i, flag_d,
                                flag_pr,flag_u, flag_o,flag_x,
                                flag_x_maj,flag_f, flag_f_maj,
                                flag_e, flag_e_maj,flag_g, flag_g_maj,
                                flag_a, flag_a_maj, flag_p,
                                flag_n, flag_b, flag_s_maj};
    int count = 0;
    int x = 0;
    for (x; tableflag[x] != '\0'; x++) {
        if (format[i] == tableflag[x]) {
            count = (*tablefonction[x])(list,c);
            return (count);
        }
    }
}
