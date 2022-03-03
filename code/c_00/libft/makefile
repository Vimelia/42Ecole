NAME = libft.a
CC = clang
FLAGS = -Wall -Wextra -Werror
SRC=$(wildcard *.c)

OBJ = $(SRC:.c=.o)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
		ar -rc $(NAME) $(OBJ)

all: $(NAME)

clean: 
	rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all

main: main.c $(NAME)
	$(CC) $(FLAGS) main.c $(NAME) -o main
	./main
