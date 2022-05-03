##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile that compiles your libmy.
##

SRC	=	create_file.c	\
		read_file.c		\
		write_in_file.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	libfile.a

CFLAGS += -g

all: $(NAME)

$(NAME):	$(OBJ)
	ar rc libfile.a *.o
	cp myfile.h ../../include/myfile.h

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
