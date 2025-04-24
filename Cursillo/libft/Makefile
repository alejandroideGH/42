# Global Config
NAME    = libft.a
HEADER  = libft.h
SRC = *.c
OBJ = $(SRC:.c=.o)
CFLAGS  = -Wall -Werror -Wextra
CC = gcc


all: $(NAME)
$(NAME): $(OBJ)
	$(AR) r $(NAME) $(OBJ)
	@echo "Compilation succesful"
	@echo "$(NAME) created"
$(OBJ): $(SRC)
	$(CC) $(CFLAGS) -c $(SRC)
so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) -shared -o libft.so $(OBJ)
clean:
	rm -rf $(OBJ)
fclean: clean
	rm -rf $(NAME)
re: fclean all

.PHONY: all clean fclean re
