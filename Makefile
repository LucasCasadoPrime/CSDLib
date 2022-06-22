##
## EPITECH PROJECT, 2022
## CSDLib
## File description:
## Makefile
##


CC			=	gcc
CFLAGS		= -W -Wall -Wextra -g3

SRCS		=	$(wildcard ./src/*.c)
OBJS		=	$(SRCS:.c=.o)

TARGET		=	test

all			:	$(TARGET)

$(TARGET)	:	$(OBJS)
			$(CC) -o $@ $^ $(LDFLAGS) -I./includes
			@ echo "\033[1;34mBinary : \033[1;35m$(TARGET)\033[1;34m created sucesfully.\033[0m"

clean		:
			$(RM) $(OBJS)

fclean		:	clean
			$(RM) $(TARGET)

re			:	fclean all