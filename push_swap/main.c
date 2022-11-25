/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgalvez- <pgalvez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 18:57:20 by pgalvez-          #+#    #+#             */
/*   Updated: 2022/11/25 16:55:25 by pgalvez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int	*stack_a;
	int	*stack_b;
	int	size_a;
	int	size_b;

	if (argc == 1)
		return (0);
	size_a = argc - 1;
	stack_a = get_stack_a(&size_a, argv);
	if (!stack_a)
		return (1);
	stack_b = ft_calloc(argc - 1, sizeof(int));
	if (!stack_b)
	{
		free(stack_a);
		return (1);
	}
	size_b = 0;
	first_step(stack_a, &size_a, stack_b, &size_b);
	free(stack_a);
	free(stack_b);
}
