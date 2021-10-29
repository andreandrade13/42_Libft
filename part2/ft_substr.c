/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andchris <andchris1987@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 17:35:58 by andchris          #+#    #+#             */
/*   Updated: 2021/10/28 17:47:23 by andchris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdlib.h>

static size_t   ft_strlen(const char *s)
{
    size_t  len;
    
    len = 0;
    while (s[len])
        len++;
    return (len);
}

static char *ft_strdup(const char *str1)
{
    int     i;
    char    *p;

    i = 0;
    while (str1[i])
        i++;
    if (!(p = malloc((i + 1) * sizeof(char))))
        return (0);
    i = -1;
    while (str1[++i])
        p[i] = str1[i];
    p[i] = '\0';
    return (p);
}

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *p;
    size_t  i;
    size_t  memory;

    if (s == NULL)
        return (NULL);
    i = 0;
    memory = ft_strlen(&s[start]);
    if (start > ft_strlen(s))
        return (ft_strdup(""));
    if (memory < len)
        len = memory;
    p = malloc(len + 1);
    if (p == NULL)
        return (NULL);
    while (s[start + i] && i < len)
    {
        p[i] = s[start + i];
        i++;
    }
    p[i] = '\0';
    return (p);
}