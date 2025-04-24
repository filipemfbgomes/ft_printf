NAME = libftprintf.a

INCLUDE = ft_printf.h
LIBFT_DIR = libft
LIBFT_A = $(LIBFT_DIR)/libft.a

SRC = ft_printf.c
OBJ = $(SRC:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(LIBFT_A) $(OBJ)
	cp $(LIBFT_A) $@
	ar -r $@ $(OBJ)

$(LIBFT_A):
	$(MAKE) -C $(LIBFT_DIR)

%.o: %.c $(INCLUDE)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	$(MAKE) -C $(LIBFT_DIR) fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re