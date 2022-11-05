/*
** EPITECH PROJECT, 2022
** printf
** File description:
** my.h
*/
#include <stdarg.h>
#ifndef MY_H_
    #define MY_H_

int my_printf(const char *, ...);
int my_printf_2(int,va_list, const char *, int);
void my_putchar(char);
int my_strlen(char const *str);
int my_putstr(char const *);
int my_digit(char const my_char);
int flag_a_maj(va_list,int);
int flag_p(va_list,int);
int flag_n(va_list,int,char * str);
int flag_b(va_list,int);
int flag_s_maj(va_list,int);
int flag_e(va_list,int);
int flag_e_maj(va_list,int);
int flag_g(va_list,int);
int flag_g_maj(va_list,int);
int flag_a(va_list,int);
int flag_s(va_list,int);
int flag_c(va_list,int);
int flag_i(va_list,int);
int flag_d(va_list,int);
int flag_pr(va_list,int);
int flag_u(va_list,int);
int flag_o(va_list,int);
int flag_x(va_list,int);
int flag_x_maj(va_list,int);
int flag_f(va_list,int);
int flag_f_maj(va_list,int);
int my_put_bin(unsigned, int);
int my_put_float(double);
int my_put_hexa_float(double);
int my_put_hexa_maj(unsigned);
int my_put_hexa_min(unsigned);
int my_put_nbr(int, int, int);
int my_put_nbr_count(int,int, int);
int my_digit(char const);
int my_put_octet(unsigned);
int get_precision(const char *, int, va_list);
int get_precision_star(const char *,va_list,int,int);
int my_put_pointer(int);
char *my_str_min(char *);
int my_put_scientific_maj(double);
int my_put_scientific_min(double);
int my_put_short_maj(double);
int my_put_short_min(double);
int my_put_str_s(char const *);
int my_put_unsigned(unsigned);
int tableau(va_list,const char *,int,int);

#endif /* !MY_H_ */
