/*
** EPITECH PROJECT, 2021
** first try of my_printf prototype
** File description:
** main
*/

#include <stdio.h>
#include <stdarg.h>
#include "my_printf.h"
#include <stdlib.h>

void my_printf(char *str, ...)
{
    va_list args;
    va_start(args, str);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != '%' && str[i - 1] != '%')
            my_putchar(str[i]);
        if (str[i] == '%' && str[i + 1] != 'l') {
            disp_stdarg(str + i, args);
            i += 1;
        }
        if (str[i] == '%' && str[i + 1] == 'l' && str[i + 2] == 'l') {
            disp_stdarg(str + i, args);
            i += 3;
        }
        if (str[i] == '%' && str[i + 1] == 'l' && str[i + 2] != 'l') {
            disp_stdarg(str + i, args);
            i += 2;
        }
    }
}
