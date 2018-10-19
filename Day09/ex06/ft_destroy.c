/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_destroy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: IHaveNoClueI <ctfx337@gmail.com>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2018/10/04 23:57:08 by IHaveNoClueI   #+#    #+#                */
/*   Updated: 2018/10/04 23:57:11 by IHaveNoClueI  ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <ft_ultimator.h>

void	ft_destroy(char ***factory)
{
	int i;
	int o;

	i = 0;
	o = 0;
	while (factory[i])
	{
		while (factory[i][o])
		{
			free(factory[i][o]);
			o++;
		}
		free(factory[i]);
		i++;
	}
	free(factory);
}
