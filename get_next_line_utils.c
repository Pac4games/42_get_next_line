/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 17:00:48 by paugonca          #+#    #+#             */
/*   Updated: 2022/11/07 15:34:20 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	p;

	p = 0;
	while (s[p])
		p++;
	return (p);
}

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	size_t	p;

	p = 0;
	if (dst == src || len == 0)
		return (dst);
	while (p < len)
	{
		((char *)dst)[p] = ((const char *)src)[p];
		p++;
	}
	return (dst);
}

char	*ft_strdup(const char *str)
{
	char	*dst;

	dst = (char *)malloc((sizeof(char)) * (ft_strlen(str) + 1));
	if (!dst)
		return (0);
	ft_memcpy(dst, str, ft_strlen(str) + 1);
	return (dst);
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
