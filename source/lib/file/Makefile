##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile that compiles your libmy.
##

SRC	=	src/create_file.c	\
		src/read_file.c		\
		src/write_in_file.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libfile.a

CFLAGS += -Wall -Wextra -Werror

CPPFLAGS += -I./include

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	cp include/myfile.h ../../include/myfile.h

clean:
	$(RM) -f $(OBJ)

fclean: clean
	$(RM) -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
