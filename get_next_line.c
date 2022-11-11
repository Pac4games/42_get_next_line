/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:52:21 by paugonca          #+#    #+#             */
/*   Updated: 2022/11/11 17:09:50 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

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
	}
}
