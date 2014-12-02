##
## Makefile for make in /home/kerebel/Documents/EPITECH/CPE_2014_Pushswap
## 
## Made by kerebe_p
## Login   <kerebe_p@epitech.eu>
## 
## Started on  Tue Dec  2 06:52:46 2014 kerebe_p
## Last update Tue Dec  2 06:52:46 2014 kerebe_p
##

SRC	= is_op.c \
	  main.c \
	  my_getnbr.c \
	  my_operation2.c \
	  my_operation.c \
	  tools.c

OBJ	= $(SRC:.c=.o)

NAME	= push_swap

RM	= rm -f

all: $(NAME)

$(NAME): $(OBJ)
	gcc -o $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all re clean fclean
