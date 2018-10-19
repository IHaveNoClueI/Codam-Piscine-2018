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
