/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andchris <andchris1987@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 12:19:35 by andchris          #+#    #+#             */
/*   Updated: 2021/11/28 13:22:11 by andchris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char		*p_dst;
	const char	*p_src;
	size_t		i;

	i = -1;
	p_dst = (char *)dst;
	p_src = (char *)src;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (p_src < p_dst)
		while ((int)(--n) >= 0)
			*(p_dst + n) = *(p_src + n);
	else
		while (++i < n)
			*(p_dst + i) = *(p_src + i);
	return (dst);
}
