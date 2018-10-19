/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_collatz_conjecture.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: IHaveNoClueI <ctfx337@gmail.com>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2018/10/05 05:12:04 by IHaveNoClueI   #+#    #+#                */
/*   Updated: 2018/10/05 05:12:10 by IHaveNoClueI  ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	if (base <= 1)
	{
		return (1);
	}
	else
	{
		return (base * ft_collatz_conjecture(base - 1));
	}
}
