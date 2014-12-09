/*
** rr_operation.c for rr in /home/kerebel/Documents/EPITECH/doublechaine
** 
** Made by kerebe_p
** Login   <kerebe_p@epitech.eu>
** 
** Started on  Sat Dec  6 17:41:23 2014 kerebe_p
** Last update Sat Dec  6 17:41:23 2014 kerebe_p
*/

#include "list.h"

void		my_rra(t_list *l_a, t_list *l_b, int i)
{
  t_list	*tmp;

  tmp = l_a->prev;
  l_a->prev->prev->next = l_a;
  l_a->prev = l_a->prev->prev;
  tmp->next = l_a->next;
  tmp->prev = l_a;
  l_a->next->prev = tmp;
  l_a->next = tmp;
  my_put_op("rra", i, l_a, l_b);
}

void		my_rrb(t_list *l_b, t_list *l_a, int i)
{
  t_list	*tmp;

  tmp = l_b->prev;
  l_b->prev->prev->next = l_b;
  l_b->prev = l_b->prev->prev;
  tmp->next = l_b->next;
  tmp->prev = l_b;
  l_b->next->prev = tmp;
  l_b->next = tmp;
  my_put_op("rrb", i, l_a, l_b);
}

void		my_rrr(t_list *l_a, t_list *l_b, int i)
{
  my_rra(l_a, l_b, -2);
  my_rrb(l_b, l_a, -2);
  my_put_op("rrr", i, l_a, l_b);
}
