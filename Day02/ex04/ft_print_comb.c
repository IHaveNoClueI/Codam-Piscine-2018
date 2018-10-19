/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_comb.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: IHaveNoClueI <ctfx337@gmail.com>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2018/09/27 11:03:00 by IHaveNoClueI   #+#    #+#                */
/*   Updated: 2018/10/17 18:21:23 by IHaveNoClueI  ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	comma(int firstdigit, int seconddigit, int thirthdigit)
{
	if (!(firstdigit == 7 && seconddigit == 8 && thirthdigit == 9))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

int	main(void)
{
	int firstdigit;
	int seconddigit;
	int thirthdigit;

	firstdigit = 0;

	while (firstdigit <= 7)
	{
		seconddigit = firstdigit + 1;
		while (seconddigit <= 8)
		{
			thirthdigit = seconddigit + 1;
			while (thirthdigit <= 9)
			{
				ft_putchar('0' + firstdigit);
				ft_putchar('0' + seconddigit);
				ft_putchar('0' + thirthdigit);
				comma(firstdigit, seconddigit, thirthdigit);
				thirthdigit++;
			}
			seconddigit++;
		}
		firstdigit++;
	}
	return (0);
}
