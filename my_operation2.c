/*
** my_operation2.c for operation2 in /home/kerebel/Documents/EPITECH/CPE_2014_Pushswap
** 
** Made by kerebe_p
** Login   <kerebe_p@epitech.eu>
** 
** Started on  Tue Dec  2 06:19:44 2014 kerebe_p
** Last update Tue Dec  2 06:19:44 2014 kerebe_p
*/

void	my_ra(int *l_a, int *l)
{
  int	tmp;
  int	save[l[0] + 1];

  tmp = l_a[0];
  l_a[0] = l_a[l[0]];
  l_a[l[0]] = tmp;
  write(1, "ra ", 3);
}
