SRC_DIR = srcs

INC_DIR = includes

NAME = libft.a

SRCS =  $(SRC_DIR)/ft_putchar.c $(SRC_DIR)/ft_swap.c $(SRC_DIR)/ft_putstr.c $(SRC_DIR)/ft_strlen.c $(SRC_DIR)/ft_strcmp.c

CC = gcc

CFLAGS =  -Wall -Wextra -Werror -I$(INC_DIR)

OBJ = $(SRCS:.c=.o)

all : $(NAME)


$(NAME) : $(OBJ)
	ar rcs $(NAME) $(OBJ)

$(SRC_DIR)/%.o : $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -f $(OBJ)

fclean :
	rm -f $(NAME)

re : fclean all