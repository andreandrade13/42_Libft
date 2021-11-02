/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_TEST.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andchris <andchris1987@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 09:44:54 by andchris          #+#    #+#             */
/*   Updated: 2021/11/02 09:52:59 by andchris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <string.h>
#include <stdio.h>

static t_list *lst_newone(void *content)
{
    t_list  *elem;

    elem = (t_list *)malloc(sizeof(t_list));
    if (!elem)
        return (NULL);
    if (!content)
        elem->content = NULL;
    else
        elem->content = content;
    elem->next = NULL;
    return (elem);
}

int main(void)
{
    int     i;
    char    *content;
    t_list  *val;
    t_list  *elem1;
    t_list  *elem2;
    t_list  *elem3;
    t_list  *elem4;
    char    *str1 = strdup("Andre");
    char    *str2 = strdup("Christofori");
    char    *str3 = strdup("de");
    char    *str4 = strdup("Andrade");

    elem1 = lst_newone(str1);
    elem2 = lst_newone(str2);
    elem3 = lst_newone(str3);
    elem4 = lst_newone(str4);

    elem1->next = elem2;
    elem2->next = elem3;
    elem3->next = elem4;
    val = ft_lstlast(elem1);
    i = 0;
    content = val->content;
    while (content[i])
        write(1, &(content[i++]), 1);
    write(1, "\n", 1);
    elem1->next = NULL;
    val = ft_lstlast(elem1);
    content = val -> content;
}