/*
** EPITECH PROJECT, 2022
** file
** File description:
** file
*/

#include <stdlib.h>
#include "my.h"

static int get_nbr_of_words(char const *str, char const separator, int end)
{
    int parse = 0;
    int nbr_of_words = 0;

    while (str[parse] != '\0') {
        if (str[parse] == separator)
            nbr_of_words++;
        parse++;
    }
    if (end == FALSE)
        return (nbr_of_words + 1);
    return (nbr_of_words);
}

static int get_size_to_next_separator(char const *str, char const separator)
{
    int parse = 0;

    while (str[parse] != '\0' && str[parse] != separator)
        parse++;
    return (parse);
}

char **my_strtwa(char const *str, char const separator, int end)
{
    int parse = 0;
    int stage = 0;
    int nbr_of_words = get_nbr_of_words(str, separator, end);
    char **array = malloc(sizeof(char *) * (nbr_of_words + 1));

    if (array == NULL)
        return (NULL);
    for (int y = 0; y != nbr_of_words; y++) {
        array[y] = malloc(
            get_size_to_next_separator(&str[parse], separator) + 1);
        while (str[parse] != '\0' && str[parse] != separator) {
            array[y][stage] = str[parse];
            stage++;
            parse++;
        }
        parse++;
        array[y][stage] = '\0';
        stage = '\0';
    }
    array[nbr_of_words] = NULL;
    return (array);
}
