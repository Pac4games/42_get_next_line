/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 15:31:18 by paugonca          #+#    #+#             */
/*   Updated: 2022/11/15 15:44:04 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	int	p;

	if (!s)
		return (0);
	p = 0;
	while (s[p])
		p++;
	return (p);
}

char	*ft_strchr(const char *s, int c)
{
	char	*res;
	int		p;

	res = (char *)s;
	p = 0;
	while (res[p] && res[p] != c)
		p++;
	if (res[p] == c)
		return (&res[p]);
	return (0);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	p;
	size_t	i;

	if (!s1 || !s2)
		return (0);
	res = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!res)
		return (0);
	p = 0;
	i = 0;
	while (s1[p])
		res[i++] = s1[p++];
	p = 0;
	while (s2[p])
		res[i++] = s2[p++];
	res[i] = '\0';
	return (res);
}

void	ft_bzero(void *b, size_t len)
{
	size_t	p;

	p = 0;
	while (p < len)
	{
		((unsigned char *)b)[p] = 0;
		p++;
	}
}

void	*ft_calloc(size_t number, size_t size)
{
	void	*ptr;

	ptr = malloc(number * size);
	if (!ptr)
		return (0);
	ft_bzero(ptr, number * size);
	return (ptr);
}
