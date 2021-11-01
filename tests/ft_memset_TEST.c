/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset_TEST.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andchris <andchris1987@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 15:24:44 by andchris          #+#    #+#             */
/*   Updated: 2021/11/01 09:46:35 by andchris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../libft.h"

int main(void) 
{
    char str[] = "aaaaaaaaa";
    int c = 'b';
    size_t n = 3;
    
    //memset standard function
    // printf("Before: %s\n", str);
    // memset(str, c, n);
    // printf("After: %s\n", str);

    //ft_memset
    printf("Before std: %s\n", str);
    ft_memset(str, c, n);
    printf("After std: %s\n", str);  
}