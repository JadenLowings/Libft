# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlowing <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/01 12:55:28 by jlowing           #+#    #+#              #
#    Updated: 2018/06/25 09:58:36 by jlowing          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a

CC=gcc

CFLAGS=-Wall -Werror -Wextra -O3

RM=rm -f

LDFLAGS=-L.

LDLIBS=-lft

HDDIRS=-I includes/

SRC =	ft_memalloc.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
	ft_memdel.c ft_memmove.c ft_memset.c \
	ft_lstmap.c ft_lstnew.c ft_lstdelone.c ft_lstdel.c ft_lstadd.c ft_lstiter.c \
	ft_isalpha.c ft_isprint.c ft_isalnum.c ft_isascii.c ft_isdigit.c \
	ft_striter.c ft_striteri.c \
	ft_strmap.c ft_strmapi.c \
	ft_tolower.c ft_toupper.c \
	ft_putchar.c ft_putstr.c ft_putendl.c ft_putnbr.c \
	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
	ft_atoi.c \
	ft_bzero.c \
	ft_strcat.c \
	ft_strchr.c \
	ft_strclr.c \
	ft_strcmp.c \
	ft_strcpy.c \
	ft_strdel.c \
	ft_strdup.c \
	ft_strequ.c \
	ft_strjoin.c \
	ft_strlcat.c \
	ft_strlen.c  \
	ft_strncat.c \
	ft_strncmp.c \
	ft_strncpy.c \
	ft_strnequ.c \
	ft_strnew.c \
	ft_strnstr.c \
	ft_strrchr.c \
	ft_strstr.c \
	ft_strsub.c \
	ft_strtrim.c \
	ft_strsplit.c \
	ft_itoa.c \

OBJ=$(SRC:.c=.o)

$(NAME): includes/libft.h
	$(CC) $(CFLAGS) -c $(SRC) $(HDDIRS)
	@ar rc $(NAME) $(OBJ)	
	@ranlib $(NAME)
	@echo "Library created"

all: $(NAME)
clean:
	@$(RM) $(OBJ)
	@echo "Object files removed"

fclean: clean
	@$(RM) $(NAME)
	@echo "Compiled files removed"

re: fclean all
