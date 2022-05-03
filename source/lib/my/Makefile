##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile that compiles your libmy.
##

SRC	=	my_putchar.c	\
		my_putstr.c	\
		my_strlen.c	\
		my_strcmp.c	\
		my_putnbr.c	\
		my_getnbr.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

CFLAGS += -g

all: $(NAME)

$(NAME):	$(OBJ)
	ar rc libmy.a *.o
	cp my.h ../../include/my.h

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
