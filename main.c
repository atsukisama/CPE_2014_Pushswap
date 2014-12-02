/*
** main.c for main in /home/kerebel/Documents/EPITECH/CPE_2014_Pushswap
** 
** Made by kerebe_p
** Login   <kerebe_p@epitech.eu>
** 
** Started on  Tue Dec  2 00:52:41 2014 kerebe_p
** Last update Tue Dec  2 00:52:41 2014 kerebe_p
*/

#include <stdlib.h>
#include <stdio.h>

int	main(int ac, char **av)
{
  int	*l_a;
  int	*l_b;
  int	l[2];
  int	i;

  i = 0;
  l_a = malloc(sizeof(int*) * ac);
  l_b = malloc(sizeof(int*) * ac);
  if (l_a == NULL || l_b == NULL)
    return (-1);
  l[0] = ac - 2;
  l[1] = -1;
  while (av[i + 1] != NULL)
    {
      l_a[i] = my_getnbr(av[i + 1]);
      i = i + 1;
    }
  i = 0;
  /*
  while (is_op(l_a, l_b, l) == 1 || l[1] > -1)
    {
      //if (l_a[0] > l_a[l[0]] && l[0] > 0)
      //my_ra(l_a, l);
      if (l_a[0] > l_a[1])
	my_sa(l_a);
      else if (l_a[0] <= l_a[1] && is_op(l_a, l_b, l) == 1)
	my_pb(l_a, l_b, l, l[1]);
      else if (l[1] > -1 && is_op(l_a, l_b, l) == 0)
	my_pa(l_a, l_b, l, l[0]);
      i = i + 1;
    }
  */
  my_pb(l_a, l_b, l);
  my_pb(l_a, l_b, l);
  my_pb(l_a, l_b, l);
  i = 0;
  printf("\nl_a = ");
  while (i <= l[0])
    printf("%d ", l_a[i++]);
  i = 0;
  printf("\nl_b = ");
  while (i <= l[1])
    printf("%d ", l_b[i++]);
  printf("\n");
}
