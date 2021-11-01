/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum_TEST.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andchris <andchris1987@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 21:10:39 by andchris          #+#    #+#             */
/*   Updated: 2021/11/01 09:32:46 by andchris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int a = 'z';
    int b = '6';
    int c = '&';

    printf("a: %c | ft_isalnum: %d | isalnum: %d\n", a, ft_isalnum(a), isalnum(a));
    printf("b: %c | ft_isalnum: %d | isalnum: %d\n", b, ft_isalnum(b), isalnum(b));
    printf("c: %c | ft_isalnum: %d | isalnum: %d\n", c, ft_isalnum(c), isalnum(c));
    return (0);
}