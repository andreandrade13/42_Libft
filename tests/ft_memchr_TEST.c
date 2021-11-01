/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr_TEST.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andchris <andchris1987@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 12:43:22 by andchris          #+#    #+#             */
/*   Updated: 2021/11/01 10:54:35 by andchris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../libft.h"

int main(void)
{
    const char  str[] = "andre";
    int c = 'd';
    size_t n = 5;



    // char    *ft_memchr_rtn = ft_memchr(str, c, n);
    char    *ft_memchr_rtn = memchr(str, c, n); //standard
    printf("str: %s | c = %c | ft_memchr: %s\n", str, c, ft_memchr_rtn);
}