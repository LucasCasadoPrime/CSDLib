##
## EPITECH PROJECT, 2021
## B-PSU-200-MPL-2-1-mydefender-etienne->licheron
## File description:
## Makefile
##

CC			=	gcc
CFLAGS		= -W -Wall -Wextra -g3 -I./include

SRCS		=	$(wildcard ./src/*.c)
OBJS		=	$(SRCS:.c=.o)

TARGET		=	test

all			:	$(TARGET)

$(TARGET)	:	$(OBJS)
			$(CC) -o $@ $^ $(LDFLAGS) -I./include -L/usr/local/lib
			@ echo "\033[1;34mBinary : \033[1;35m$(TARGET)\033[1;34m created sucesfully.\033[0m"

clean		:
			$(RM) $(OBJS)

fclean		:	clean
			$(RM) $(TARGET)

re			:	fclean all