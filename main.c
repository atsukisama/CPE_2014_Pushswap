/*
** main.c for main in /home/kerebel/Documents/EPITECH/doublechaine
** 
** Made by kerebe_p
** Login   <kerebe_p@epitech.eu>
** 
** Started on  Thu Dec  4 12:46:21 2014 kerebe_p
** Last update Thu Dec  4 12:46:21 2014 kerebe_p
*/

#include "include/my.h"

void	my_put_op(char *op, int i, t_list *l_a, t_list *l_b)
{
  void	(*aff[3])(t_list*, t_list*, char*);

  aff[0] = &display_null;
  aff[1] = &display_v;
  aff[2] = &display_vt;
  if (i >= 0)
    aff[i](l_a, l_b, op);
}

void	create_root(t_list *l_a, t_list *l_b)
{
  l_a->prev = l_a;
  l_a->next = l_a;
  l_b->prev = l_b;
  l_b->next = l_b;
}

void	put_all(t_list *l_x, char **av)
{
  int	i;
  int	c;

  i = 1;
  while (av[i] != NULL)
    {
      if (check_nb(av[i]) != -1)
	c = add_in_list_t(l_x, my_getnbr(av[i]));
      if (c == -1)
	{
	  my_delete_all(l_x);
	  my_putstr("Failed to malloc elements in list!\n");
	  exit (-1);
	}
      i = i + 1;
    }
}

int		main(int ac, char **av)
{
  t_list	*l_a;
  t_list	*l_b;
  int		opt;
  int		z;

  check_all_nb(av);
  opt = check_opt(av);
  l_a = malloc(sizeof(*l_a));
  l_b = malloc(sizeof(*l_b));
  if (l_a == NULL || l_b == NULL)
    {
      my_putstr("Malloc on list failed!\n");
      return (-1);
    }
  create_root(l_a, l_b);
  put_all(l_a, av);
  if ((z = is_op(l_a)) == 0)
    my_putstr("Nothing to sort!\n");
  algo_long(l_a, l_b, count_list(l_a), opt);
  if (opt == 0 && z == 1)
    my_putchar('\n');
  my_delete_all(l_a);
  my_delete_all(l_b);
  return (0);
}
