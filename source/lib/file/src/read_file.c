/*
** EPITECH PROJECT, 2022
** file
** File description:
** file
*/

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include "my.h"

static int file_handling(int fd, int stat)
{
    if (fd == -1) {
        perror("open");
        return (ERROR);
    }
    if (stat == -1) {
        perror("stat");
        return (ERROR);
    }
    return (SUCCESS);
}

char *read_file(char const *path)
{
    struct stat sb;
    int fd = open(path, O_RDONLY);
    char *buf = NULL;
    int bso = 0;

    bso = stat(path, &sb);
    if (file_handling(fd, bso) == ERROR)
        return (NULL);
    buf = malloc(sb.st_size + 1);
    if (buf == NULL)
        return (NULL);
    bso = read(fd, buf, sb.st_size);
    if (bso == -1) {
        perror("read");
        return (NULL);
    }
    buf[bso - 1] = '\0';
    return (buf);
}
