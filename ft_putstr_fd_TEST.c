/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd_TEST.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andchris <andchris1987@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 20:54:23 by andchris          #+#    #+#             */
/*   Updated: 2021/11/01 20:54:23 by andchris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main(void)
{
    char    *str = "andre christofori";
    int     fd = 1;

    printf("String: %s | Fd: %d\n", str, fd);
    ft_putstr_fd(str, fd);
}