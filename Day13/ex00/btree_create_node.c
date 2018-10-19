/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   btree_create_node.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: IHaveNoClueI <ctfx337@gmail.com>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2018/10/12 15:30:43 by IHaveNoClueI   #+#    #+#                */
/*   Updated: 2018/10/12 15:30:48 by IHaveNoClueI  ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree *tree;

	tree = NULL;
	tree = malloc(sizeof(t_btree));
	t_btree->left = 0;
	t_btree->right = 0;
	t_btree->item = item;
	return (tree);
}
