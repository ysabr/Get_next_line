/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysabr <ysabr@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 15:04:58 by ysabr             #+#    #+#             */
/*   Updated: 2022/11/17 15:40:24 by ysabr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS
#define GET_NEXT_LINE_BONUS

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 5
#endif
#include <stdlib.h>
#include<unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <limits.h>

char	*ft_strdup(char *s1);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strchr(char *s, int c);
size_t 	ft_strlen(char *str);
char	*ft_strchr(char *s, int c);
char    *ft_get_line(char *save);
char    *ft_save(char *save);
char    *ft_read_and_save(int fd, char *save);
char    *get_next_line(int fd);

#endif