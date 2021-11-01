/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_TEST.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andchris <andchris1987@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 08:12:00 by andchris          #+#    #+#             */
/*   Updated: 2021/11/01 12:10:50 by andchris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../libft.h"

int main(void)
{
    char const *s1 = "andre";
    char const *s2 = " christofori";

    printf("Joined: %s\n", ft_strjoin(s1, s2));
}