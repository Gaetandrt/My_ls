/*
** EPITECH PROJECT, 2021
** Day04
** File description:
** Task03
*/

int my_strlen(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i += 1;
    }
    return (i);
}
