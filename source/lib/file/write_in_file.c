/*
** EPITECH PROJECT, 2022
** file
** File description:
** file
*/

#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include "my.h"

int write_in_file(char *path, char *content)
{
    int fd = open(path, O_WRONLY);
    size_t size;

    if (fd == -1) {
        perror("open");
        return (ERROR);
    }
    size = write(fd, content, my_strlen(content));
    if (size == -1) {
        perror("write");
        return (ERROR);
    }
    return (SUCCESS);
}
