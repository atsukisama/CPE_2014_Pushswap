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
#include "my.h"
#include <stdlib.h>

void	my_put_op(char *op, int i, t_list *l_a, t_list *l_b)
{
  void	(*aff[3])(t_list*, t_list*, char*);

  aff[0] = &display_null;
  aff[1] = &display_v;
  aff[2] = &display_vt;
  aff[i](l_a, l_b, op);
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
  int		opt;

  if (check_all_nb(av) == -1 || ac == 1)
    return (0);
  opt = check_opt(av);
  l_a = malloc(sizeof(*l_a));
  l_b = malloc(sizeof(*l_b));
  if (l_a == NULL || l_b == NULL)
    return (-1);
  create_root(l_a, l_b);
  i = 1;
  while (av[i] != NULL)
    {
      if (check_nb(av[i]) != -1)
	add_in_list_t(l_a, my_getnbr(av[i]));
      i = i + 1;
    }
  algo_long(l_a, l_b, count_list(l_a), opt);
  if (opt == 0)
    my_putchar('\n');
  my_delete_all(l_a);
  my_delete_all(l_b);
}
