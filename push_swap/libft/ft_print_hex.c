/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgalvez- <pgalvez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:03:06 by pgalvez-          #+#    #+#             */
/*   Updated: 2022/10/11 17:36:04 by pgalvez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_hex_len(int n)
{
	int	len;

	len = 0;
	if (!n)
		return (1);
	if (n < 0)
		return (8);
	while (n != 0)
	{
		len++;
		n /= 16;
	}
	return (len);
}

void	ft_put_hex(unsigned int num, const char format)
{
	if (num >= 16)
	{
		ft_put_hex(num / 16, format);
		ft_put_hex(num % 16, format);
	}
	else
	{
		if (num <= 9)
			ft_putchar((num + '0'));
		else
		{
			if (format == 'x')
				ft_putchar((num - 10 + 'a'));
			if (format == 'X')
				ft_putchar((num - 10 + 'A'));
		}
	}
}

// void	ft_put_low_hex(int n)
// {
// 	char	*base;

// 	base = "0123456789abcdef";
// 	if (n >= 16)
// 	{
// 		ft_print_low_hex(n / 16);
// 		ft_print_low_hex(n % 16);
// 	}
// 	else
// 	{
// 		ft_putchar(base[n]);
// 	}
// }

// void	ft_put_upp_hex(int n)
// {
// 	char	*base;

// 	base = "0123456789ABCDEF";
// 	if (n >= 16)
// 	{
// 		ft_print_upp_hex(n / 16);
// 		ft_print_upp_hex(n % 16);
// 	}
// 	else
// 	{
// 		ft_putchar(base[n]);
// 	}
// }

int	ft_print_low_hex(int n)
{
	ft_put_hex(n, 'x');
	return (ft_hex_len(n));
}

int	ft_print_upp_hex(int n)
{
	ft_put_hex(n, 'X');
	return (ft_hex_len(n));
}
