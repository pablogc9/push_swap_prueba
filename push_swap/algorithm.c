/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgalvez- <pgalvez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 18:08:47 by pgalvez-          #+#    #+#             */
/*   Updated: 2022/11/25 17:24:25 by pgalvez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	first_step(int *stack_a, int *size_a, int *stack_b, int *size_b)
{
	int	cont;
	int	limit;
	int	*sorted;

	sorted = copy_sort_list(stack_a, *size_a);
	if (!sorted)
		return ;
	limit = *size_a;
	cont = 0;
	while (cont < limit / 2 && *size_a > 3)
	{
		if (stack_a[0] <= sorted[limit / 2])
		{
			pb(stack_a, size_a, stack_b, size_b);
			cont++;
		}
		else
			ra(stack_a, *size_a);
	}
	free(sorted);
	second_step(stack_a, size_a, stack_b, size_b);
}

void	second_step(int *stack_a, int *size_a, int *stack_b, int *size_b)
{
	while (*size_a > 3)
	{
		pb(stack_a, size_a, stack_b, size_b);
	}
	short_sort(stack_a);
	third_step(stack_a, size_a, stack_b, size_b);
}

void	short_sort(int *stack)
{
	if (stack[0] < stack[1] && stack[1] < stack[2])
		return ;
	if (stack[2] > stack[0] && stack[1] > stack[2])
		rra(stack, 3);
	if (stack[0] > stack[1] && stack[1] > stack[2])
		sa(stack, 3);
	if (stack[2] > stack[1] && stack[0] > stack[2])
		ra(stack, 3);
	if (stack[0] > stack[1] && stack[2] > stack[0])
		sa(stack, 3);
	if (stack[0] > stack[2] && stack[1] > stack[2])
		rra(stack, 3);
}

void	third_step(int *stack_a, int *size_a, int *stack_b, int *size_b)
{
	int	pos_to_push;
	int	*lists[2];

	lists[0] = stack_a;
	lists[1] = stack_b;
	while (*size_b > 0)
	{
		pos_to_push = min_cost_pos(lists, *size_a, *size_b);
		get_to_pos(lists, *size_a, *size_b, pos_to_push);
		pa(stack_a, size_a, stack_b, size_b);
	}
	last_step(stack_a, *size_a);
}

void	last_step(int *stack_a, int size_a)
{
	int	sorted_position;
	int	*sorted;

	sorted = copy_sort_list(stack_a, size_a);
	if (!sorted)
		return ;
	sorted_position = sorted_pos(sorted, stack_a[0], size_a);
	if (sorted_position < size_a - sorted_position)
		while (stack_a[0] > stack_a[size_a - 1])
			rra(stack_a, size_a);
	else
		while (sorted_position++ < size_a)
			ra(stack_a, size_a);
}
