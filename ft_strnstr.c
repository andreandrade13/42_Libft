/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andchris <andchris1987@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 14:04:42 by andchris          #+#    #+#             */
/*   Updated: 2021/11/03 21:21:59 by andchris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len_rtn(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		++i;
	}
	return (i);
}

static int	get_match(const char *big, const char *little, size_t len)
{
	size_t	i;
	int		j;
	size_t	k;

	i = 0;
	while (big[i] != '\0' && i < len)
	{
		k = i;
		j = 0;
		while (little[j] != '\0' && k < len)
		{
			if (big[k] == little[j])
			{
				++k;
				++j;
			}
			else
				break ;
		}
		if (little[j] == '\0')
			return (k);
		++i;
	}
	return (0);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	match;

	if (little[0] == '\0')
		return ((char *)big);
	match = get_match(big, little, len);
	if (match > 0)
		return ((char *)big + (match - len_rtn(little)));
	else
		return ((char *) '\0');
}
