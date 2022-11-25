/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_r.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgalvez- <pgalvez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:36:24 by pgalvez-          #+#    #+#             */
/*   Updated: 2022/11/19 18:00:08 by pgalvez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	r_function(int *stack, int size)
{
	int	cont;
	int	tmp;

	tmp = stack[0];
	cont = 0;
	while (cont < size - 1)
	{
		stack[cont] = stack[cont + 1];
		cont++;
	}
	stack[cont] = tmp;
}

void	ra(int *stack_a, int size_a)
{
	r_function(stack_a, size_a);
	ft_printf("ra\n");
}

void	rb(int *stack_b, int size_b)
{
	r_function(stack_b, size_b);
	ft_printf("rb\n");
}

void	rr(int *stack_a, int size_a, int *stack_b, int size_b)
{
	r_function(stack_a, size_a);
	r_function(stack_b, size_b);
	ft_printf("rr\n");
}
