/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd_TEST.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andchris <andchris1987@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 08:58:01 by andchris          #+#    #+#             */
/*   Updated: 2021/11/02 08:59:34 by andchris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int main(void)
{
    int n = 20;
    int fd = 1;

    printf("Integer: %d | fd: %d\n", n, fd);
    ft_putnbr_fd(n, fd);
}