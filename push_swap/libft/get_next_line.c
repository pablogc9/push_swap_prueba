/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgalvez- <pgalvez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 11:42:13 by pgalvez-          #+#    #+#             */
/*   Updated: 2022/11/25 12:58:30 by pgalvez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_read_to_remainder(int fd, char *remainder, int buffer_size)
{
	char	*buff;
	int		n;

	buff = malloc((buffer_size + 1) * sizeof(char));
	if (!buff)
		return (NULL);
	n = 1;
	while (!ft_strchr_gnl(remainder, '\n') && n != 0)
	{
		n = read(fd, buff, buffer_size);
		if (n == -1)
		{
			free(buff);
			return (NULL);
		}
		buff[n] = '\0';
		remainder = ft_strjoin_gnl(remainder, buff);
	}
	free(buff);
	return (remainder);
}

char	*get_next_line(int fd, int buffer_size)
{
	char		*line;
	static char	*remainder;

	if (fd < 0 || buffer_size <= 0)
		return (0);
	remainder = ft_read_to_remainder(fd, remainder, buffer_size);
	if (!remainder)
		return (NULL);
	line = ft_get_line(remainder);
	remainder = ft_new_remainder(remainder);
	return (line);
}
