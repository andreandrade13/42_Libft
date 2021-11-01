/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andchris <andchris1987@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 17:56:45 by andchris          #+#    #+#             */
/*   Updated: 2021/11/01 12:14:17 by andchris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t   len_rtn(const char *s)
{
    size_t  len;

    len = 0;
    while (s[len])
        len++;
    return (len);
}

static int  finder(char const *set, char c)
{
    int index;

    index = 0;
    while (set[index] != '\0')
    {
        if (set[index] == c)
        {
            return (1);
        }
    }
}

static int  get_begin(const char *s1, char const *set)
{
    int index;

    index = 0;
    while (s1[index] != '\0')
    {
        if(finder(set, s1[index]))
            index++;
        else
            break;
    }
    return (index);
}

static int  get_end(const char *s1, char const *set)
{
    int index;

    index = len_rtn(s1) - 1;
    while (index > 0)
    {
        if (finder(set, s1[index]))
            index--;
        else
            break;
    }
    return (index);
}

char    *ft_strtrim(char const *s1, char const *set)
{
    char    *str;
    int     start;
    int     end;
    int     len;
    int     index;

    start = get_begin(s1, set);
    end = get_end(s1, set);
    if (start == len_rtn(s1))
        return (ft_calloc(1, 1));
    if (end - start < 0)
        len = (end - start + 2) * -1;
    else
        len = end - start + 2;
    str = malloc(len);
    if (!str)
        return (NULL);
    index = 0;
    while (index < len - 1)
    {
        str[index] = s1[start + 1];
        ++index;
    }
    str[index] = '\0';
    return (str);
}