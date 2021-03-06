/*
** EPITECH PROJECT, 2022
** file
** File description:
** file
*/

#ifndef MY_H
    #define MY_H

    #define SUCCESS 0
    #define ERROR 84
    #define TRUE 0
    #define FALSE 1

void my_putchar(char c);
void my_putstr(char const *str);
void my_putnbr(long long int nb);
int my_strlen(char const *str);
int my_strcmp(char const *s1 , char const *s2);
long long int my_getnbr(char const *str);
char **my_strtwa(char const *str, char const separator, int end);
char *my_strcat(char const *src, char const *cat);
void my_printf(char const *format, ...);

#endif /* MY_H */
