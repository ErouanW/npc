##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile that compiles your libmy.
##

SRC	=	src/my_putchar.c	\
		src/my_putstr.c	\
		src/my_strlen.c	\
		src/my_strcmp.c	\
		src/my_putnbr.c	\
		src/my_getnbr.c	\
		src/my_strtwa.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

CFLAGS += -Wall -Wextra -Werror

CPPFLAGS += -I./include

all: $(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	cp include/my.h ../../include/my.h

clean:
	$(RM) -f $(OBJ)

fclean: clean
	$(RM) -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
