/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_list.h                                           :+:    :+:           */
/*                                                      +:+                   */
/*   By: IHaveNoClueI <ctfx337@gmail.com>              +#+                    */
/*                                                    +#+                     */
/*   Created: 2018/10/21 21:51:01 by IHaveNoCl       #+#    #+#               */
/*   Updated: 2018/10/21 21:51:03 by IHaveNoCl      ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */


#ifndef FT_LIST_H
#define FT_LIST_H

typedef	struct		s_list
{
	int				val;
	struct s_list	*next;
	void			*data;
}					t_list;

t_list	*ft_create_elem(void *data);

#endif
