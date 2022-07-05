CC	= gcc -g3

SRC	= src/main.c

NAME	= test

OBJ	=  $(SRC:.c=.o)

FLAGS	= -I./include -lCSDLib

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME) $(FLAGS)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all