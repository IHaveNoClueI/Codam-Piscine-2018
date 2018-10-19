/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_create_elem.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: IHaveNoClueI <ctfx337@gmail.com>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2018/10/10 21:25:52 by IHaveNoClueI   #+#    #+#                */
/*   Updated: 2018/10/10 21:26:02 by IHaveNoClueI  ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list *head;

	head = NULL;
	head = malloc(sizeof(t_list));
	head->data = data;
	head->next = NULL;
	return (head);
}
