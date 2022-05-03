##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## make re all run_test clean fclean
##

NAME	=	binary

LIB	=	libmy.a	\
		libfile.a

SRC	=	src/main.c	\

SRC_TEST	= tests/unit_tests.c

OBJ	=  $(SRC:.c=.o)

TOBJ	=	$(SRC_TEST:.c=.o)

CPPFLAGS += -I./include

CFLAGS += -g -Werror

all: $(NAME)

$(LIB):
	make -C lib/my/
	make -C lib/file/

$(NAME): $(LIB) $(OBJ)
	$(CC) -o $(NAME) $(OBJ) -L./lib/my/ -lmy -L./lib/file/ -lfile

tests_run: $(LIB) $(OBJ) $(TOBJ)
	$(CC) -o unit_tests -lcriterion --coverage $(TOBJ) -L./lib/my/ -lmy
	./unit_tests

clean:
	$(RM) $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f unit_tests
	rm -f tests/*.o 
	make -C lib/my/ fclean
	make -C lib/file/ fclean

re: fclean all
