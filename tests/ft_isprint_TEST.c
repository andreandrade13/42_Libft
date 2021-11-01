/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint_TEST.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andchris <andchris1987@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 12:05:13 by andchris          #+#    #+#             */
/*   Updated: 2021/11/01 09:37:19 by andchris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int a = 'a';
    int b = '5';
    int c = '%';

    printf("a: %c | ft_isprint: %d | isprint: %d\n", a, ft_isprint(a), isprint(a));
    printf("b: %c | ft_isprint: %d | isprint: %d\n", b, ft_isprint(b), isprint(b));
    printf("c: %c | ft_isprint: %d | isprint: %d\n", c, ft_isprint(c), isprint(c));
}