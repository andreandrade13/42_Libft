/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andchris <andchris1987@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 22:40:22 by andchris          #+#    #+#             */
/*   Updated: 2021/11/01 13:07:21 by andchris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int  get_digit(int n)
{
    unsigned int    numbers;
    int             digits;

    numbers = n;
    if (n < 0)
        numbers *= -1;
    digits = 0;
    while (numbers > 0)
    {
        numbers /= 10;
        digits++;
    }
    if (n <= 0)
        return (digits + 1);
    return (digits);
}

char    *ft_itoa(int n)
{
    char            *str;
    unsigned int    proxy;
    int             digits;
    int             thresh;

    digits = get_digit(n);
    str = (char *)malloc(sizeof(char) * (digits + 1));
    if (str == NULL)
        return (NULL);
    str[digits] = '\0';
    proxy = n;
    thresh = 0;
    if (n < 0)
    {
        proxy *= -1;
        str[0] = '-';
        thresh = 1;
    }
    while (digits > thresh)
    {
        str[--digits] = (proxy % 10) + '0';
        proxy /= 10;
    }
    return (str);
}