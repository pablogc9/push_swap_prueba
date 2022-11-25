/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgalvez- <pgalvez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:07:21 by pgalvez-          #+#    #+#             */
/*   Updated: 2022/09/21 18:40:47 by pgalvez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				cont;
	const unsigned char	*str1;
	const unsigned char	*str2;

	if (s1 == NULL && s2 == NULL)
		return (0);
	cont = 0;
	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	while (cont < n)
	{
		if (str1[cont] != str2[cont])
			return (str1[cont] - str2[cont]);
		cont++;
	}
	return (0);
}
