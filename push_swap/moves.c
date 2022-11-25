/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgalvez- <pgalvez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 19:57:17 by pgalvez-          #+#    #+#             */
/*   Updated: 2022/11/25 17:44:50 by pgalvez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	moves_r(int **lists, int size_a, int size_b, int *moves)
{
	if (moves[0] >= moves[1])
	{
		while (moves[1]--)
		{
			rr(lists[0], size_a, lists[1], size_b);
			moves[0]--;
		}
		while (moves[0]--)
			ra(lists[0], size_a);
	}
	else
	{
		while (moves[0]--)
		{
			rr(lists[0], size_a, lists[1], size_b);
			moves[1]--;
		}
		while (moves[1]--)
			rb(lists[1], size_b);
	}
}

void	moves_rr(int **lists, int size_a, int size_b, int *moves)
{
	if (moves[0])
		moves[0] = size_a + moves[0];
	if (moves[1])
		moves[1] = size_b + moves[1];
	if (moves[0] >= moves[1])
	{
		while (moves[1]--)
		{
			rrr(lists[0], size_a, lists[1], size_b);
			moves[0]--;
		}
		while (moves[0]--)
			rra(lists[0], size_a);
	}
	else
	{
		while (moves[0]--)
		{
			rrr(lists[0], size_a, lists[1], size_b);
			moves[1]--;
		}
		while (moves[1]--)
			rrb(lists[1], size_b);
	}
}

void	mixed_moves(int **lists, int size_a, int size_b, int *moves)
{
	if (moves[0] >= 0)
		while (moves[0]--)
			ra(lists[0], size_a);
	else
	{
		moves[0] *= -1;
		while (moves[0]++ < size_a)
			rra(lists[0], size_a);
	}
	if (moves[1] >= 0)
		while (moves[1]--)
			rb(lists[1], size_b);
	else
	{
		moves[1] *= -1;
		while (moves[1]++ < size_b)
			rrb(lists[1], size_b);
	}
}
