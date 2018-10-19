/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_list.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: IHaveNoClueI <ctfx337@gmail.com>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2018/10/10 21:25:52 by IHaveNoClueI   #+#    #+#                */
/*   Updated: 2018/10/10 21:26:02 by IHaveNoClueI  ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

typedef struct		s_list
{
	void			*data;
	struct s_list	*next;
}					t_list;

#endif
