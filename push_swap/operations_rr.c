/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_rr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgalvez- <pgalvez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 18:52:26 by pgalvez-          #+#    #+#             */
/*   Updated: 2022/11/08 18:34:26 by pgalvez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rr_function(int *stack, int size)
{
	int	cont;
	int	tmp;

	tmp = stack[size - 1];
	cont = size;
	while (cont > 0)
	{
		stack[cont] = stack[cont - 1];
		cont--;
	}
	stack[0] = tmp;
}

void	rra(int *stack_a, int size_a)
{
	rr_function(stack_a, size_a);
	ft_printf("rra\n");
}

void	rrb(int *stack_b, int size_b)
{
	rr_function(stack_b, size_b);
	ft_printf("rrb\n");
}

void	rrr(int *stack_a, int size_a, int *stack_b, int size_b)
{
	rr_function(stack_a, size_a);
	rr_function(stack_b, size_b);
	ft_printf("rrr\n");
}
