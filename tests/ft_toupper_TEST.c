/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper_TEST.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andchris <andchris1987@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 21:02:14 by andchris          #+#    #+#             */
/*   Updated: 2021/11/01 10:31:25 by andchris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int c = 'a';
    int c1 = 'b';

    printf("c: %c | ft_toupper: %c\n", c, ft_toupper(c));
    printf("c1: %c | toupper: %c\n", c1, toupper(c1)); //standard function
    return (0);
}