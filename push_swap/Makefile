# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lcarvalh <lcarvalh@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/27 10:28:54 by lcarvalh          #+#    #+#              #
#    Updated: 2025/09/23 18:42:24 by lcarvalh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = -I./includes -I./libft
LIBFT_PATH = ./libft
LIBFT = $(LIBFT_PATH)/libft.a

SRC_DIR = ./src ./srcop
SRC = push_swap.c \
	src/ft_atol.c \
    src/radix.c \
    src/utils.c \
    src/stack.c \
    src/is_sorted.c \
    src/parser.c \
    src/ft_split.c \
    src/free_split.c \
    srcop/push.c \
    srcop/swap.c \
	src/sort_small.c \
    srcop/rotate.c \
    srcop/reverse.c

OBJ = $(SRC:.c=.o)

NAME = push_swap

all: $(LIBFT) $(NAME)

$(LIBFT):
	@echo "Compilando libft..."
	$(MAKE) -C $(LIBFT_PATH)

$(NAME): $(OBJ) $(LIBFT)
	@echo "Compilando push_swap..."
	$(CC) $(CFLAGS) $(INCLUDES) $(OBJ) $(LIBFT) -o $(NAME)

clean:
	@echo "Limpando objetos..."
	$(MAKE) clean -C $(LIBFT_PATH)
	rm -f $(OBJ)

fclean: clean
	@echo "Limpando tudo..."
	$(MAKE) fclean -C $(LIBFT_PATH)
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
