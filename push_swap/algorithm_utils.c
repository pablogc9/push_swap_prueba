/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgalvez- <pgalvez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 17:09:26 by pgalvez-          #+#    #+#             */
/*   Updated: 2022/11/25 18:33:58 by pgalvez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	number_of_moves(int cont_a, int size_a, int cont_b, int size_b)
{
	int	total;

	if (cont_a <= size_a / 2 && cont_b <= size_b / 2)
	{
		if (cont_a >= cont_b)
			total = cont_a;
		else
			total = cont_b;
	}
	else if (cont_a > size_a / 2 && cont_b > size_b / 2)
	{
		if (cont_a <= cont_b)
			total = size_a - cont_a;
		else
			total = size_b - cont_b;
	}
	else
	{
		if (cont_a > size_a / 2)
			cont_a = size_a - cont_a;
		if (cont_b > size_b / 2)
			cont_b = size_b - cont_b;
		total = cont_a + cont_b;
	}
	return (total);
}

int	min_cost_pos(int **lists, int size_a, int size_b)
{
	int	min;
	int	pos_min;
	int	cont_a;
	int	cont_b;
	int	*sorted;

	min = 2147483647;
	cont_b = 0;
	sorted = join_sort_lists(lists[0], size_a, lists[1], size_b);
	while (cont_b < size_b)
	{
		cont_a = 0;
		if (sorted_pos(sorted, lists[1][cont_b], size_a + size_b) > sorted_pos(sorted, lists[0][0], size_a + size_b)
				|| sorted_pos(sorted, lists[1][cont_b], size_a + size_b) < sorted_pos(sorted, lists[0][size_a - 1], size_a + size_b))
			cont_a++;
		if (cont_a)
			while (cont_a < size_a && (sorted_pos(sorted, lists[1][cont_b], size_a + size_b) > sorted_pos(sorted, lists[0][cont_a], size_a + size_b)
				|| sorted_pos(sorted, lists[1][cont_b], size_a + size_b) < sorted_pos(sorted, lists[0][cont_a - 1], size_a + size_b)))
				cont_a++;
		if (min > number_of_moves(cont_a, size_a , cont_b, size_b))
		{
			min = number_of_moves(cont_a, size_a , cont_b, size_b);
			pos_min = cont_b;
		}
		cont_b++;
	}
	return (pos_min);
}

int	moves_stack_a(int *sorted, int *stack, int size, int number)
{
	int	cont;

	cont = 0;
	if (sorted_pos(sorted, number, size_a + size_b) > sorted_pos(sorted, lists[0][0], size_a + size_b)
				|| sorted_pos(sorted, lists[1][cont_b], size_a + size_b) < sorted_pos(sorted, lists[0][size_a - 1], size_a + size_b))
		cont++;
	if (cont)
		while (cont < size && !((number > stack[cont - 1]
					&& number < stack[cont])
				|| (number > stack[cont - 1] && number > stack[cont]
					&& stack[cont - 1] > stack[cont])
				|| (number < stack[cont - 1] && number < stack[cont]
					&& stack[cont - 1] > stack[cont])))
			cont++;
	if (cont > size / 2)
		cont = -cont;
	return (cont);
}

void	get_to_pos(int **lists, int size_a, int size_b, int pos)
{
	int	moves[2];
	int	*sorted;

	sorted = join_sort_lists(lists[0], size_a, lists[1], size_b);
	moves[1] = pos;
	if (pos > size_b / 2)
		moves[1] = -pos;
	moves[0] = moves_stack_a(sorted, lists[0], size_a, lists[1][pos]);
	if (moves[0] >= 0 && moves[1] >= 0)
		moves_r(lists, size_a, size_b, moves);
	else if (moves[0] <= 0 && moves[1] <= 0)
		moves_rr(lists, size_a, size_b, moves);
	else
		mixed_moves(lists, size_a, size_b, moves);
}
