/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andchris <andchris1987@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 22:51:13 by andchris          #+#    #+#             */
/*   Updated: 2021/10/28 22:54:29 by andchris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char    *ft_strmapi(char *s, char (*f)(unsigned int, char))
{
    char    *str;
    int     si;
    int     str_i;

    if (s == NULL)
        return (NULL);
    str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
    if (str == NULL)
        return (NULL);
    si = -1;
    str_i = 0;
    while (s[++si])
        str[str_i++] = (*f)(si, s[si]);
    str[str_i] = '\0';
    return (str);
}