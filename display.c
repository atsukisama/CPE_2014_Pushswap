/*
** display.c for display in /home/kerebel/Documents/EPITECH/doublechaine
** 
** Made by kerebe_p
** Login   <kerebe_p@epitech.eu>
** 
** Started on  Tue Dec  9 12:29:25 2014 kerebe_p
** Last update Tue Dec  9 12:29:25 2014 kerebe_p
*/

#include "include/my.h"

void		display_null_start(t_list *l_a, t_list *l_b, char *op)
{
  my_putstr(op);
}

void		display_null(t_list *l_a, t_list *l_b, char *op)
{
  my_putchar(' ');
  my_putstr(op);
}

void		display_v(t_list *l_a, t_list *l_b, char *op)
{
  my_putstr(op);
  my_putchar('\n');
  show_list(l_a, "l_a : ");
  my_putchar('\n');
  show_list(l_b, "l_b : ");
  my_putchar('\n');
}

void		display_vt(t_list *l_a, t_list *l_b, char *op)
{
  my_putstr("\033[31m");
  my_putstr(op);
  my_putchar('\n');
  my_putstr("\033[32m");
  show_list(l_a, "l_a : ");
  my_putchar('\n');
  my_putstr("\033[33m");
  show_list(l_b, "l_b : ");
  my_putchar('\n');
  my_putstr("\033[00m");
}
