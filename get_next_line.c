/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:52:21 by paugonca          #+#    #+#             */
/*   Updated: 2022/11/14 11:49:59 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*check_buf(char **log, char **buf, size_t len)
{
	char	*res;
	char	*hold;
	size_t	p;

	p = ft_strlen(*log);
	res = malloc(len + p + 1);
	if (!res)
		return (0);
	ft_memcpy(res, *log, p);
	ft_memcpy(res + p, *buf, len);
	res[len + p] = '\0';
	hold = ft_strdup((*buf) + len);
	if (*log)
		free (*log);
	(*log) = hold;
	return (res);
}

static char	*store_log(char	**log, char **buf, size_t p)
{
	char	*res;
	char	*hold;

	res = NULL;
	if (p <= 0)
	{
		if (p == 0 && *log)
		{
			res = (*log);
			*log = NULL;
		}
		return (res);
	}
	(*buf)[p] = '\0';
	hold = ft_strchr(*bufer, '\n');
	if (hold)
		res = check_buf(log, buf, (hold - *buf) + 1);
	else
	{
		hold = ft_strjoin(*log, *buf);
		if (*log)
			free(*log);
		*log = hold;
	}
	return (res);
}

char	*get_next_line(int fd)
{
	static char	*log;
	char		*buf;
	char		*res;
	size_t		p;

	if (read(fd, 0, 0) == -1 || (fd < 0 || fd > 1024) || BUFFER_SIZE <= 0)
		return (0);
	p = 1;
	res = NULL;
	buf = ft_strchr(log, '\n');
	if (!buf)
	{
		buf = malloc(BUFFER_SIZE + 1);
		if (!buf)
			return (0);
		while (res == NULL && p > 0)
		{
			p = read(fd, buf, BUFFER_SIZE);
			res = store_log(&log, &buf, p);
		}
		free(buf);
		return (res);
	}
}
