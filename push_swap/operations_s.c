/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_s.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgalvez- <pgalvez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:23:24 by pgalvez-          #+#    #+#             */
/*   Updated: 2022/11/08 18:20:58 by pgalvez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	s_function(int *stack, int size)
{
	int	tmp;

	if (size < 2)
		return ;
	tmp = stack[1];
	stack[1] = stack[0];
	stack[0] = tmp;
}

void	sa(int *stack_a, int size_a)
{
	s_function(stack_a, size_a);
	ft_printf("sa\n");
}

void	sb(int *stack_a, int size_b)
{
	s_function(stack_a, size_b);
	ft_printf("sb\n");
}

void	ss(int *stack_a, int size_a, int *stack_b, int size_b)
{
	s_function(stack_a, size_a);
	s_function(stack_b, size_b);
	ft_printf("ss\n");
}
