/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andchris <andchris1987@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 17:35:58 by andchris          #+#    #+#             */
/*   Updated: 2021/11/27 17:25:03 by andchris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	len_rtn(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

static size_t	size_rtn(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	size;

	s_len = len_rtn(s);
	if (start >= s_len)
		size = 0;
	else if (len > (s_len - start))
		size = s_len - start;
	else
		size = len;
	return (size);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	size;
	size_t	i;

	size = size_rtn(s, start, len);
	if (!size || s == NULL)
		return (ft_calloc(1, 1));
	else
		substring = malloc((size + 1) * sizeof(char));
	if (!substring)
		return (NULL);
	i = 0;
	while (i < size)
	{
		substring[i] = s[i + start];
		++i;
	}
	substring[i] = '\0';
	return (substring);
}
