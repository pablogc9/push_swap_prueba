/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorted_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgalvez- <pgalvez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 17:08:05 by pgalvez-          #+#    #+#             */
/*   Updated: 2022/11/25 18:04:21 by pgalvez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*copy_sort_list(int *stack, int size)
{
	int	*copy;
	int	cont;

	copy = (int *)malloc(sizeof(int) * size);
	if (!copy)
		return (0);
	cont = 0;
	while (cont < size)
	{
		copy[cont] = stack[cont];
		cont++;
	}
	sort_list(copy, size);
	return (copy);
}

int	sorted_pos(int *sorted, int number, int size)
{
	int	i;

	i = 0;
	while (i < size && sorted[i] != number)
		i++;
	return (i);
}

int	*join_sort_lists(int *stack_a, int size_a, int *stack_b, int size_b)
{
	int *sorted;
	int	cont;

	sorted = (int *)malloc(sizeof(int) * (size_a + size_b));
	if (!sorted)
		return (0);
	cont = 0;
	while (cont < size_a)
	{
		sorted[cont] = stack_a[cont];
		cont++;
	}
	cont = 0;
	while (cont < size_b)
	{
		sorted[cont + size_a] = stack_b[cont];
		cont++;
	}
	sort_list(sorted, size_a + size_b);
	return (sorted);
}

void	sort_list(int *copy, int size)
{
	int	i;
	int	temp;

	i = 1;
	while (i < size)
	{
		if (copy[i] < copy[i - 1])
		{
			temp = copy[i];
			copy[i] = copy[i - 1];
			copy[i - 1] = temp;
			if (i > 1)
				i--;
		}
		else
			i++;
	}	
}
