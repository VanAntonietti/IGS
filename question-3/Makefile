NAME = question_3

CC = gcc

FILES = main.c

FLAGS = -Wall -Wextra -Werror

SRC = $(FILES)

OBJ = $(SRC:.c=.o)

all:$(NAME)

$(NAME):
	$(CC) -I . $(SRC) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean
	rm -rf $(OBJ)

re:fclean all

.PHONY: all clean fclean re