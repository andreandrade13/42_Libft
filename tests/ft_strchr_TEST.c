/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_TEST.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andchris <andchris1987@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 12:25:24 by andchris          #+#    #+#             */
/*   Updated: 2021/11/01 10:34:27 by andchris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../libft.h"

int main(void)
{
    const char  str[] = "christofori";
    int c = 'i';

    printf("str: %s | c: %c | ft_strchr: %s\n", str, c, ft_strchr(str, c));
    printf("str: %s | c: %c | strchr: %s\n", str, c, strchr(str, c));
}