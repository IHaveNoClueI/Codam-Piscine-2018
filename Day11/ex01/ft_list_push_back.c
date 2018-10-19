/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_list_push_back.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: IHaveNoClueI <ctfx337@gmail.com>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2018/10/10 21:37:33 by IHaveNoClueI   #+#    #+#                */
/*   Updated: 2018/10/10 21:37:38 by IHaveNoClueI  ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *newlist;

	newlist = *begin_list;
	if (newlist == NULL)
	{
		newlist = ft_create_elem(data);
	}
	else
	{
		while (newlist->next)
		{
			newlist = newlist->next;
		}
		newlist->next = ft_create_elem(data);
	}
}
