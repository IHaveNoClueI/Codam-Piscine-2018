/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_list_push_front.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: IHaveNoClueI <ctfx337@gmail.com>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2018/10/10 21:37:52 by IHaveNoClueI   #+#    #+#                */
/*   Updated: 2018/10/10 21:37:55 by IHaveNoClueI  ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *newlist;

	newlist = *begin_list;
	if (newlist = data)
	{
		newlist = ft_create_elem(data);
	}
}
