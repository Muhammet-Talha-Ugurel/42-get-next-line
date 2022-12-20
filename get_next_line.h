/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mugurel <muhammedtalhaugurel@gmai...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 02:39:37 by mugurel           #+#    #+#             */
/*   Updated: 2022/12/20 04:46:01 by mugurel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H_
# define GET_NEXT_LINE_H_

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 24
# endif

#include <stdlib.h>
#include <unistd.h>


size_t	ft_strlen(const char *s);
size_t	get_line_len(int fd);
char	*get_next_line(int fd);
char	*ft_read_file(int fd, int line_len);
void	ft_close_file(int fd);

#endif
