/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/26 14:25:35 by jbrown            #+#    #+#             */
/*   Updated: 2017/08/27 21:29:30 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"

void	update_str(int sum, char **str)
{
	itoa_write(sum, str);
	while (**str && **str != ')')
	{
		**str = ' ';
		++*str;
	}
	if (**str)
		**str = ' ';
}

int		parse_factors(char **start)
{
	int		num1;
	int		num2;
	char	opp;

	num1 = ft_atoi(start);
	while (**start && **start != ')')
	{
		while (**start == ' ')
			++*start;
		opp = **start;
		if (opp != '/' && opp != '*' && opp != '%')
			return (num1);
		++*start;
		num2 = ft_atoi(start);
		if (opp == '/')
			num1 /= num2;
		else if (opp == '%')
			num1 %= num2;
		else
			num1 *= num2;
	}
	return (num1);
}

int		parse_summands(char *start)
{
	int		num1;
	int		num2;
	char	opp;

	num1 = parse_factors(&start);
	while (*start && *start != ')')
	{
		opp = *start;
		if (opp != '-' && opp != '+')
			return (num1);
		++start;
		num2 = parse_factors(&start);
		if (opp == '-')
			num1 -= num2;
		else
			num1 += num2;
	}
	return (num1);
}

int		find_expr(char **str)
{
	char	*start;
	char	*paren;
	int		sum;

	paren = *str;
	if (*paren == '(')
		++*str;
	start = *str;
	while (**str && **str != ')')
	{
		if (**str == '(')
			find_expr(str);
		++*str;
	}
	sum = parse_summands(start);
	update_str(sum, &paren);
	return (sum);
}

int		eval_expr(char *str)
{
	int		sum1;
	char	*start;

	start = str;
	while (*str)
	{
		str = start;
		sum1 = find_expr(&str);
	}
	return (sum1);
}
