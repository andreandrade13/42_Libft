/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_TEST.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andchris <andchris1987@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 17:18:15 by andchris          #+#    #+#             */
/*   Updated: 2021/11/01 11:37:19 by andchris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_atoi: converts the str arg to an integer (type int)
// This function returns the converted integral number as an int value. If no valid conversion could be performed, it returns zero.
//atoi: stdlib.h

#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    const char  *p1 = "    ++-+25";
    const char  *p2 = "357";
    const char  *p3 = "ABC123";
    const char  *p4 = "1500";

    printf("Str: %s | atoi: %d | ft_atoi: %d\n", p1, atoi(p1), ft_atoi(p1));
    printf("Str: %s | atoi: %d | ft_atoi: %d\n", p2, atoi(p2), ft_atoi(p2));
    printf("Str: %s | atoi: %d | ft_atoi: %d\n", p3, atoi(p3), ft_atoi(p3));
    printf("Str: %s | atoi: %d | ft_atoi: %d\n", p4, atoi(p4), ft_atoi(p4));
}