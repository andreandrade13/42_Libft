/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy_TEST.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andchris <andchris1987@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 11:02:11 by andchris          #+#    #+#             */
/*   Updated: 2021/11/01 10:18:50 by andchris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "../libft.h"

int main(void)
{
    char    src[] = "andre";
    char    dst[8] = "dededede";
    size_t  size = 6;

    printf("Before -> src: %s, dst: %s\n", src, dst);
    printf("After -> dst: %s, length: %ld\n", dst, ft_strlcpy(dst, src, size));
    // printf("After -> dst: %s, length: %ld\n", dst, strlcpy(dst, src, size));

}