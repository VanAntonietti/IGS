NAME = question_1

CC = clang

FILES = main.c

SRC = $(FILES)

OBJ = $(SRC:.c=.o)

all:$(NAME)

$(NAME):
	$(CC) -I . $(SRC) -g3 -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean
	rm -rf $(OBJ)

re:fclean all

.PHONY: all clean fclean re