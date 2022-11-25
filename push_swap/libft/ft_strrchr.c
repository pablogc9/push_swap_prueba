/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgalvez- <pgalvez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 18:08:29 by pgalvez-          #+#    #+#             */
/*   Updated: 2022/09/26 20:29:29 by pgalvez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char		*tmp;

	tmp = s;
	while (*tmp)
		tmp++;
	if ((unsigned char)c == '\0')
		return ((char *) tmp);
	while (--tmp >= s)
		if ((unsigned char)c == *tmp)
			return ((char *) tmp);
	return (NULL);
}
