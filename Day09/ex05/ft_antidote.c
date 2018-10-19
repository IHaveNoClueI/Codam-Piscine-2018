/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_antidote.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: IHaveNoClueI <ctfx337@gmail.com>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2018/10/04 23:21:49 by IHaveNoClueI   #+#    #+#                */
/*   Updated: 2018/10/04 23:21:52 by IHaveNoClueI  ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_antidote(int i, int j, int k)
{
	if ((i < j && j < k) || (i > j && j > k))
	{
		return (i);
	}
	if ((i < j && j < k) || (i > j && j > k))
	{
		return (j);
	}
	else
	{
		return (k);
	}
}

int	main(int argc, char const *argv[])
{
	ft_antidote(3, 1, 2);
	return (0);
}
