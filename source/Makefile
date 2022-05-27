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
		src/error_handling/error_handling.c

SRC_TEST	= tests/unit_tests.c

OBJ	=  $(SRC:.c=.o)

TEST_OBJ	=	$(SRC_TEST:.c=.o)

TEST_NAME	=	unit_tests

TEST_FLAGS	=	-lcriterion --coverage

CPPFLAGS += -I./include

CFLAGS += -g -Werror

LDFLAGS	+=	-L./lib/my/ -lmy -L./lib/file/ -lfile

all: $(NAME)

$(LIB):
	$(MAKE) -C lib/my/
	$(MAKE) -C lib/file/

$(NAME): $(LIB) $(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(LDFLAGS)

tests_run: $(LIB) $(OBJ) $(TOBJ)
	$(CC) -o $(TEST_NAME) $(TEST_FLAGS) $(TEST_OBJ) $(LDFLAGS)
	./$(TEST_NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) -f $(NAME)
	$(RM) -f $(TEST_NAME)
	$(RM) -f $(TEST_OBJ)
	$(MAKE) -C lib/my/ fclean
	$(MAKE) -C lib/file/ fclean

re: fclean all

.PHONY: re all clean fclean tests_run
