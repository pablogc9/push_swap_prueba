/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_stacks.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgalvez- <pgalvez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 17:42:49 by pgalvez-          #+#    #+#             */
/*   Updated: 2022/11/25 12:15:42 by pgalvez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*get_stack_a(int *size, char **items)
{
	int		*stack_a;
	int		cont;

	if (*size == 1 && num_args(items[1]) > 1)
		return (one_argument(size, items));
	if (!check_errors(*size, items))
		return (0);
	stack_a = (int *)malloc(sizeof(int) * (*size));
	if (!stack_a)
		return (0);
	cont = 0;
	while (cont < *size)
	{
		stack_a[cont] = ft_atoi(items[cont + 1]);
		cont++;
	}
	if (!check_no_rep(*size, stack_a))
		return (0);
	return (stack_a);
}

int	*one_argument(int *size, char **items)
{
	int		*stack_a;
	char	**args;
	int		cont;

	args = ft_split(ft_strjoin(ft_strjoin(items[0], " "), items[1]), ' ');
	*size = num_args(items[1]);
	cont = 0;
	if (!check_errors(*size, args) && !valid_string(items[1]))
		return (0);
	stack_a = (int *)malloc(sizeof(int) * (*size));
	if (!stack_a)
		return (0);
	cont = 0;
	while (cont < *size)
	{
		stack_a[cont] = ft_atoi(args[cont + 1]);
		cont++;
	}
	free(args);
	if (!check_no_rep(*size, stack_a))
		return (0);
	return (stack_a);
}

int	num_args(char *str)
{
	int	cont;
	int	words;

	cont = 0;
	words = 0;
	while (str[cont])
	{
		while (str[cont] && (str[cont] == ' '
				|| (str[cont] >= 9 && str[cont] <= 13)))
			cont++;
		if (str[cont])
		{
			words++;
			while (str[cont]
				&& (str[cont] != ' ' && (str[cont] < 9 || str[cont] > 13)))
				cont++;
		}
	}
	return (words);
}
