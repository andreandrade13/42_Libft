/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha_TEST.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andchris <andchris1987@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 21:14:51 by andchris          #+#    #+#             */
/*   Updated: 2021/11/01 09:27:26 by andchris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int a = 'a';
    int b = '2';
    int c = 'Z';

    printf("a: %c | ft_isalpha: %d | isalpha: %d\n", a, ft_isalpha(a), isalpha(a));
    printf("b: %c | ft_isalpha: %d | isalpha: %d\n", b, ft_isalpha(b), isalpha(b));
    printf("c: %c | ft_isalpha: %d | isalpha: %d\n", c, ft_isalpha(c), isalpha(c));
    return (0);
}