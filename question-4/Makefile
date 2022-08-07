NAME = question_4

CC = gcc

FILES = main.c mergeKListas.c

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