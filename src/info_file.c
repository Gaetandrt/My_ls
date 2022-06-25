/*
** EPITECH PROJECT, 2021
** ls bootstrap main function
** File description:
** info_file
*/

#include "info_file.h"
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "my_printf.h"
#include <pwd.h>
#include <grp.h>
#define MINORBITS        20
#define MINORMASK        ((1U << MINORBITS) - 1)
#define MAJOR(dev)       ((unsigned int) ((dev) >> MINORBITS))
#define MINOR(dev)       ((unsigned int) ((dev) & MINORMASK))

char *find_name(char *filepath)
{
    int i = my_strlen(filepath);
    int tmp = i;
    int l = 0;

    while (filepath[i - 1] != '/') {
        i--;
        l++;
    }
    char *name = malloc(sizeof(char) * l + 1);
    name[l + 1] = '\0';
    l = tmp - l;
    for (int i = 0; filepath[l] != '\0' && filepath[l] != '.'; i++) {
        name[i] = filepath[l];
        l++;
    }
    return (name);
}

char *find_type(char *filepath)
{
    struct stat stats;

    stat(filepath, &stats);
    if (S_ISREG(stats.st_mode) == 1)
        return ("r");
    if (S_ISDIR(stats.st_mode) == 1)
        return ("d");
    if (S_ISCHR(stats.st_mode) == 1)
        return ("c");
    if (S_ISBLK(stats.st_mode) == 1)
        return ("b");
    if (S_ISFIFO(stats.st_mode) == 1)
        return ("f");
    if (S_ISLNK(stats.st_mode) == 1)
        return ("l");
    if (S_ISSOCK(stats.st_mode) == 1)
        return ("s");
    else
        return ("Unknown type");
}

void display_minor_major(char *filepath)
{
    struct stat stats;

    stat(filepath, &stats);
     if (S_ISCHR(stats.st_mode) == 1) {
         my_printf("Minor: %d\n", MINOR(stats.st_dev));
         my_printf("Major: %d\n", MAJOR(stats.st_dev));
     } else {
         my_printf("Minor: N/A\nMajor: N/A\n");
     }
}

int main_two(int ac, char **av)
{
    char *filepath = av[1];
    struct stat stats;

    stat(filepath, &stats);
    if (ac > 2) {
        my_putstr("Too much arguments (max 1)");
        return (84);
    }
    my_printf("Name: %s\nType: %s\n", find_name(filepath), find_type(filepath));
    my_printf("Inode: %ld\nSize: %ld\n", stats.st_ino, stats.st_size);
    my_printf("Hard link: %ld\nAllocated space: %ld\n", stats.st_nlink, (stats.st_blocks * stats.st_blksize));
    display_minor_major(filepath);
    my_printf("UID: %d\nGID: %d\n", stats.st_uid, stats.st_gid);
    return (0);
}
