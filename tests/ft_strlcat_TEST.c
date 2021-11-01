/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat_TEST.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andchris <andchris1987@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 11:28:27 by andchris          #+#    #+#             */
/*   Updated: 2021/11/01 10:22:32 by andchris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../libft.h"

int main(void)
{
    const char  src[] = "dede";
    char    dst[] = "123";
    size_t  size = 4;

    printf("Before -> src: %s | dst: %s\n", src, dst);
    printf("After -> dst_Returned: %ld\n", ft_strlcat(dst, src, size));
    // printf("After -> dst_Returned: %ld\n", strlcat(dst, src, size));
}