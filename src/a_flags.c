/*
** EPITECH PROJECT, 2021
** a flags that display hidden file
** File description:
** a_flags
*/

#include<dirent.h>
#include <stdlib.h>
#include "my_printf.h"
#include <stdio.h>

int a_flags(char *path)
{
    DIR *d;
    struct dirent *dir;

    d = opendir(path);
    if (d) {
        while ((dir = readdir(d)) != NULL) {
            printf("%s", dir->d_name);
            printf("%c", ' ');
        }
    }
    closedir(d);
    return (0);
}