/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvenet <gvenet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 17:03:03 by gvenet            #+#    #+#             */
/*   Updated: 2020/11/25 18:14:23 by gvenet           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *l;

	if (alst)
	{
		if (!*alst)
		{
			*alst = new;
			return ;
		}
		l = *alst;
		if (new && l)
		{
			while (l->next)
				l = l->next;
			l->next = new;
		}
	}
}
