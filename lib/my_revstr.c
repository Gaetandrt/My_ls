/*
** EPITECH PROJECT, 2021
** Day06
** File description:
** Task03
*/

#include "../include/my_printf.h"
#include <stdio.h>
#include <stdlib.h>

char *my_revstr(char *str)
{
    char *result = malloc(sizeof(char) * (my_strlen(str)));
    int cpt = my_strlen(str) - 1;

    for (int i = 0; cpt >= 0; i++) {
        result[i] = str[cpt];
        cpt--;
    }
    result [my_strlen(str)] = '\0';
    return (result);
}
