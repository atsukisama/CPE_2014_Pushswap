/*
** algo_la.c for algo in /home/kerebel/Documents/EPITECH/doublechaine
** 
** Made by kerebe_p
** Login   <kerebe_p@epitech.eu>
** 
** Started on  Sat Dec  6 23:03:20 2014 kerebe_p
** Last update Sat Dec  6 23:03:20 2014 kerebe_p
*/

#include "include/my.h"

int		check_max(t_list *l_b)
{
  t_list	*tmp;
  int		i;

  tmp = l_b->next;
  i = l_b->next->nb;
  while (tmp != l_b)
    {
      if (tmp->nb > i)
	return (1);
      tmp = tmp->next;
    }
  return (0);
}

void	algo_sort(t_list *l_a, t_list *l_b, int ac, int opt)
{
  if (opt == 0)
    my_pb(l_a, l_b, 3);
  while (l_a->next != l_a)
    my_pb(l_a, l_b, opt);
  while (l_b->next != l_b)
    {
      while (check_max(l_b) == 1)
	my_rb(l_b, l_a, opt);
      my_pa(l_a, l_b, opt);
    }
}
