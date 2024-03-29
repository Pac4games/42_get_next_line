/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 15:04:02 by paugonca          #+#    #+#             */
/*   Updated: 2022/11/23 15:43:23 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

//get_next_line_bonus.c
char	*get_next_line(int fd);
//get_next_line_utils_bonus.c
size_t	ft_strlen(const char *str);
char	*ft_strjoin(char *s1, char *s2);
int		clean_buf(char *buf);

#endif
