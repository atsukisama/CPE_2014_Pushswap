/*
** my_operation.c for openration in /home/kerebel/Documents/EPITECH/CPE_2014_Pushswap
** 
** Made by kerebe_p
** Login   <kerebe_p@epitech.eu>
** 
** Started on  Sun Nov 30 22:53:13 2014 kerebe_p
** Last update Sun Nov 30 22:53:13 2014 kerebe_p
*/

#include <stdlib.h>

void	my_sa(int *l_a)
{
  int	tmp;

  tmp = l_a[0];
  l_a[0] = l_a[1];
  l_a[1] = tmp;
  write(1, "sa ", 3);
}

void	my_sb(int *l_b)
{
  int	tmp;

  tmp = l_b[0];
  l_b[0] = l_b[1];
  l_b[1] = tmp;
  write(1, "sb ", 3);
}


int	my_pb(int *l_a, int *l_b)
{
  int	i;

  i = 0;
  l[0] = l[0] - 1;
  l[1] = l[1] + 1;
  my_ptool(l_b, l[1]);
  l_b[0] = l_a[0];
  while (i <= l[0])
    {
      l_a[i] = l_a[i + 1];
      i = i + 1;
    }
  write(1, "pb ", 3);
}

int	my_pa(int *l_a, int *l_b)
{
  int	*cpy;
  int	i;

  i = 0;
  cpy = malloc(sizeof(int*) * (l[0] + 2));
  if (cpy == NULL)
    return (-1);
  my_intcpy(cpy, l_a, l[0]);
  l[0] = l[0] + 1;
  l[1] = l[1] - 1;
  l_a[0] = l_b[0];
  while (i <= l[1])
    {
      l_b[i] = l_b[i + 1];
      i = i + 1;
    }
  i = 1;
  while (i <= l[0])
    {
      l_a[i] = cpy[i - 1];
      i = i + 1;
    }
  free(cpy);
  write(1, "pa ", 3);
}
