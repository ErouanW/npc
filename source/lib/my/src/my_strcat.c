/*
** EPITECH PROJECT, 2022
** file
** File description:
** file
*/

#include <stdlib.h>
#include "my.h"

char *my_strcat(char const *src, char const *cat)
{
    int i = 0;
    int j = 0;
    char *tmp = malloc(my_strlen(src) + my_strlen(cat) + 1);

    if (tmp == NULL)
        return (NULL);
    while (src[i] != '\0') {
        tmp[i] = src[i];
        i++;
    }
    while (cat[j] != '\0') {
        tmp[i] = cat[j];
        j++;
        i++;
    }
    tmp[i] = '\0';
    return (tmp);
}
