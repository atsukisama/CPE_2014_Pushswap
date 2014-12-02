/*
** tools.c for tools in /home/kerebel/Documents/EPITECH/CPE_2014_Pushswap
** 
** Made by kerebe_p
** Login   <kerebe_p@epitech.eu>
** 
** Started on  Tue Dec  2 01:23:57 2014 kerebe_p
** Last update Tue Dec  2 01:23:57 2014 kerebe_p
*/

void	my_intcpy(int *cpy, int *l_x, int l)
{
  int	i;

  i = 0;
  while (i <= l)
    {
      cpy[i] = l_x[i];
      i = i + 1;
    }
}

void	my_ptool(int *l_x, int l)
{
  int	i;
  int	s;

  i = l;
  s = 0;
  while (i > 0)
    {
      l_x[i] = l_x[i - 1];
      //l_x[i + 1] = s;
      //l_x[i] = s;
      i = i - 1;
    }
}
