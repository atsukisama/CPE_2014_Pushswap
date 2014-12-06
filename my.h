/*
** my.h for lib in /home/kerebel/Documents/EPITECH/doublechaine
** 
** Made by kerebe_p
** Login   <kerebe_p@epitech.eu>
** 
** Started on  Thu Dec  4 15:10:23 2014 kerebe_p
** Last update Thu Dec  4 15:10:23 2014 kerebe_p
*/

#ifndef MY_H_
# define MY_H_

void	add_in_list_t(t_list *l_x, int nb);
void	add_in_list_h(t_list *l_x, int nb);
void	my_put_op(char *op, int i);
void	create_root(t_list *l_a, t_list *l_b);
void	my_delete(t_list *l_x);
int     my_getnbr_nop(char *str);
int     my_getnbr(char *str);
void	my_putchar(char c);
void	my_put_nbr(int nb);
int	my_putstr(char *str);
void	show_list(t_list *l_x, char *def);
void	show_list_r(t_list *l_x, char *def);
int	is_op(t_list *l_a);
void	my_pb(t_list *l_a, t_list *l_b, int i);
void	my_pa(t_list *l_a, t_list *l_b, int i);
void	my_ra(t_list *l_a, int i);
void	my_rb(t_list *l_b, int i);
void	my_rr(t_list *l_a, t_list *l_b, int i);
void	my_sa(t_list *l_a, int i);
void	my_sb(t_list *l_b, int i);
void	my_ss(t_list *l_a, t_list *l_b, int i);

#endif
