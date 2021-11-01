/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero_TEST.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andchris <andchris1987@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 20:24:03 by andchris          #+#    #+#             */
/*   Updated: 2021/11/01 09:53:35 by andchris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../libft.h"

int main(void)
{
    char str[10] = "123456789\0";
    size_t n = 4;
    int i = 0;

    printf("Before: %s\nn: %ld\nAfter: ", str, n);
    // ft_bzero(str, n);
    bzero(str, n); //standard function
    while (i < sizeof(str))
    {
        printf("%c", str[i]);
        ++i;
    }
    printf("\n");
    
    
}