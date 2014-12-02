/*
** is_op.c for op in /home/kerebel/Documents/EPITECH/CPE_2014_Pushswap
** 
** Made by kerebe_p
** Login   <kerebe_p@epitech.eu>
** 
** Started on  Tue Dec  2 05:23:50 2014 kerebe_p
** Last update Tue Dec  2 05:23:50 2014 kerebe_p
*/

int	is_op(int *l_a, int *l_b, int *l)
{
  int	i;

  i = 0;
  while (i < l[0])
    {
      if (l_a[i] > l_a[i + 1])
	return (1);
      i = i + 1;
    }
  return (0);
}
