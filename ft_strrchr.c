/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andchris <andchris1987@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 13:48:52 by andchris          #+#    #+#             */
/*   Updated: 2021/11/27 16:12:58 by andchris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	*last;

	str = (char *)s;
	last = NULL;
	while (*str != '\0')
	{
		if (*str == c)
			last = str;
		str++;
	}
	if (c == '\0')
		return (str);
	return (last);
}
