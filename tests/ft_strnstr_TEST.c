/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr_TEST.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andchris <andchris1987@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 12:59:01 by andchris          #+#    #+#             */
/*   Updated: 2021/11/01 11:35:38 by andchris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../libft.h"

int main(void)
{
    const char  big[] = "christofori";
    const char  little[] = "tof";
    size_t  n = 4;


    printf("big: %s | little: %s | ft_strnstr: %s\n", big, little, ft_strnstr(big, little, n));
    // printf("big: %s | little: %s | ft_strnstr: %s\n", big, little, strnstr(big, little, n));
}
