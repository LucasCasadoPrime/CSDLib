##
## EPITECH PROJECT, 2022
## CSDLib
## File description:
## Makefile
##

## ---- COMPILER ---- ##
CC	=	gcc

## ---- BINARIES NAMES ---- ##
BIN	=	CSDLIB
BINLIB = CSDLIB.a
DEBUG_BIN	:=	$(BIN)_debug
TEST_BIN	:=	$(BIN)_test

## ---- SOURCE-C-AND-HEADER DIR ---- ##
SRCDIR	=	./src
SRCHEADER	=	./include
TESTDIR =	./test_criterion

## ---- FILES ---- ##

SRC	:=	$(SRCDIR)/array_int_management.c \
		$(SRCDIR)/array_str_management.c \
		$(SRCDIR)/file_management.c \
		$(SRCDIR)/string_management.c \
		$(SRCDIR)/generic_system_linked_list.c \

OBJ	:=	$(SRC:.c=.o)	\

## ---- FILES-TEST ---- ##
SRCTEST	:=	$(TESTDIR)/test_array_int.c \
		$(TESTDIR)/test_array_str.c \
		$(TESTDIR)/test_string.c \
		$(TESTDIR)/test_linked_list.c

## ---- FLAGS ---- ##
OPTI	=	-O3
DEBUG	=	-g3
CFLAGS	=	-I$(SRCHEADER) -W -Wall -Wextra -Werror
LDFLAGS_TEST	=	-lcriterion -lgcov --coverage

## ---- REMOVER ---- ##
RM	=	rm -f *.gc*	\
		rm -f vgcore.*
FRM	=	rm -f $(BIN)	\
		rm -f $(DEBUG_BIN)	\
		rm -f $(TEST_BIN)	\
		rm -f .history* \
		rm -f .tags* \
		rm -rf ./lib

## ---- RULE ---- ##
all	:	$(BIN)

$(BIN)	:	$(OBJ)
	@echo -ne "[1;36m"
	$(CC) $^ $(CFLAGS) $(OPTI) -o $@
	@echo -ne "[0m"

debug	:
	@echo -ne "[1;36m"
	$(CC) $(MAIN) $(SRC) $(CFLAGS) $(DEBUG) -o $(DEBUG_BIN)
	@echo -ne "[0m"

## ---- TEST ---- ##
tests_run	:	fclean
	$(CC) $(SRC) $(SRCTEST) $(CFLAGS) $(LDFLAGS_TEST) -o $(TEST_BIN)
	./$(TEST_BIN)

## ---- CREATE LIBRARY ---- ##
lib : 
	ar rcs $(BINLIB) $(OBJ)
	mkdir -p ./lib
	mv $(BINLIB) ./lib

## ---- CLEANING ---- ##
clean	:
	@echo -e "[1;33mCleaning .o :[0m"
	@echo -ne "[0;34m"
	@$(foreach i, $(OBJ), $(shell rm -f $(i)) echo -e " rm -f $(i)";)
	@echo -e "[0m"
	$(RM)
fclean	:	clean
	$(FRM)

## ---- RE ---- ##
re	:	fclean	all

.PHONY: all tests_run lib debug clean fclean re