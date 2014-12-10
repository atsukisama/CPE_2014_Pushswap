/*
** r_operation.c for r in /home/kerebel/Documents/EPITECH/doublechaine
** 
** Made by kerebe_p
** Login   <kerebe_p@epitech.eu>
** 
** Started on  Thu Dec  4 19:06:35 2014 kerebe_p
** Last update Thu Dec  4 19:06:35 2014 kerebe_p
*/

#include "include/list.h"

void		my_ra(t_list *l_a, t_list *l_b, int i)
{
  t_list	*tmp;

  tmp = l_a->next;
  l_a->next->next->prev = l_a;
  l_a->next = l_a->next->next;
  tmp->next = l_a;
  tmp->prev = l_a->prev;
  l_a->prev->next = tmp;
  l_a->prev = tmp;
  my_put_op("ra", i, l_a, l_b);
}

void		my_rb(t_list *l_b, t_list *l_a, int i)
{
  t_list	*tmp;

  tmp = l_b->next;
  l_b->next->next->prev = l_b;
  l_b->next = l_b->next->next;
  tmp->next = l_b;
  tmp->prev = l_b->prev;
  l_b->prev->next = tmp;
  l_b->prev = tmp;
  my_put_op("rb", i, l_a, l_b);
}

void	my_rr(t_list *l_a, t_list *l_b, int i)
{
  my_ra(l_a, l_b, -2);
  my_rb(l_b, l_b, -2);
  my_put_op("rr", i, l_a, l_b);
}
