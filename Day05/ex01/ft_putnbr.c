/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: IHaveNoClueI <ctfx337@gmail.com>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2018/10/02 14:45:56 by IHaveNoClueI   #+#    #+#                */
/*   Updated: 2018/10/02 14:46:03 by IHaveNoClueI  ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int i;

	if (nb < 0)
	{
		i = -nb;
		ft_putchar('-');
	}
	else
	{
		i = nb;
	}
	if (i > 9)
	{
		ft_putnbr(i / 10);
	}
	ft_putchar((i % 10) + '0');
}
