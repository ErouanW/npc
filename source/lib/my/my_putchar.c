/*
** EPITECH PROJECT, 2022
** file
** File description:
** file
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}
