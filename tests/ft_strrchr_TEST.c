/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr_TEST.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andchris <andchris1987@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 12:30:18 by andchris          #+#    #+#             */
/*   Updated: 2021/11/01 10:36:07 by andchris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../libft.h"

int main(void)
{
    const char  str[] = "christofori";
    int c = 'o';

    printf("str: %s | c: %c | ft_strchr: %s\n", str, c, ft_strrchr(str, c));
    printf("str: %s | c: %c | ft_strchr: %s\n", str, c, strrchr(str, c));
}