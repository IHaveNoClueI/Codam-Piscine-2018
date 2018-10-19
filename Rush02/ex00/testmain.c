/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   testmain.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: IHaveNoClueI <ctfx337@gmail.com>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2018/10/14 17:43:17 by IHaveNoClueI  #+#    #+#                 */
/*   Updated: 2018/10/14 21:26:40 by IHaveNoClueI  ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "rush2.h"

int		ft_readinglines(char *c124, char *c)
{
	int		newlines;
	int		i;

	i = 1;
	newlines = 0;
	while (i != 0)
	{
		if (*c == 'A' || *c == 'C' || *c == '\\' || *c == 'o' || *c == '/')
			c124[2] = *c;
		i = read(0, c, 1);
		if (*c == '\n')
			newlines++;
	}
	return (newlines);
}

void	ft_readingrush(char *c)
{
	char	c124[4];
	int		wh[2];
	int		i;

	i = 1;
	wh[0] = 0;
	wh[1] = 1;
	while (i < 3)
		c124[i++] = '\0';
	c124[0] = *c;
	while (*c != '\n' && i != 0)
	{
		i = read(0, c, 1);
		wh[0]++;
		if (*c == 'A' || *c == 'C' || *c == '\\' || *c == 'o')
			c124[1] = *c;
	}
	if (i == 0)
	{
		ft_which_rush(c124, wh[1], 1);
		return ;
	}
	wh[1] = ft_readinglines(c124, c);
	ft_which_rush(c124, wh[0], wh[1]);
	return ;
}

int		main(int argc, char **argv)
{
	char c1[1];

	if (argc > 1)
	{
		ft_putstr("Error : unforseen arguments\t: none required\n");
		ft_putstr("\tfirst unrequired argument\t: ");
		ft_putstr(argv[1]);
		return (0);
	}
	argc = read(0, c1, 1);
	if (argc == 0)
	{
		ft_putstr("error : no output to be read.\n");
		ft_putstr("\tPossibly any rush with negative arguments\n");
		ft_putstr("\tPossibly forgotten input_stream.\n");
		return (0);
	}
	if (*c1 == '\n')
	{
		ft_putrushfour(1, 1);
		return (0);
	}
	ft_readingrush(c1);
	return (0);
}
