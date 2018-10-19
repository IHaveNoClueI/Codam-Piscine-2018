/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_takes_place.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: IHaveNoClueI <ctfx337@gmail.com>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2018/10/04 20:01:31 by IHaveNoClueI   #+#    #+#                */
/*   Updated: 2018/10/04 20:01:35 by IHaveNoClueI  ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	char str[34] = "THE FOLLOWING TAKES PLACE BETWEEN";

	if (hour >= 0 && hour <= 10)
	{
		printf("%s %d.00 A.M. AND %d.00 A.M.\n", str, hour, hour + 1);
	}
	if (hour == 11)
	{
		printf("%s %d.00 A.M. AND %d.00 A.M.\n", str, hour, hour + 1);
	}
	if (hour == 12)
	{
		printf("%s %d.00 A.M. AND %d.00 P.M.\n", str, hour, hour - 11);
	}
	if (hour >= 13 && hour <= 23)
	{
		printf("%s %d.00 P.M. AND %d.00 P.M.\n", str, hour - 12, hour - 11);
	}
	if (hour == 24)
	{
		printf("%s %d.00 P.M. AND %d.00 A.M.\n", str, hour - 12, hour - 23);
	}
}

int		main(int argc, char const *argv[])
{
	ft_takes_place(12);
	return (0);
}
