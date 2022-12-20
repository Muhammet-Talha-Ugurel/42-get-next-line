/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mugurel <muhammedtalhaugurel@gmai...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 02:38:10 by mugurel           #+#    #+#             */
/*   Updated: 2022/12/20 04:48:34 by mugurel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char	*ret;
	size_t	line_len;

	line_len = get_line_len(fd);

	return (0);
}

size_t	get_line_len(int fd)
{
	size_t	i;
	char	c[1];

	i = 0;
	while (read(fd, c, 1) != 0)
	{
		if (c[0] == '\n')
			break ;
		i++;
	}
	return (i);
}
