/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 20:29:07 by yamzil            #+#    #+#             */
/*   Updated: 2021/12/19 21:45:05 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"
#include <stdio.h>

static char    *ft_read_fd(int fd,char *tmp)
{
	int i;
	char    *buf;

	i = 1;
	buf = malloc(BUFFER_SIZE + 1);
	if (!buf)
		return (NULL);
	while (ft_strchr(tmp, '\n') == NULL && i)
	{
		i = read(fd, buf, BUFFER_SIZE);
		if (i == -1)
		{
			free (buf);
			return (NULL);
		}
		buf[i] = '\0';
		tmp = ft_strjoin(tmp, buf);
	}
	free(buf);
	return (tmp);
}

char    *ft_take_line(char *tmp)
{
	int i;
	char    *line;

	i = 0;
	if (!tmp[i])
		return (NULL);
	while (tmp[i] != '\n' && tmp[i])
		i++;
	if (tmp[i] == '\0')
		line = malloc (i + 1);
	else
		line = malloc (i + 2);
	i = 0;
	while (tmp[i] != '\n' && tmp[i])
	{
		line[i] = tmp[i];
		i++;
	}
	if (tmp[i] == '\n')
		line[i++] = '\n';
	line[i] = '\0';
	return(line);
}

char    *ft_take_rest(char *tmp)
{
	int i;
	char    *ret;

	i = 0;
	while(tmp[i] != '\n' && tmp[i])
		i++;
	if (!tmp[i])
	{
		free(tmp);
		return (NULL);
	}
	ret = ft_substr(tmp, i + 1);
	free(tmp);
	return (ret);
}

char    *get_next_line(int fd)
{
	static char *rd[1024];
	char    *l;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return(NULL);
	rd[fd] = ft_read_fd(fd, rd[fd]);
	if (!rd[fd])
		return(NULL);
	l = ft_take_line(rd[fd]);
	rd[fd] = ft_take_rest(rd[fd]);
	
return(l);
}
