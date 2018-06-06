# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlowing <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/01 12:55:28 by jlowing           #+#    #+#              #
#    Updated: 2018/06/04 10:27:24 by jlowing          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

TAG = gcc
FLAG = -Wall -Werror -Wextra
SRC =	ft_mem{alloc,ccpy,chr,cmp,cpy,del,move,set}.c \
	ft_lst{map,new,delone,del,add,iter}.c \
	ft_is{alpha,print,alnum,ascii,digit}.c \
	ft_str{iter,iteri}.c \
	ft_str{map,mapi}.c \
	ft_to{lower,upper}.c \
	ft_put{char,str,endl,nbr}.c \
	ft_put{char,str,endl,nbr}_fd.c \
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



all: $(NAME)

$(NAME):
	@$(TAG) $(FLAG) -c $(SRC)
	@ar rc $(NAME) *.o	
	@ranlib $(NAME)
	@echo "Library created"

clean:
	@rm -rf *.o
	@echo "Object files removed"

fclean: clean
	@rm -f libft.a
	@echo "Compiled files removed"

re: fclean all
