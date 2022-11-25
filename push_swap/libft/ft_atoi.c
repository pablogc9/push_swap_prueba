/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgalvez- <pgalvez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 19:52:10 by pgalvez-          #+#    #+#             */
/*   Updated: 2022/09/23 10:31:45 by pgalvez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	cont;
	int	sign;
	int	res;

	cont = 0;
	sign = 1;
	res = 0;
	while ((str[cont] >= 9 && str[cont] <= 13) || str[cont] == ' ')
		cont++;
	if (str[cont] == '+' || str[cont] == '-')
	{
		if (str[cont] == '-')
			sign = -1;
		cont++;
	}
	while (str[cont] >= '0' && str[cont] <= '9')
	{
		res = (res * 10) + (str[cont] - '0');
		cont++;
	}
	return (res * sign);
}
