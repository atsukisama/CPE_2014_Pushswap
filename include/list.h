/*
** list.h for list in /home/kerebel/Documents/EPITECH/doublechaine
** 
** Made by kerebe_p
** Login   <kerebe_p@epitech.eu>
** 
** Started on  Thu Dec  4 12:42:41 2014 kerebe_p
** Last update Thu Dec  4 12:42:41 2014 kerebe_p
*/

#ifndef LIST_H_
# define LIST_H_

typedef struct	s_list
{
  int		nb;
  struct s_list *next;
  struct s_list *prev;
}		t_list;

#endif
