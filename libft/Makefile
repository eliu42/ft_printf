# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eliu <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                +#+#+#+#+#+   +#+             #
#    Created: 2016/11/03 18:27:38 by eliu              #+#    #+#              #
#    Updated: 2018/04/19 15:11:45 by eliu             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FILES = atoi \
		bzero \
		cinstr \
		error \
		isascii \
		isalnum \
		isalpha \
		isdigit \
		isupper \
		islower \
		isprint \
		isspace \
		toupper \
		tolower \
		memalloc \
		memchr \
		memcmp \
		memcpy \
		memccpy \
		memcpy_bwd \
		memdel \
		memmove \
		memset \
		numlen \
		putchar \
		putstr \
		putnbr \
		strcat \
		strncat \
		strchr \
		strrchr \
		strcmp \
		strncmp \
		strcpy \
		strncpy \
		strdel \
		strdup \
		strndup \
		strlen \
		strclen \
		strnlen \
		strstr \
		strnstr \
		strclr \
		striter \
		striteri \
		strmap \
		strmapi \
		strequ \
		strnequ \
		strsub \
		strnew \
		putnbr_fd \
		putchar_fd \
		putstr_fd \
		putendl_fd \
		putendl \
		strjoin \
		strcjoin \
		strtrim \
		itoa \
		realloc \
		strsplit \
		strlcat \
		lstnew \
		lstdelone \
		lstdel \
		lstadd \
		lstiter \
		lstmap \

FT_FILES = $(addprefix ft_, $(FILES))
SRC_FILES = $(addsuffix .c,$(FT_FILES)) $(EXTRA_FILES)

OBJ_FILES = $(SRC_FILES:.c=.o)
OBJ_PATH = ./objs/

C_FLAGS = -Wall -Wextra -Werror
INCLUDES = includes

all: $(NAME)

$(NAME): $(SRC_FILES)
	gcc $(C_FLAGS) -c $(SRC_FILES) -I $(INCLUDES)
	ar rc $(NAME) $(OBJ_FILES)
	ranlib $(NAME)
	mkdir $(OBJ_PATH) && mv $(OBJ_FILES) $(OBJ_PATH)
#%.o%.c
#$>@

clean:
	rm -f $(OBJ_FILES)
#	rm -f $(addprefix $(OBJ_PATH), $(OBJ_FILES))
	rm -rf $(OBJ_PATH)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
