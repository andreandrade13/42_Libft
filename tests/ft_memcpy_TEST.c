/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy_TEST.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andchris <andchris1987@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 16:16:53 by andchris          #+#    #+#             */
/*   Updated: 2021/11/01 09:59:22 by andchris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../libft.h"

int main(void)
{
    char src[] = "andre";
    char dst[] = "tabUQ";
    size_t n = 3;

    printf("Before -> src: %s | dst: %s | size: %ld\n", src, dst, n);
    // ft_memcpy(dst, src, n);
    memcpy(dst, src, n); //standard function
    printf("After -> src: %s | dst: %s | size: %ld\n", src, dst, n);
}