CC	= gcc -g3

SRC	= src/main.c

NAME	= mydoc_CSDLib

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