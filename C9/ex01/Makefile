CC = cc
NAME = libft.a
SRC = $(SRC_DIR)ft_putchar.c $(SRC_DIR)ft_swap.c $(SRC_DIR)ft_putstr.c $(SRC_DIR)ft_strlen.c $(SRC_DIR)ft_strcmp.c
OBJS = $(SRC:.c=.o)
SFLAGS = -Wall -Werror -Wextra
INCLUDE = includes/
SRC_DIR = srcs/

#

.PHONY: all clean fclean re

#

all: $(NAME)

$(NAME) : $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)
$(SRC_DIR)%.o: $(SRC_DIR)%.c $(INCLUDE)ft.h
	$(CC) $(SFLAGS) -I $(INCLUDE) -c $< -o $@
clean:
	rm -f $(OBJS)
fclean : clean
	rm -f $(NAME)
re: fclean all
