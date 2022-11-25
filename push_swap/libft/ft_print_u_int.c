/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u_int.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgalvez- <pgalvez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:33:41 by pgalvez-          #+#    #+#             */
/*   Updated: 2022/10/11 17:36:04 by pgalvez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_num_u_len(unsigned int n)
{
	int	len;

	len = 0;
	if (!n)
		return (1);
	while (n > 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

int	ft_print_u_int(unsigned int n)
{
	int	len;

	len = ft_num_u_len(n);
	if (n >= 10)
	{
		ft_print_u_int(n / 10);
		ft_print_u_int(n % 10);
	}
	else
		ft_putchar(n + '0');
	return (len);
}
