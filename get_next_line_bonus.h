/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 20:30:33 by yamzil            #+#    #+#             */
/*   Updated: 2021/12/19 20:30:54 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef GET_NEXT_LINE_BONUS_H
#define GET_NEXT_LINE_BONUS_H

#include<unistd.h>
#include<stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

char    *ft_strjoin(char *s1, char *s2);
char    *get_next_line(int fd);
char	*ft_strchr(char *s, int c);
int ft_strlen(char *str);
char	*ft_substr(char *s, int start);

#endif