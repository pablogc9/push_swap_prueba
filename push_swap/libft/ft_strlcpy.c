/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgalvez- <pgalvez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 18:26:16 by pgalvez-          #+#    #+#             */
/*   Updated: 2022/09/23 13:32:28 by pgalvez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	cont;

	cont = 0;
	if (dstsize > 0)
	{
		while (src[cont] && cont < dstsize - 1)
		{
			dest[cont] = src[cont];
			cont++;
		}
		dest[cont] = '\0';
	}
	while (src[cont])
		cont++;
	return (cont);
}
