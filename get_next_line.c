/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 15:45:54 by paugonca          #+#    #+#             */
/*   Updated: 2022/11/15 16:46:45 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*read_log(char *log)
{
	char	str;
	int		p;

	if (!log)
		return (NULL);
	p = 0;
	while (log[p] && log[p] != '\n')
		p++;
	str = ft_calloc(p + 2, 1);
	if (!res)
		return (NULL);
	p = 0;
	while (log[p] && log[p] != '\n')
	{
		str[p] = log[p];
		p++;
	}
	if (log[p] && log[p] == '\n')
		str[p] = '\n';
	return (str);
}

static char	*update_log(char *log)
{
	char	*res;
	int		p;
	int		i;
	
	p = 0;
	i = 0;
	while (log[p] && log[p] != '\n')
		p++;
	if (!log[p])
	{
		free(log);
		return (NULL);
	}
	res = malloc(ft_strlen(log) - p + 1);
	p++;
	while (log[p])
	{
		res[i] = log[p]
		p++;
		i++;
	}
	res[i] = '\n';
	free(log);
	return (res);
}

char	*get_next_line(int fd)
{
	static char	*log;
	char		*res;

	if ((fd < 0 && fd > 1024) || BUFFER_SIZE <= 1)
		return (NULL);
	if (log && ft_strchr(log, '\n'))
	{
		res = read_log(log);
		log = update_log(log);
	}
}
