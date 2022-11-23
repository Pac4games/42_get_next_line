/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 16:07:52 by paugonca          #+#    #+#             */
/*   Updated: 2022/11/23 13:01:19 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

//get_next_line
char	*get_next_line(int fd);
//get_next_line_utils.c
size_t	ft_strlen(const char *str);
char	*ft_strjoin(char *s1, char *s2);
int		clean_buf(char *buf);

#endif
