/*
** main.c for main in /home/kerebel/Documents/EPITECH/doublechaine
** 
** Made by kerebe_p
** Login   <kerebe_p@epitech.eu>
** 
** Started on  Thu Dec  4 12:46:21 2014 kerebe_p
** Last update Thu Dec  4 12:46:21 2014 kerebe_p
*/

#include "list.h"
#include <stdlib.h>

void	my_put_op(char *op, int i, t_list *l_a, t_list *l_b)
{
  if (i == 0)
    my_putstr(op);
  if (i > 0)
    {
      my_putchar(' ');
      my_putstr(op);
    }
  if (i == -1)
    {
      my_putstr("\033[31m");
      my_putstr(op);
      my_putchar('\n');
      my_putstr("\033[33m");
      show_list(l_a, "l_a : ");
      my_putchar('\n');
      my_putstr("\033[32m");
      show_list(l_b, "l_b : ");
      my_putchar('\n');
      my_putstr("\033[00m");
    }
}

void	create_root(t_list *l_a, t_list *l_b)
{
  l_a->prev = l_a;
  l_a->next = l_a;
  l_b->prev = l_b;
  l_b->next = l_b;
}

int		main(int ac, char **av)
{
  t_list	*l_a;
  t_list	*l_b;
  int		i;

  l_a = malloc(sizeof(*l_a));
  l_b = malloc(sizeof(*l_b));
  if (l_a == NULL || l_b == NULL)
    return (-1);
  create_root(l_a, l_b);
  i = 1;
  while (av[i] != NULL)
    add_in_list_t(l_a, my_getnbr(av[i++]));
  i = 0;
  while (i < (ac / 2))
    {
      my_pb(l_a, l_b, i);
      i = i + 1;
    }
  while (is_op(l_a) == 1 || l_b->next != l_b)
    {
      while (is_op(l_a) == 1)
	{
	  if (l_a->next->nb > l_a->next->next->nb && l_a->next->next != l_a &&
	      l_b->next->nb < l_b->next->next->nb && l_b->next->next != l_b)
	    my_ss(l_a, l_b, 1);
	  if (l_a->prev->nb <= l_a->next->nb && l_a->next->next != l_a &&
	      l_b->prev->nb >= l_b->next->nb && l_b->next->next != l_b)
	    my_rr(l_a, l_b, 1);
	  if (l_a->prev->nb < l_a->next->nb && l_a->next->next->next != l_a)
	    my_ra(l_a, l_b, 1);
	  if (l_a->next->nb > l_a->next->next->nb && l_a->next->next != l_a)
	    my_sa(l_a, l_b, 1);
          if (l_a->prev->nb >= l_a->next->nb && l_a->prev->nb <= l_a->next->nb
	      && l_b->next != l_b->prev && l_a->next != l_a->prev)
	    my_rrr(l_a, l_b, 1);
	  if (l_a->prev->nb <= l_a->next->nb && l_a->next != l_a->prev)
	    my_rra(l_a, l_b, 1);
	  if (l_a->next->nb <= l_a->next->next->nb && is_op(l_a) == 1)
	    my_pb(l_a, l_b, 1);
	}
      while (l_b->next != l_b)
	{
	  if (l_a->next->nb > l_a->next->next->nb && l_a->next->next != l_a &&
	      l_b->next->nb < l_b->next->next->nb && l_b->next->next != l_b)
	    my_ss(l_a, l_b, 1);
	  if (l_a->prev->nb <= l_a->next->nb && l_a->next->next != l_a &&
	      l_b->prev->nb >= l_b->next->nb && l_b->next->next != l_b)
	    my_rr(l_a, l_b, 1);
	  if (l_b->prev->nb > l_b->next->nb && l_b->next->next->next != l_b)
	    my_rb(l_b, l_a, 1);
	  if (l_b->next->nb < l_b->next->next->nb && l_b->next->next != l_b)
	    my_sb(l_b, l_a, 1);
	  if (l_a->prev->nb >= l_a->next->nb && l_a->prev->nb <= l_a->next->nb
	      && l_b->next != l_b->prev && l_a->next != l_a->prev)
	    my_rrr(l_a, l_b, 1);
	  if (l_b->prev->nb >= l_b->next->nb && l_b->next != l_b->prev)
	    my_rrb(l_b, l_a, 1);
	  if (l_a->next->nb >= l_b->next->nb || l_b->next != l_b)
	    my_pa(l_a, l_b, 1);
	}
    }
  //my_sa(l_a, l_b, -1);
  //my_rra(l_a, l_b, -1);
  my_putchar('\n');
  /*
  show_list(l_a, "l_a : ");
  my_putchar('\n');
  show_list_r(l_a, "l_a R : ");
  my_putchar('\n');
  */
}
