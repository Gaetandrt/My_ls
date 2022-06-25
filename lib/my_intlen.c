/*
** EPITECH PROJECT, 2021
** calcul the lenght of a int
** File description:
** my_intlen
*/

#include <stdio.h>

int my_intlen(int n)
{
    int i = 0;

    while (n != 0) {
        i++;
        n = n / 10;
    }
    return (i);
}
