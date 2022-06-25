/*
** EPITECH PROJECT, 2021
** my printf.h
** File description:
** my_printf
*/

#include <stdarg.h>

#ifndef MY_PRINTF_H_
    #define MY_PRINTF_H_
void my_printf(char *str, ...);
char *base_to_octal(int nb);
void disp_stdarg(char *str, va_list args);
int my_put_nbr(long long int nb);
void my_putstr(char const *str);
void my_putchar(char c);
int my_intlen(int n);
char *my_revstr(char *str);
int my_strlen(char *str);
char *base_to_hex_upper(int nb);
char *base_to_hex_lower(int nb);
void my_putfloat(float n);
char *base_to_binary(int nb);
int my_printf_bis(char *str, int i, va_list args);
void disp_stdarg_bis(char *str, int i, va_list ap);
#endif
