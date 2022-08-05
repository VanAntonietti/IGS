NAME = question_5

CC = gcc

FILES = main.c

SRC = $(FILES)

OBJ = $(SRC:.c=.o)

all:$(NAME)

$(NAME):
	$(CC) $(SRC) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean
	rm -rf $(OBJ)

re:fclean all

.PHONY: all clean fclean re