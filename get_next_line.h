/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrochard <nrochard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 10:26:30 by nrochard          #+#    #+#             */
/*   Updated: 2019/10/24 18:43:48 by nrochard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
   
#include <unistd.h>
#include<fcntl.h>
#include <stdio.h>
#include <stdlib.h>


char    *ft_strjoin(char const *s1, char const *s2);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strdup(const char *src);
int     get_next_line(int fd, char **line);
size_t	ft_strlen(const char *str);
void	ft_putendl_fd(char *s, int fd);
char	*ft_strcpy(char *dest, char *src);
# endif