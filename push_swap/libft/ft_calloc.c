/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgalvez- <pgalvez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 12:34:41 by pgalvez-          #+#    #+#             */
/*   Updated: 2022/09/23 13:05:10 by pgalvez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*addr;

	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	addr = malloc(count * size);
	if (!addr)
	{
		return (NULL);
	}
	ft_bzero(addr, size * count);
	return (addr);
}
