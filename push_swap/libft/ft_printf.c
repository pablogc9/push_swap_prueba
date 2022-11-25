/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgalvez- <pgalvez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 16:55:11 by pgalvez-          #+#    #+#             */
/*   Updated: 2022/10/11 17:36:03 by pgalvez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_format(va_list marker, char format)
{
	int	len;

	len = 0;
	if (format == 'c')
		len += ft_putchar(va_arg(marker, int));
	else if (format == 's')
		len += ft_putstr(va_arg(marker, char *));
	else if (format == 'p')
		len += ft_print_ptr((unsigned long long)va_arg(marker, void *));
	else if (format == 'd')
		len += ft_putnbr(va_arg(marker, int));
	else if (format == 'i')
		len += ft_putnbr(va_arg(marker, int));
	else if (format == 'u')
		len += ft_print_u_int(va_arg(marker, unsigned int));
	else if (format == 'x')
		len += ft_print_low_hex(va_arg(marker, int));
	else if (format == 'X')
		len += ft_print_upp_hex(va_arg(marker, int));
	else if (format == '%')
		len += ft_putchar('%');
	return (len);
}

int	ft_printf(const char *s, ...)
{
	va_list	marker;
	int		cont;
	int		len;

	va_start(marker, s);
	cont = 0;
	len = 0;
	while (s[cont])
	{
		if (s[cont] == '%' && s[cont + 1])
		{
				len += ft_format(marker, s[cont + 1]);
				cont++;
		}
		else
			len += ft_putchar(s[cont]);
		cont++;
	}
	va_end(marker);
	return (len);
}
