/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp_TEST.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andchris <andchris1987@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 12:35:40 by andchris          #+#    #+#             */
/*   Updated: 2021/11/01 10:38:43 by andchris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../libft.h"

int main(void) 
{
    const char  str1[] = "andrea";
    const char  str2[] = "andre";
    size_t n = 6;

    printf("str1: %s | str2: %s | ft_strncmp: %d\n", str1, str2, ft_strncmp(str1, str2, n));
    printf("str1: %s | str2: %s | ft_strncmp: %d\n", str1, str2, strncmp(str1, str2, n));
}