/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_reverse_alphabet.c                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: IHaveNoClueI <ctfx337@gmail.com>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2018/09/27 11:01:34 by IHaveNoClueI   #+#    #+#                */
/*   Updated: 2018/09/27 13:30:49 by IHaveNoClueI  ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char	c);

void	ft_print_reverse_alphabet(void)
{
	int		i;
	char	alphabet;

	i = 0;
	while (i < 26)
	{
		alphabet = 'z' - i;
		ft_putchar(alphabet);
	}
}
