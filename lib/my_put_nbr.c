/*
** EPITECH PROJECT, 2021
** my_put_nbr
** File description:
** Display all the number of a string
*/

#include "../include/my_printf.h"

void my_putchar(char c);

int my_put_nbr(long long int nb)
{
    long long int nbr = 0;

    if (nb < 0) {
        my_putchar('-');
        nb = nb *(-1);
    }
    if (nb < 10) {
        my_putchar(nb + '0');
    } else if (nb > 9) {
        my_put_nbr(nb / 10);
        nbr = nb % 10;
        my_putchar(nbr + '0');
    }
    return (0);
}
