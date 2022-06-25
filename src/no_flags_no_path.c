/*
** EPITECH PROJECT, 2021
** basic ls at the path where its called
** File description:
** no_flags_no_path
*/

#include<dirent.h>
#include <stdlib.h>
#include "my_printf.h"
#include <stdio.h>

int no_flags_no_path(char *path)
{
    DIR *d;
    struct dirent *dir;
    
    d = opendir(path);
    while ((dir = readdir(d)) != NULL) {
        if (dir->d_name[0] == '.')
            continue;
        printf("%s\n", dir->d_name);
    }
    closedir(d);
    return (0);
}
