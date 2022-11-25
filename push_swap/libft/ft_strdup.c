/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgalvez- <pgalvez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 13:09:24 by pgalvez-          #+#    #+#             */
/*   Updated: 2022/09/23 13:22:23 by pgalvez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		cont;
	char	*copy;

	cont = 0;
	copy = (char *)malloc(ft_strlen(s1) * sizeof(char) + 1);
	if (!copy)
		return (0);
	while (s1[cont])
	{
		copy[cont] = ((char *)s1)[cont];
		cont++;
	}
	copy[cont] = '\0';
	return (copy);
}
