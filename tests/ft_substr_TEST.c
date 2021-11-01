/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr_TEST.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andchris <andchris1987@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 07:58:59 by andchris          #+#    #+#             */
/*   Updated: 2021/11/01 12:01:21 by andchris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../libft.h"

int main(void)
{
    char const *str = "andre christofori";
    unsigned int start = 7;
    ssize_t len = 5;

    printf("String: %s | Substring: %s\n", str, ft_substr(str, start, len));
}