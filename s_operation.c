/*
** s_operation.c for s operation in /home/kerebel/Documents/EPITECH/doublechaine
** 
** Made by kerebe_p
** Login   <kerebe_p@epitech.eu>
** 
** Started on  Thu Dec  4 15:34:20 2014 kerebe_p
** Last update Thu Dec  4 15:34:20 2014 kerebe_p
*/

#include "list.h"

void		my_sa(t_list *l_a, t_list *l_b, int i)
{
  t_list	*tmp;

  tmp = l_a->next;
  l_a->next->next->prev = l_a;
  l_a->next = l_a->next->next;
  l_a->next->next->prev = tmp;
  tmp->prev = l_a->next;
  tmp->next = l_a->next->next;
  l_a->next->next = tmp;
  my_put_op("sa", i, l_a, l_b);
}

void		my_sb(t_list *l_b, t_list *l_a, int i)
{
  t_list	*tmp;

  tmp = l_b->next;
  l_b->next->next->prev = l_b;
  l_b->next = l_b->next->next;
  l_b->next->next->prev = tmp;
  tmp->prev = l_b->next;
  tmp->next = l_b->next->next;
  l_b->next->next = tmp;
  my_put_op("sb", i, l_a, l_b);
}

void	my_ss(t_list *l_a, t_list *l_b, int i)
{
  my_sa(l_a, l_b, -2);
  my_sb(l_b, l_a, -2);
  my_put_op("ss", i, l_a, l_b);
}
