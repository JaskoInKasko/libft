/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsakanov <jsakanov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 10:47:40 by jsakanov          #+#    #+#             */
/*   Updated: 2023/09/18 10:47:58 by jsakanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
    new -> next = *lst; // sets the node 'new' at the beginning of the linked list (the head)
    *lst = new; // Updates the head of the linked list so that the node 'new' is the first node of the linked list
}
