/*
** algo_la.c for algo in /home/kerebel/Documents/EPITECH/doublechaine
** 
** Made by kerebe_p
** Login   <kerebe_p@epitech.eu>
** 
** Started on  Sat Dec  6 23:03:20 2014 kerebe_p
** Last update Sat Dec  6 23:03:20 2014 kerebe_p
*/

#include "list.h"
# define FIRST(l_x) (l_x->next->nb)
# define SECND(l_x) (l_x->next->next->nb)
# define LAST(l_x) (l_x->prev->nb)

void	algo_la(t_list *l_a, t_list *l_b, int i)
{
  while (is_op(l_a) == 1)
    {
      while (LAST(l_a) <= FIRST(l_a) && l_a->next != l_a->prev &&
	     LAST(l_b) >= FIRST(l_b) && l_b->next != l_b->prev)
	my_rrr(l_a, l_b, i);
      if (FIRST(l_a) > SECND(l_a) && l_a->next->next != l_a &&
	  FIRST(l_b) < SECND(l_b) && l_b->next->next != l_b)
	my_ss(l_a, l_b, i);
      while (LAST(l_a) <= FIRST(l_a) && l_a->next->next != l_a &&
	     LAST(l_b) >= FIRST(l_b) && l_b->next->next != l_b)
	my_rr(l_a, l_b, i);
      while (LAST(l_a) < FIRST(l_a) && l_a->next->next->next != l_a)
	my_ra(l_a, l_b, i);
      if (FIRST(l_a) > SECND(l_a) && l_a->next->next != l_a)
	my_sa(l_a, l_b, i);
      while (LAST(l_a) <= FIRST(l_a) && l_a->next != l_a->prev)
	my_rra(l_a, l_b, i);
      if (FIRST(l_a) <= SECND(l_a) && is_op(l_a) == 1)
	my_pb(l_a, l_b, i);
    }
}

void	algo_lb(t_list *l_a, t_list *l_b, int i)
{
  while (l_b->next != l_b)
    {
      while (LAST(l_a) <= FIRST(l_a) && l_a->next != l_a->prev &&
	     LAST(l_b) >= FIRST(l_b) && l_b->next != l_b->prev)
	my_rrr(l_a, l_b, i);
      if (FIRST(l_a) > SECND(l_a) && l_a->next->next != l_a &&
	  FIRST(l_b) < SECND(l_b) && l_b->next->next != l_b)
	my_ss(l_a, l_b, i);
      while (LAST(l_a) <= FIRST(l_a) && l_a->next->next != l_a &&
	     LAST(l_b) >= FIRST(l_b) && l_b->next->next != l_b)
	my_rr(l_a, l_b, i);
      while (LAST(l_b) > FIRST(l_b) && l_b->next->next->next != l_b)
	my_rb(l_b, l_a, i);
      if (FIRST(l_b) < SECND(l_b) && l_b->next->next != l_b)
	my_sb(l_b, l_a, i);
      while (LAST(l_b) >= FIRST(l_b) && l_b->next != l_b->prev)
	my_rrb(l_b, l_a, i);
      if (FIRST(l_a) >= FIRST(l_b) || l_b->next != l_b)
	my_pa(l_a, l_b, i);
    }
}

void	algo_long(t_list *l_a, t_list *l_b, int ac, int opt)
{
  int	i;

  i = 1;
  while (i < (ac / 3))
    {
      my_pb(l_a, l_b, opt);
      i = i + 1;
    }
  while (is_op(l_a) == 1 || l_b->next != l_b)
    {
      algo_la(l_a, l_b, opt);
      algo_lb(l_a, l_b, opt);
    }
}
