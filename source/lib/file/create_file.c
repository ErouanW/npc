/*
** EPITECH PROJECT, 2022
** file
** File description:
** file
*/

#include <fcntl.h>
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include "my.h"

int create_file(char *file_name)
{
    int fd = open(file_name, O_CREAT | O_WRONLY);

    if (fd == -1) {
        perror("open");
        return (ERROR);
    }
    return (SUCCESS);
}
