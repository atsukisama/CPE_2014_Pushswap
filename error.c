/*
** error.c for error in /home/kerebel/103
** 
** Made by kerebe_p
** Login   <kerebe_p@epitech.eu>
** 
** Started on  Tue Dec  2 14:24:07 2014 kerebe_p
** Last update Tue Dec  2 14:24:07 2014 kerebe_p
*/

#include <stdlib.h>

int	check_nb(char *t)
{
  int	c;

  c = 0;
  while (t[c] == '+' || t[c] == '-')
    {
      if (t[c + 1] == '\0')
	return (-1);
      c = c + 1;
    }
  while (t[c] != '\0')
    {
      if (t[c] > '9' || t[c] < '0')
	return (-1);
      c = c + 1;
    }
  return (0);
}

void	check_all_nb(char **av)
{
  int	i;

  i = 1;
  while (av[i] != NULL)
    {
      if (check_nb(av[i]) == -1 && my_strcmp(av[i], "-v") != 0
	  && my_strcmp(av[i], "-vt") != 0)
	{
	  my_putstr("Wrong argument detected!\n");
	  exit(-1);
	}
      i = i + 1;
    }
}

int	check_opt(char **av)
{
  int	i;

  i = 0;
  while (av[i] != NULL)
    {
      if (my_strcmp(av[i], "-v") == 0)
	return (1);
      if (my_strcmp(av[i], "-vt") == 0)
	return (2);
      i = i + 1;
    }
  return (0);
}
