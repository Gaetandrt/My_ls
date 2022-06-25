/*
** EPITECH PROJECT, 2021
** disp_stdarg prototype of my_printf
** File description:
** disp_stdarg
*/

#include <stdio.h>
#include <stdarg.h>
#include "../include/my_printf.h"

void disp_stdarg(char *str, va_list ap)
{
    int i = 0;

    str += 1;
    if (*str == 's')
        my_putstr(va_arg(ap, char *));
    if (*str == 'd' || *str == 'i')
        my_put_nbr(va_arg(ap, long long int));
    if (*str == 'c')
        my_putchar(va_arg(ap, int));
    if (*str == 'l' && str[i + 1] == 'd')
        my_put_nbr(va_arg(ap, long long int));
    va_end(ap);
}
