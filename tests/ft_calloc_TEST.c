/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc_TEST.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andchris <andchris1987@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 16:11:50 by andchris          #+#    #+#             */
/*   Updated: 2021/11/01 11:48:23 by andchris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "../libft.h"

int main(void)
{
    size_t num = 55;
    size_t size = sizeof(char);

    printf("num: %ld\nsize: %ld\nstring (with zeros): %p\n", num, size, (char *)ft_calloc(num, size));
    printf("num: %ld\nsize: %ld\nstring (with zeros): %p\n", num, size, calloc(num, size)); //standard
}