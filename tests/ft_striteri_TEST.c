/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri_TEST.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andchris <andchris1987@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 20:39:59 by andchris          #+#    #+#             */
/*   Updated: 2021/11/01 20:39:59 by andchris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

char    f(unsigned int i, char c)
{
    if (i > 0)
        return (c = 'x');
    else
        return (c);
}

int main(void)
{
    char    *str = "andre";

    // printf("Original: %s | New: %s\n", str, ft_striteri(str, f));
}