/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_p.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgalvez- <pgalvez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 19:15:23 by pgalvez-          #+#    #+#             */
/*   Updated: 2022/11/20 12:27:33 by pgalvez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(int *stack_a, int *size_a, int *stack_b, int *size_b)
{
	int	cont;

	if (*size_b)
	{
		cont = *size_a;
		*size_a = *size_a + 1;
		while (cont > 0)
		{
			stack_a[cont] = stack_a[cont - 1];
			cont--;
		}
		stack_a[0] = stack_b[0];
		cont = 0;
		while (cont < *size_b)
		{
			stack_b[cont] = stack_b[cont + 1];
			cont++;
		}
		*size_b = *size_b - 1;
	}
	ft_printf("pa\n");
}

void	pb(int *stack_a, int *size_a, int *stack_b, int *size_b)
{
	int	cont;

	if (*size_a)
	{
		cont = *size_b;
		*size_b = *size_b + 1;
		while (cont > 0)
		{
			stack_b[cont] = stack_b[cont - 1];
			cont--;
		}
		stack_b[0] = stack_a[0];
		cont = 0;
		while (cont < *size_a)
		{
			stack_a[cont] = stack_a[cont + 1];
			cont++;
		}
		*size_a = *size_a - 1;
	}
	ft_printf("pb\n");
}
