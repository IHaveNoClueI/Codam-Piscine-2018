/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_is_negative.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: IHaveNoClueI <ctfx337@gmail.com>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2018/09/27 11:02:39 by IHaveNoClueI   #+#    #+#                */
/*   Updated: 2018/09/27 11:02:41 by IHaveNoClueI  ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(char c);

void	ft_is_negative(int n)
{
	int n;

	if (n > 0)
		ft_putchar('P');
	else
		ft_putchar('N');
}
