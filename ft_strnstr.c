/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andchris <andchris1987@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 14:04:42 by andchris          #+#    #+#             */
/*   Updated: 2021/10/26 16:19:47 by andchris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = 0;
	if (little[j] == '\0')
		return ((char *)big);
	while (i < (int)len && big[i] != '\0')
	{
		temp = i;
		while (little[j] == big[i]
			&& little[i] != '\0'
			&& big[i] != '\0' && i < (int)len)
		{
			j++;
			i++;
		}
		if (little[i] == '\0')
			return ((char *)&big[temp]);
		i = temp + 1;
		j = 0;
	}
	return (0);
}
