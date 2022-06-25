/*
** EPITECH PROJECT, 2021
** take the different info of the file and put is in the struct
** File description:
** take_info
*/

#include "my_ls.h"
#include <stdio.h>

int main(int ac, char **av)
{
    char *filepath;

    if (ac != 1)  {
        if (av[1][0] != '-')
            filepath = av[1];
    } else
        filepath = ".";
    if (ac == 1)
        no_flags_no_path(filepath);
    if (av[1] == "-a")
        a_flags(filepath);
}
