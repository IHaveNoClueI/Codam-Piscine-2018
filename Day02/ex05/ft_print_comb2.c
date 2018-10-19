/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_comb2.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: IHaveNoClueI <ctfx337@gmail.com>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2018/09/27 16:49:39 by IHaveNoClueI   #+#    #+#                */
/*   Updated: 2018/09/27 16:49:46 by IHaveNoClueI  ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	comma(int i, int j, int n, int k)
{
	if (!(i == 9 && j == 9 && n == 9 && k == 9))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

int	main(void)
{
	int i;
	int j;
	int n;
    int k;

    i = 0;
	while (i <= 9)
	{
		j = 0;
		while (j <= 8)
		{
			n = 0;
			while (n <= 9)
			{
                k = 0;
                while (k <= 9)
                {
                    ft_putchar('0' + i);
                    ft_putchar('0' + j);
                    ft_putchar(' ');
                    ft_putchar('0' + n);
                    ft_putchar('0' + k);
                    comma(i, j, n, k);
                    k++;
                }
                n++;
			}
			j++;
		}
		i++;
	}
	return (0);
}
