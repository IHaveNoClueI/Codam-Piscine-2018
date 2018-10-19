/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_list_clear.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: IHaveNoClueI <ctfx337@gmail.com>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2018/10/10 21:38:48 by IHaveNoClueI   #+#    #+#                */
/*   Updated: 2018/10/10 21:38:49 by IHaveNoClueI  ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list *newlist;

	newlist = *begin_list;
	if (newlist->next == NULL)
	{
		free(newlist->next);
	}
	free(newlist->data);
}
