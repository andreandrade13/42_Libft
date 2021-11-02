/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_TEST.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andchris <andchris1987@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 09:04:57 by andchris          #+#    #+#             */
/*   Updated: 2021/11/02 09:19:18 by andchris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <string.h>

void    print_output(char const *s)
{
    int len;

    len = 0;
    while (s[len])
        len++;
    write(1, s, len);
}

int main(void)
{
    t_list  *elem;
    char    str[] = "Andre christofori de Andrade";

    if (!(elem = ft_lstnew(str)))
        print_output("NULL");
    else
    {
        if (!(elem->content))
            print_output("NULL");
        else
        {
            print_output(elem->content);
        }
        if (!(elem->next))
        {
            write(1, "\n", 1);
            print_output("NULL\n");
        }
    }
    return (0);
}