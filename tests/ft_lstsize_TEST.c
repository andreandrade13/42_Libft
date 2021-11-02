/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_TEST.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andchris <andchris1987@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 09:36:06 by andchris          #+#    #+#             */
/*   Updated: 2021/11/02 09:43:27 by andchris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

static void print_output(char const *s)
{
    int len;

    len = 0;
    while (s[len])
        len++;
    write(1, "\n", 1);
}

static void print_output2(int n)
{
    char    c;

    if (n >= 10)
        print_output2(n / 10);
    c = n % 10 + '0';
    write(1, &c, 1);
}

int main(void)
{
    t_list  *elem;
    char    str[] = "Andre Christofori de Andrade";
    int     i;

    if (!(elem = ft_lstnew(str)))
        print_output("NULL");
    else
    {
        if (!(elem->content))
            print_output("NULL");
        else
            print_output(elem->content);
        if (!(elem->next))
        {
            write(1, "\n", 1);
            print_output("NULL");
        }
    }
    write(1, "-", 1);

    i = 42;
}