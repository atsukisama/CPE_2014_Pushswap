/*
** my_show_list.c for show list in /home/kerebel/Documents/EPITECH/doublechaine
** 
** Made by kerebe_p
** Login   <kerebe_p@epitech.eu>
** 
** Started on  Thu Dec  4 15:24:39 2014 kerebe_p
** Last update Thu Dec  4 15:24:39 2014 kerebe_p
*/

#include "list.h"
#include <stdlib.h>

void		show_list(t_list *l_x, char *def)
{
  t_list	*elem;
  int		i;

  elem = l_x;
  my_putstr(def);
  while (elem->next != l_x)
    {
      i = elem->next->nb;
      my_put_nbr(i);
      if (elem->next->next != l_x)
	my_putchar(' ');
      elem = elem->next;
    }
}

void		show_list_r(t_list *l_x, char *def)
{
  t_list	*elem;
  int		i;

  elem = l_x;
  my_putstr(def);
  while (elem->prev != l_x)
    {
      i = elem->prev->nb;
      my_put_nbr(i);
      if (elem->prev->prev != l_x)
	my_putchar(' ');
      elem = elem->prev;
    }
}

int		count_list(t_list *l_x)
{
  t_list	*elem;
  int		i;

  i = 0;
  elem = l_x;
  while (elem->next != l_x)
    {
      elem = elem->next;
      i = i + 1;
    }
  return (i);
}
