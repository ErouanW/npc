/*
** EPITECH PROJECT, 2022
** file
** File description:
** file
*/

#include "my.h"

void my_putnbr(long long int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = nb * -1;
    }
    if (nb / 10)
        my_putnbr(nb / 10);
    my_putchar((nb % 10) + 48);
}
