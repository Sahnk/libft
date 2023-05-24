# -*- Makefile -*-

NAME = libft.a

CC = gcc
CFLAGS = -Werror -Wall -Wextra -g

SRC = $(wildcard ./*.c)
OBJ = ${SRC:.c=.o}

all: $(NAME)

%.o: %.c
	$(CC) -c $(CFLAGS) $< -o $@ 

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all