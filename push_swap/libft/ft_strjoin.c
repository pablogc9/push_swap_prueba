/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgalvez- <pgalvez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 16:36:55 by pgalvez-          #+#    #+#             */
/*   Updated: 2022/09/24 17:39:59 by pgalvez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, const char *s2)
{
	size_t		cont;
	char		*str;

	if (!s1 && !s2)
		return (0);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (0);
	cont = 0;
	while (cont < ft_strlen(s1))
	{
		str[cont] = s1[cont];
		cont++;
	}
	while (cont < ft_strlen(s1) + ft_strlen(s2))
	{
		str[cont] = s2[cont - ft_strlen(s1)];
		cont++;
	}
	str[cont] = '\0';
	return (str);
}
