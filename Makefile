# -*- Makefile -*-

NAME = libft.a

CC = gcc
CFLAGS = -Werror -Wall -Wextra

SRC = $(wildcard ./*.c)
OBJ = ${SRC:.c=.o}

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(SRC)
	ar -rc $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all