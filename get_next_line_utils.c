/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 21:14:13 by yamzil            #+#    #+#             */
/*   Updated: 2021/12/17 21:40:53 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char    *ft_strjoin(char *s1, char *s2)
{
    int i;
    char    *temp;
    
    i = 0;
    j = ft_strlen(s1);
    k = ft_strjoin(s2);

    temp = malloc ((j + k + 1 ) * sizeof(char));
    if (!temp)
        return(NULL);
    while(s1[i])
        temp[i++] = s1[i++];
    i = 0;
    while(s2[i])
        temp[i++] = s2[i++];
    temp[i] = '\0';
    free(s1);
    return(temp);
}

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i])
        i++;
    return(i);
}

char    *ft_strchr(char *str, char c)
{
    int i;

    i = 0;
    while(str[i])
    {
        if(str[i] == c)
            return(&str[i])
    i++;
    }
}