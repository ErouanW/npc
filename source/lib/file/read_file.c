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

char *read_file(char *path)
{
    struct stat sb;
    int fd = open(path, O_RDONLY);
    char *buf = NULL;
    int bso = 0;

    if (fd == -1) {
        perror("open");
        return (NULL);
    }
    if (stat(path, &sb) == -1) {
        perror("stat");
        return (NULL);
    }
    buf = malloc(sb.st_size + 1);
    if ((bso = read(fd, buf, sb.st_size)) == -1) {
        perror("read");
        return (NULL);
    }
    buf[bso - 1] = '\0';
    return (buf);
}
