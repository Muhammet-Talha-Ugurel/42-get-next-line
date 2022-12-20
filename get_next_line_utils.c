/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mugurel <muhammedtalhaugurel@gmai...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 02:42:15 by mugurel           #+#    #+#             */
/*   Updated: 2022/12/20 04:48:10 by mugurel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_read_file(int fd, int line_len)
{
	int		x;
	char	c[1];
	char	*str;

	str = malloc(sizeof(char) * line_len + 1);
	if (!str)
		return (0);
	x = 0;
	while (line_len > x)
	{
		read(fd, c, BUFFER_SIZE);
		if (c[0] == '\n')
		{
			break ;
		}
		else
			str[x] = c[0];
		x++;
	}
	return (str);
}

void	ft_close_file(int fd)
{
	close(fd);
}
