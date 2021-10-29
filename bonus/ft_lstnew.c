/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andchris <andchris1987@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 10:07:25 by andchris          #+#    #+#             */
/*   Updated: 2021/10/29 10:15:14 by andchris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list  *ft_lstnew(void *content)
{
    t_list  *new_elem;
    
    if (!(new_elem = malloc(sizeof(t_list))))
        return (NULL);
    new_elem->content = content;
    new_elem->next = NULL;
    return (new_elem);
}