/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 20:31:31 by yamzil            #+#    #+#             */
/*   Updated: 2021/12/19 20:33:27 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_substr(char *s, int start)
{
	int	i;
	char	*temp;

	i = 0;
	if (!s)
		return (NULL);
    int len = ft_strlen (&s[start]);
	temp = malloc((len + 1) * sizeof(char));
	if (!temp)
		return (NULL);
	if (start >= ft_strlen(s))
		start = ft_strlen(s);
	while (len > i && s[i + start])
	{
		temp[i] = s[i + start];
		i++;
	}
	temp[i] = '\0';
	return (temp);
}

int    ft_strlen(char *str)
{
    int    i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

char    *ft_strchr(char *s, int c)
{
    int    i;

    i = 0;
    if (!s)
        return (NULL);
    while (s[i] != (char)c)
    {
        if (s[i] == '\0')
            return (NULL);
        i++;
    }
    return ((char *)s);
}

char    *ft_strjoin(char *s1, char *s2)
{
    int		i;
    int		l;
    char	*temp;
    int		j;

    if (!s2)
        return (NULL);
    if (!s1)
    {
        s1 = (char *)malloc(1);
        s1[0] = '\0';
    }
    temp = malloc (ft_strlen(s1) + ft_strlen(s2) + 1);
    if (!temp)
        return (NULL);
    i = 0;
    j = 0;
    while (s1[i])
        temp[j++] = s1[i++];
    l = 0;
    while (s2[l])
        temp[j++] = s2[l++];
    temp[j] = '\0';
    free(s1);
    return (temp);
}