/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_TEST.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andchris <andchris1987@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 12:59:52 by andchris          #+#    #+#             */
/*   Updated: 2021/11/01 13:06:53 by andchris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int main(void)
{
    char const  *str = 'andre-christofori';
    char        c = '-';
    char        **result = ft_split(str, c);

    printf("String: %s | Delimiter: %c | Result = %s\n", str, c, result);
}