/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andchris <andchris1987@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 14:30:36 by andchris          #+#    #+#             */
/*   Updated: 2021/10/26 16:29:04 by andchris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str1)
{
	int		i;
	char	*p;

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
