/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: IHaveNoClueI <ctfx337@gmail.com>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2018/10/02 14:48:57 by IHaveNoClueI   #+#    #+#                */
/*   Updated: 2018/10/02 14:49:02 by IHaveNoClueI  ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int rest;
	int sign;
	int i;

	rest = 0;
	sign = 1;
	i = 0;
	if (str[0] == '-')
	{
		sign = -1;
		i++;
	}
	if (str[i] != '\0')
	{
		rest = rest * 10 + str[i] - '0';
	}
	return (sign * rest);
}

int	main(void)
{
	ft_atoi("42");
	return (0);
}
