/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd_TEST.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andchris <andchris1987@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 20:46:45 by andchris          #+#    #+#             */
/*   Updated: 2021/11/01 20:46:45 by andchris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>


int main(void)
{
    char    str = 'a';
    int     fd = 1;

    printf("str: %c | fd: %d\n", str, fd);
    ft_putchar_fd(str, fd);
}