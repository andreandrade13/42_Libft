/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit_TEST.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andchris <andchris1987@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 11:36:57 by andchris          #+#    #+#             */
/*   Updated: 2021/11/01 09:30:18 by andchris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int a = '5';
    int b = '%';
    int c = '0';

    printf("a: %c | ft_isdigit: %d | isdigit: %d\n", a, ft_isdigit(a), isdigit(a));   
    printf("b: %c | ft_isdigit: %d | isdigit: %d\n", b, ft_isdigit(b), isdigit(b));   
    printf("c: %c | ft_isdigit: %d | isdigit: %d\n", c, ft_isdigit(c), isdigit(c));   
}