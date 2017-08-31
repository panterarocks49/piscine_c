/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 15:51:38 by jbrown            #+#    #+#             */
/*   Updated: 2017/08/26 17:07:49 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H

typedef void	(*t_func)(int, int);

typedef struct	s_opp
{
	char	*opp;
	t_func	funct;
}				t_opp;

void			ft_putchar(char c);
void			ft_putstr(char *str);
void			ft_putnbr(int nb);
int				ft_atoi(char *str);
int				ft_strcmp(char *s1, char *s2);
void			ft_add(int a, int b);
void			ft_sub(int a, int b);
void			ft_mul(int a, int b);
void			ft_div(int a, int b);
void			ft_mod(int a, int b);
void			ft_usage(int a, int b);

#endif
