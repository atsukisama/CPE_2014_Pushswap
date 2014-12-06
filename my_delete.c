/*
** my_delete.c for delete in /home/kerebel/Documents/EPITECH/doublechaine
** 
** Made by kerebe_p
** Login   <kerebe_p@epitech.eu>
** 
** Started on  Thu Dec  4 16:00:31 2014 kerebe_p
** Last update Thu Dec  4 16:00:31 2014 kerebe_p
*/

#include "list.h"

void	my_delete(t_list *l_x)
{
  if (l_x->next != l_x)
    {
      l_x->prev->next = l_x->next;
      l_x->next->prev = l_x->prev;
    }
}
