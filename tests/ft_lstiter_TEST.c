/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_TEST.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andchris <andchris1987@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:17:08 by andchris          #+#    #+#             */
/*   Updated: 2021/11/02 11:26:27 by andchris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <string.h>

static void inser_x(void *elem)
{
    int     len;
    char    *content;

    len = 0;
    content = (char *)elem;
    while (content[len])
        content[len++] = 'x';
}

static void print_output(t_list *elem)
{
    int len;

    while (elem)
    {
        len = 0;
        while (((char *)elem->content)[len])
            len++;
        write(1, elem->content, len);
        write(1, "\n", 1);
        elem = elem->next;
    }
}

static t_list   *lst_newone(void *content)
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

    ft_lstiter(elem1, &inser_x);
    print_output(elem1);

    return (0);
}