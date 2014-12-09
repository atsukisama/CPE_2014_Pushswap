/*
** my_put_nbr.c for put nbr in /home/kerebel/Documents/EPITECH/doublechaine
** 
** Made by kerebe_p
** Login   <kerebe_p@epitech.eu>
** 
** Started on  Fri Dec  5 02:51:37 2014 kerebe_p
** Last update Fri Dec  5 02:51:37 2014 kerebe_p
*/

void	my_put_nbr(int nb)
{
  int	aff;

  if (nb < 0)
    {
      my_putchar('-');
      nb = nb * -1;
    }
  if (nb > 9)
    my_put_nbr(nb / 10);
  aff = nb % 10 + '0';
  my_putchar(aff);
}
