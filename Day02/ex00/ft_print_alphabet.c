/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_alphabet.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: IHaveNoClueI <ctfx337@gmail.com>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2018/09/27 11:00:51 by IHaveNoClueI   #+#    #+#                */
/*   Updated: 2018/09/27 12:42:20 by IHaveNoClueI  ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_alphabet(void)
{
	int		i;
	char	alphabet;

	while (i < 26)
	{
		alphabet = 'a' + i;
		ft_putchar(alphabet);
	}
}
