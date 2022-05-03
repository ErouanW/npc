/*
** EPITECH PROJECT, 2022
** file
** File description:
** file
*/

#include "my.h"

static int if_is_neg(char const *str)
{
    int is_neg = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '-')
            is_neg++;
    }
    return (is_neg % 2);
}

static int check_limit(char const *str)
{
    if (my_strlen(str) > 18)
        return (0);
    return (1);
}

long long int my_getnbr(char const *str)
{
    int is_neg = if_is_neg(str);
    long long int nbr = 0;

    if (check_limit(str) == 0)
        return (0);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9')
            nbr = nbr * 10 + str[i] - '0';
        else if (nbr != 0)
            break;
    }
    if (is_neg == 1)
        nbr *= -1;
    return (nbr);
}
