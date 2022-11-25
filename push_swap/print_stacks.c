/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stacks.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgalvez- <pgalvez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 19:42:22 by pgalvez-          #+#    #+#             */
/*   Updated: 2022/11/22 11:28:04 by pgalvez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stacks(int *stack_a, int size_a, int *stack_b, int size_b)
{
	int	cont;

	cont = 0;
	ft_printf("A: ");
	while (cont < size_a)
	{
		ft_printf("%d ", stack_a[cont]);
		cont++;
	}
	ft_printf("\nB: ");
	cont = 0;
	while (cont < size_b)
	{
		ft_printf("%d ", stack_b[cont]);
		cont++;
	}
	ft_printf("\n");
}

void	print_error(void)
{
	ft_putstr_fd("Error\n", 2);
}
