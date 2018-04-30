# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eliu <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/16 18:06:14 by eliu              #+#    #+#              #
#    Updated: 2018/04/30 00:55:44 by eliu             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

FILES = ft_printf.c \
		main.c \
		append_flags.c \
		index.c \
		parse.c \
		zero_struct.c \
		print_percent.c \
		print_c.c \
		print_c_wide.c \
		print_d.c \
		print_d_long.c \
		print_i.c \
		print_n.c \
		print_o.c \
		print_o_big.c \
		print_p.c \
		print_s.c \
		print_s_wide.c \
		print_u.c \
		print_x.c \
		print_x_big.c \
		is_h_mod.c \
		is_hh_mod.c \
		is_j_mod.c \
		is_l_mod.c \
		is_ll_mod.c \
		is_z_mod.c \
		is_hash_flag.c \
		is_plus_flag.c \
		is_minus_flag.c \
		is_zero_flag.c \
		is_space_flag.c \
		is_precision_flag.c 	
		
SRC_PATH = ./srcs/
SRC_FILES = $(addprefix $(SRC_PATH), $(FILES))
OBJ_PATH = ./objs/
OBJ_FILES = $(FILES:.c=.o)

LIBFT_A = ./libft/libft.a

C_FLAGS = -Wall -Wextra -Werror

INCLUDES = -I includes -I libft/includes

all: $(NAME)

$(NAME):
	make -C libft
	gcc $(C_FLAGS) -c $(SRC_FILES) $(INCLUDES)
	ar rc $(NAME) $(OBJ_FILES) $(LIBFT_A)
#	gcc $(C_FLAGS) -Iincludes -L. -lftprintf $(LIBFT_A)
#	gcc $(C_FLAGS) srcs/main.c -L. -lftprintf -Llibft -lft $(NAME)
#	ranlib $(NAME)
#	gcc $(C_FLAGS) srcs/main.c $(NAME)
	mkdir $(OBJ_PATH) && mv $(OBJ_FILES) $(OBJ_PATH)

clean:
	rm -f $(OBJ_FILES)
	rm -rf $(OBJ_PATH)	

fclean: clean
	rm -f libftprintf.a

re: fclean all

libft: cd libft && make re

.PHONY: all clean fclean re libft
