##
## Makefile for make in /home/kerebel/bin
## 
## Made by kerebe_p
## Login   <kerebe_p@epitech.eu>
## 
## Started on  Fri Dec  5 05:43:19 2014 kerebe_p
## Last update Fri Dec  5 05:43:19 2014 kerebe_p
##

SRC	= add_in_list.c \
	  main.c \
	  my_delete.c \
	  my_getnbr.c \
	  my_putchar.c \
	  my_put_nbr.c \
	  my_putstr.c \
	  my_show_list.c \
	  my_tools.c \
	  p_operation.c \
	  r_operation.c \
	  rr_operation.c \
	  s_operation.c \

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

.PHONY: re all clean fclean
