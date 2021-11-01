/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove_TEST.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andchris <andchris1987@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 16:30:35 by andchris          #+#    #+#             */
/*   Updated: 2021/11/01 10:11:33 by andchris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../libft.h"

int main(void)
{
    char  src[] = "andre";
    char    dst[] = "ypjkl";
    int n = 3;

    printf("Before -> src: %s | dst: %s | n: %d\n", src, dst, n);
    // ft_memmove(dst, src, n);
    memmove(dst, src, n); //standard function
    printf("Before -> src: %s | dst: %s | n: %d\n", src, dst, n);
}