/*
** my_tools.c for tool in /home/kerebel/Documents/EPITECH/doublechaine
** 
** Made by kerebe_p
** Login   <kerebe_p@epitech.eu>
** 
** Started on  Fri Dec  5 00:42:33 2014 kerebe_p
** Last update Fri Dec  5 00:42:33 2014 kerebe_p
*/

#include "list.h"

int		is_op(t_list *l_a)
{
  t_list	*tmp;

  tmp = l_a;
  while (tmp->next->next != l_a)
    {
      if (tmp->next->nb > tmp->next->next->nb)
	return (1);
      tmp = tmp->next;
    }
  return (0);
}
