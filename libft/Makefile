NAME = libft.a

SRCS = 	ft_putchar.c	 \
		ft_putnbr_base.c \
		ft_putnbr_u.c	 \
		ft_putnbr_hex.c	 \
		ft_strlen.c		 \
		ft_void.c		 \
		ft_putstr.c

INCLUDE = libft.h

OBJ = $(SRCS:.c=.o)

CC = cc

CFLAGS = -Wall    \
         -Wextra  \
         -Werror  \


all: $(NAME)

$(NAME): $(OBJ) $(INCLUDE)
		@ar -rcs $(NAME) $(OBJ)


%.o: %.c $(INCLUDE)
		@$(CC) $(CFLAGS) -c $< -o $@

clean: 
		@rm -rf $(OBJ)

fclean:	
		@rm -rf $(OBJ) $(NAME) 


re: fclean all

.PHONY: all clean fclean re 