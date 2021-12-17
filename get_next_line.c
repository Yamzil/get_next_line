/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 17:30:11 by yamzil            #+#    #+#             */
/*   Updated: 2021/12/17 21:36:19 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char    *ft_read_txt(int fd, char *tmp)
{
    char    *buf;
    int     i;
    
    i = 1;
    buf = malloc(BUFFER_SIZE + 1);
    if (!buf)
        return(NULL);
    while(!(ft_strch(tmp,'\n')) && i)
    {
        i = read(fd , buf, BUFFER_SIZE);
        if (i == -1)
        {
            free(buf);
            return(NULL);
        }
        buf[i] = '\0';
        tmp = ft_strjoin(tmp, buf);
    }
    free (buf);
    return(tmp);
}

static char    *ft_take_line(char *tmp)
{
    char *line;
    int     i;

    i = 0;
    while(tmp[i] != '\n' && tmp[i])
        i++;
    if (tmp[i] == '\0')
        line = malloc (i + 1);
    else
        line = malloc (i + 2);
    i = 0;
    while(tmp[i] && tmp[i] != '\n')
    {
        line[i] = tmp[i];
        i++;
    }
    if (tmp[i] == '\n')
        line[i++] = '\n';
    line[i] = '\0';
    return (line);
}

char    *get_next_line(int fd)
{
    char    *line;
    static char *tmp;

    tmp = ft_read_txt(fd, tmp);
    line = ft_take_line(tmp);

}