/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp_TEST.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andchris <andchris1987@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 12:52:53 by andchris          #+#    #+#             */
/*   Updated: 2021/11/01 11:29:38 by andchris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../libft.h"

int main(void)
{
    const char  str1[] = "andre";
    const char  str2[] = "andra";
    size_t n = 4;

    printf("str1: %s | str2: %s | ft_memcmp: %d\n", str1, str2, ft_memcmp(str1, str2, n));
    printf("str1: %s | str2: %s | ft_memcmp: %d\n", str1, str2, memcmp(str1, str2, n));
}