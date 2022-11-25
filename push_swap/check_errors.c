/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgalvez- <pgalvez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:42:54 by pgalvez-          #+#    #+#             */
/*   Updated: 2022/11/25 12:22:04 by pgalvez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_errors(int argc, char **argv)
{
	if (check_int_args(argc, argv))
		if (check_valid_int(argc, argv))
			return (1);
	print_error();
	return (0);
}

int	check_int_args(int argc, char **argv)
{
	int		i;
	size_t	j;

	i = 1;
	while (i <= argc)
	{
		j = 0;
		if (argv[i][j] == '-' && (argv[i][j + 1] < '0' || argv[i][j + 1] > '9'))
			return (0);
		else if (argv[i][j] == '-')
			j++;
		while (j < ft_strlen(argv[i]))
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	valid_string(char *str)
{
	size_t	cont;

	cont = 0;
	while (cont < ft_strlen(str))
	{
		while (str[cont] == ' ' || (str[cont] >= 9 && str[cont] <= 13))
			cont++;
		if (str[cont] == '-' && (str[cont + 1] < '0' || str[cont + 1] > '9'))
			return (0);
		else if (str[cont] == '-')
			cont++;
		else
		{
			while (str[cont] != ' ')
			{
				if (str[cont] < '0' || str[cont] > '9')
					return (0);
				else
					cont++;
			}
		}
	}
	return (1);
}

int	check_valid_int(int argc, char **argv)
{
	int	cont;

	cont = 1;
	while (cont < argc + 1)
	{
		if (ft_strlen(argv[cont]) > 11 || (ft_strlen(argv[cont]) == 10
				&& ft_strncmp(argv[cont], "2147483647", 10) > 0)
			|| (ft_strlen(argv[cont]) == 11
				&& ft_strncmp(argv[cont], "-2147483648", 11) > 0))
		{
			return (0);
		}
		cont++;
	}
	return (1);
}

int	check_no_rep(int size, int *stack)
{
	int	i;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (stack[i] == stack[j])
			{
				print_error();
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}
