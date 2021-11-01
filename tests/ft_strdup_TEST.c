/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_TEST.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andchris <andchris1987@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 16:39:55 by andchris          #+#    #+#             */
/*   Updated: 2021/11/01 11:49:21 by andchris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../libft.h"

int main(void)
{
    const char  *str = "andre christofori";

    printf("str: %s | ft_strdup: %s\n", str, ft_strdup(str));
    printf("str: %s | ft_strdup: %s\n", str, strdup(str)); //standard
}