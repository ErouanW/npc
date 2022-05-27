/*
** EPITECH PROJECT, 2022
** my_printf.c
** File description:
** printf
*/

#include <stdlib.h>
#include <stdarg.h>
#include "my.h"

static void char_checker(va_list args, char to_check)
{
    switch (to_check) {
        case 's':
            my_putstr(va_arg(args, char *));
            break;
        case 'i':
            my_putnbr(va_arg(args, int));
            break;
        case 'd':
            my_putnbr(va_arg(args, int));
            break;
        case 'c':
            my_putchar(va_arg(args, int));
            break;
    }
    return;
}

void my_printf(char const *format, ...)
{
    va_list args;

    va_start(args, format);
    for (int i = 0; format[i] != '\0'; i++) {
        if (format[i] == '%') {
            char_checker(args, format[i + 1]);
            i++;
        } else {
            my_putchar(format[i]);
        }
    }
    va_end(args);
}
