/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 16:09:32 by paugonca          #+#    #+#             */
/*   Updated: 2022/11/16 16:56:22 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

//Adaptated version for get_next_line()
size_t	ft_strlen(const char *str)
{
	size_t	p;

	p = 0;
	if (!str)
		return (0);
	while (str[p] && str[p] != '\n')
		p++;
	if (str[p] == '\n')
		p++;
	return (p);
}

//Another adaptaded version for get_next_line()
char	*ft_strjoin(char *s1, char *s2)
{
	char	*res;
	int		p;

	p = 0;
	res = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!res)
		return (NULL);
	while (s1 && s1[p])
	{
		res[p] = s1[p];
		p++;
	}
	free(s1);
	while (*s2)
	{
		res[p++] = *s2;
		if (*s2++ == '\n')
			break ;
	}
	res[p] = '\0';
	return (res);
}

int	clean_buf(char *buf)
{
	int	p;
	int	i;
	int	nline;

	p = 0;
	i = 0;
	nline = 0;
	while (buf[p])
	{
		if (nline)
			buf[i++] = buf[p];
		if (buf[p] == '\n')
			nline = 1;
		buf[p++] = '\0';
	}
	return (nline);
}
