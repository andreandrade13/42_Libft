/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower_TEST.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andchris <andchris1987@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 21:02:14 by andchris          #+#    #+#             */
/*   Updated: 2021/11/01 10:30:10 by andchris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int c = 'A';
    int c1 = 'B';

    printf("c: %c | ft_tolower: %c\n", c, ft_tolower(c));
    printf("c: %c | tolower: %c\n", c1, tolower(c1));
    return (0);
}