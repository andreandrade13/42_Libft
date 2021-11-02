/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_TEST.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andchris <andchris1987@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 10:55:57 by andchris          #+#    #+#             */
/*   Updated: 2021/11/02 11:03:17 by andchris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <string.h>

static void print_output(t_list *elem)
{
    int len;

    len = 0;
    while (((char *)elem->content)[len])
        len++;
    write(1, elem->content, len);
    write(1, "\n", 1);
}

static void del(void *content)
{
    free(content);
}

t_list  *lst_newone(void *content)
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

    ft_lstdelone(elem3, &del);
    if (elem1)
        print_output(elem1);
    else
        write(1, "NULL", 4);
    if (elem2)
        print_output(elem2);
    else
        write(1, "NULL", 4);
    if (elem4)
        print_output(elem4);
    else
        write(1, "NULL", 4);

    return (0);
}