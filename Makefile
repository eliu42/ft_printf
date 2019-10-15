# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eliu <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/16 18:06:14 by eliu              #+#    #+#              #
#    Updated: 2019/10/15 13:54:35 by eliu             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

FILES = ft_printf.c \
		
SRC_PATH = ./srcs/
SRC_FILES = $(addprefix $(SRC_PATH), $(FILES))
OBJ_PATH = ./objs/
OBJ_FILES = $(FILES:.c=.o)

LIBFT_A = ./libft/libft.a

C_FLAGS = -Wall -Wextra -Werror

INCLUDES = -I includes

.PHONY: all clean fclean re libft

all: $(NAME)

$(NAME): $(SRC_FILES) main.c
	make -C libft
	gcc $(C_FLAGS) -c $(SRC_FILES)
	ar rc $(NAME) $(OBJ_FILES) $(LIBFT_A)
	ranlib $(NAME)
	gcc $(NAME) main.c $(LIBFT_A)
#	gcc $(C_FLAGS) -Iincludes -L. -lftprintf $(LIBFT_A)
#	gcc $(C_FLAGS) srcs/main.c -L. -lftprintf -Llibft -lft $(NAME)
#	ranlib $(NAME)
#	gcc $(C_FLAGS) srcs/main.c $(NAME)
	mkdir $(OBJ_PATH) && mv $(OBJ_FILES) $(OBJ_PATH)

test:
	gcc $(C_FLAGS) $(NAME) main.c

clean:
	rm -f $(OBJ_FILES)
	rm -rf $(OBJ_PATH)	

fclean: clean
	rm -f libftprintf.a

re: fclean all

libft: cd libft && make re

