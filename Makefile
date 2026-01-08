NAME = push_swap

SRC = main.c \
      stack_init.c \
      parsing.c \
      normalize.c \
      radix_sort.c \
      small_sort.c \
      operation_swap.c \
      operation_push.c \
      operation_rotate.c \
      operation_reverse.c

OBJ = $(SRC:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.c push_swap.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
