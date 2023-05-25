# -*- Makefile -*-

NAME = libft.a

CC = gcc
CFLAGS = -Werror -Wall -Wextra -g

MANDATORY_SRC = ft_isalnum.c	ft_isalpha.c	ft_isascii.c	ft_isdigit.c \
				ft_isprint.c	ft_tolower.c	ft_toupper.c	ft_atoi.c \
				ft_memcmp.c		ft_strncmp.c	ft_itoa.c		ft_strdup.c \
				ft_split.c		ft_strchr.c		ft_strrchr.c	ft_strjoin.c \
				ft_strtrim.c	ft_strmapi.c	ft_substr.c		ft_strnstr.c \
				ft_bzero.c		ft_putnbr_fd.c	ft_putchar_fd.c	ft_putstr_fd.c \
				ft_putendl_fd.c	ft_memset.c		ft_calloc.c		ft_memchr.c \
				ft_memcpy.c		ft_memmove.c	ft_striteri.c	ft_strlen.c \
				ft_strlcpy.c	ft_strlcat.c

BONUS_SRC = 	ft_lstnew.c	ft_lstadd_front.c	ft_lstsize.c	ft_lstlast.c \

MANDATORY_OBJ = ${MANDATORY_SRC:.c=.o}
BONUS_OBJ = ${BONUS_SRC:.c=.o}

all: $(NAME)

%.o: %.c
	$(CC) -c $(CFLAGS) $< -o $@ 

$(NAME): $(MANDATORY_OBJ)
	ar -rcs $(NAME) $(MANDATORY_OBJ)

$(BONUS_OBJ):
	$(CC) $(FLAGS) -c $(BONUS_SRC)
	ar -rcs $(NAME) $(BONUS_OBJ)

bonus: $(BONUS_OBJ)

clean:
	rm -rf $(MANDATORY_OBJ) $(BONUS_OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all