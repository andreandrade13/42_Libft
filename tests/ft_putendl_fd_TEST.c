/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd_TEST.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andchris <andchris1987@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 08:14:29 by andchris          #+#    #+#             */
/*   Updated: 2021/11/02 08:56:38 by andchris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int main(void)
{
    char    *str = "andre christofori";
    int     fd = 1;

    printf("String: %s | fd: %d\n", str, fd);
    ft_putendl_fd(str, fd);
    return (0);
}