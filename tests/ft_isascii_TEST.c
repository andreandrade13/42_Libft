/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii_TEST.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andchris <andchris1987@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 21:21:09 by andchris          #+#    #+#             */
/*   Updated: 2021/11/01 09:35:22 by andchris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "../libft.h"


int main(void)
{
    int a = 'f';
    int b = '5';
    int c = 'e';

    printf("a: %c | ft_isascii: %d | isascii: %d\n", a, ft_isascii(a), isascii(a));
    printf("b: %c | ft_isascii: %d | isascii: %d\n", b, ft_isascii(b), isascii(b));
    printf("c: %c | ft_isascii: %d | isascii: %d\n", c, ft_isascii(c), isascii(c));
}