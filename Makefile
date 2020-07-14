##
## EPITECH PROJECT, 2019
## 106bombyx
## File description:
## makefile
##

SRC	=	main.c		\
		first_file.c	\
		check_number.c

OBJ	=	$(SRC:.c=.o)

NAME	=	106bombyx

CFLAGS	=	-g -g3 -ggdb -I ./include

all:		$(NAME) message

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all

message:
		@echo "SUCCESSFULLY COMPILED!"
