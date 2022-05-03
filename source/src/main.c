/*
** EPITECH PROJECT, 2022
** file
** File description:
** file
*/

#include "my.h"
#include "mymain.h"

int main(int ac, char **av)
{
    if (error_handling(ac - 1, &av[1]) == 84)
        return (ERROR);
    return (SUCCESS);
}
