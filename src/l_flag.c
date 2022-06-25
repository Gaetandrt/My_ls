/*
** EPITECH PROJECT, 2021
** l_flag for my_ls
** File description:
** l_flag
*/

#include "my_printf.h"
#include <sys/types.h>
#include <sys/stat.h>

void l_flag(char *path)
{
    struct stat stats;
    stat(path, &stats);

    my_printf("total %d\n", stats.st_blocks);
}
