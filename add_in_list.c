/*
** add_in_list.c for add in list in /home/kerebel/Documents/EPITECH/doublechaine
** 
** Made by kerebe_p
** Login   <kerebe_p@epitech.eu>
** 
** Started on  Thu Dec  4 15:10:23 2014 kerebe_p
** Last update Thu Dec  4 15:10:23 2014 kerebe_p
*/

#include <stdlib.h>
#include "list.h"

int		add_in_list_t(t_list *l_x, int nb)
{
  t_list	*elem;

  elem = malloc(sizeof(*elem));
  if (elem == NULL)
    return (-1);
  elem->nb = nb;
  elem->prev = l_x->prev;
  elem->next = l_x;
  l_x->prev->next = elem;
  l_x->prev = elem;
  return (0);
}

int		add_in_list_h(t_list *l_x, int nb)
{
  t_list	*elem;

  elem = malloc(sizeof(*elem));
  if (elem == NULL)
    return (-1);
  elem->nb = nb;
  elem->next = l_x->next;
  elem->prev = l_x;
  l_x->next->prev = elem;
  l_x->next = elem;
  return (0);
}
