# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eliu <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/04/07 13:36:28 by eliu              #+#    #+#              #
#    Updated: 2017/07/11 22:01:14 by eliu             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

FILES = main.c \
		ft_printf.c \

OBJ_FILES = $(FILES:.c=.o)

CC = gcc
C_FLAGS = -Wall -Wextra -Werror

INCLUDES = ./includes

all:
	$(CC) -c $(FILES)
	$(CC) $(C_FLAGS) -o $(NAME) $(OBJ_FILES)

clean:
	rm -f $(OBJ_FILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
