/*
** my_getnbr.c for getnbr in /home/kerebe_p/git/Piscine_C_J11/do-op
** 
** Made by Paul Kerebel
** Login   <kerebe_p@epitech.net>
** 
** Started on  Mon Oct 20 13:48:13 2014 Paul Kerebel
** Last update Mon Oct 20 14:40:53 2014 Paul Kerebel
*/

int     my_getnbr_nop(char *str)
{
  int   i;
  int   nb;
  int   ch;

  i = 0;
  nb = 0;
  while ((str[i] >= '0') && (str[i] <= '9'))
    {
      nb = nb * 10;
      ch = str[i] - 48;
      nb = nb + ch;
      i++;
    }
  return (nb);
}

int     my_getnbr(char *str)
{
  int   i;
  int   c;
  int	nb;

  i = 0;
  c = 0;
  while ((str[i] == '-') || (str[i] == '+'))
    {
      if (str[i] == '-')
        {
          c = c + 1;
        }
      i = i + 1;
    }
  c = c % 2;
  if (c == 0)
    nb = my_getnbr_nop(&str[i]);
  else
    nb = my_getnbr_nop(&str[i]) * (-1);
}
