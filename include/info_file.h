/*
** EPITECH PROJECT, 2021
** info_file.h file
** File description:
** info_file
*/

#ifndef INFO_FILE_H_
#define INFO_FILE_H_

#define MINORBITS        20
#define MINORMASK        ((1U << MINORBITS) - 1)
#define MAJOR(dev)        ((unsigned int) ((dev) >> MINORBITS))
#define MINOR(dev)        ((unsigned int) ((dev) & MINORMASK))
#define MKDEV(ma,mi)      (((ma) << MINORBITS) | (mi))

void my_putstr(char const *str);
void my_printf(char *str, ...);

#endif /* !INFO_FILE_H_ */
