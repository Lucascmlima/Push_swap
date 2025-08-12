# Variáveis
CC = gcc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = -I./includes -I./libft
LIBFT_PATH = ./libft
LIBFT = $(LIBFT_PATH)/libft.a

SRC_DIR = ./src
SRC = src/push_swap.c src/push.c src/swap.c src/rotate.c src/reverse.c src/utils.c
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
