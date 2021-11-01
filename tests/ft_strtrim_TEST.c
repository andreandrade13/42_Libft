/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim_TEST.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andchris <andchris1987@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 08:34:23 by andchris          #+#    #+#             */
/*   Updated: 2021/11/01 12:12:33 by andchris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../libft.h"

int		main(void)
{
	char const *s1 = "   xxxyyyyy";
	char const *set = " x";
	char *new_string; 

	new_string = ft_strtrim(s1, set);
	printf("String to be trimed: %s | Set: %s | Trimed string: %s\n", s1, set, new_string);
	return (0);
}