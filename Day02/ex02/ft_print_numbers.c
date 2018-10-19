/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_numbers.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: IHaveNoClueI <ctfx337@gmail.com>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2018/09/27 11:02:14 by IHaveNoClueI   #+#    #+#                */
/*   Updated: 2018/09/27 11:02:16 by IHaveNoClueI  ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_numbers(void)
{
	int		i;
	char	digit;

	i = 0;
	while (i < 10)
	{
		digit = '0' + i;
		ft_putchar(digit);
	}
}
