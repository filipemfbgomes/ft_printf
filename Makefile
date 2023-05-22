NAME = libftprintf.a

CD = cd

LIBFT_DIR = libft

INCLUDE = ft_printf.h

SRC = ft_printf.c

OBJ = $(SRC:.c=.o)

CC = cc

CFLAGS = -Wall    \
         -Wextra  \
         -Werror  \

all: $(NAME)

$(NAME): libft $(OBJ)
		cp $(LIBFT_DIR)/libft.a ./libftprintf.a 
		ar -rcs $@ $(OBJ)

%.o: %.c $(INCLUDE)
		$(CC) $(CFLAGS) -c $< -o $@

libft:
	$(MAKE) all -C ./libft

clean: 
		rm -rf $(OBJ)

fclean:	clean
		$(CD) $(LIBFT_DIR) && make -i fclean
		rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re libft