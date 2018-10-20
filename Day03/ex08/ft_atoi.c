/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_atoi.c                                           :+:    :+:           */
/*                                                      +:+                   */
/*   By: IHaveNoClueI <ctfx337@gmail.com>              +#+                    */
/*                                                    +#+                     */
/*   Created: 2018/10/20 23:11:16 by IHaveNoCl       #+#    #+#               */
/*   Updated: 2018/10/20 23:11:19 by IHaveNoCl      ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int result;
	int sign;
	int i;

	result = 0;
	sign = 1;
	i = 0;

	if (str[0] == '-')
	{
		sign = -1;
		i++;
	}

	while (str[i] != '\0')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}

	return (sign * result);
}
