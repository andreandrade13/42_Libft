/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andchris <andchris1987@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 22:51:13 by andchris          #+#    #+#             */
/*   Updated: 2021/11/27 17:50:36 by andchris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len_rtn(char const *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		++i;
	}
	return (i);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		si;
	int		str_i;

	if (s == NULL)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (len_rtn(s) + 1));
	if (str == NULL)
		return (NULL);
	si = -1;
	str_i = 0;
	while (s[++si])
		str[str_i++] = (*f)(si, s[si]);
	str[str_i] = '\0';
	return (str);
}
