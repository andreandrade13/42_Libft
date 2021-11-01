/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_TEST.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andchris <andchris1987@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 10:33:57 by andchris          #+#    #+#             */
/*   Updated: 2021/11/01 09:40:35 by andchris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../libft.h"

int main(void)
{
    const char *a = "andre";
    const char *b = "Christofori ";
    const char *c = "Andrade";

    printf("a: %s | ft_strlen: %ld | strlen: %ld\n", a, ft_strlen(a), strlen(a));
    printf("b: %s | ft_strlen: %ld | strlen: %ld\n", b, ft_strlen(b), strlen(b));
    printf("c: %s | ft_strlen: %ld | strlen: %ld\n", c, ft_strlen(c), strlen(c));
}