/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 15:13:17 by paugonca          #+#    #+#             */
/*   Updated: 2022/11/23 15:28:31 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*get_next_line(int fd)
{
	static char	buf[FOPEN_MAX][BUFFER_SIZE + 1];
	char		*res;
	int			p;

	p = 0;
	if (BUFFER_SIZE < 1 || read(fd, 0, 0) < 0 || fd >= FOPEN_MAX)
	{
		while (fd >= 0 && fd <= FOPEN_MAX && buf[fd][p])
			buf[fd][p++] = 0;
		return (NULL);
	}
	res = NULL;
	while (buf[fd][0] || read(fd, buf[fd], BUFFER_SIZE) > 0)
	{
		res = ft_strjoin(res, buf[fd]);
		if (clean_buf(buf[fd]))
			break ;
	}
	return (res);
}
