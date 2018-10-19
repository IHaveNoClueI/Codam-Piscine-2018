/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   which_rush.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: IHaveNoClueI <ctfx337@gmail.com>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2018/10/13 16:03:49 by IHaveNoClueI  #+#    #+#                 */
/*   Updated: 2018/10/14 20:16:49 by IHaveNoClueI  ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "rush2.h"

void	ft_putrushfour(int x, int y)
{
	if (x == 1 && y == 1)
	{
		write(1, "[rush-02] [1] [1] || [rush-03]", 30);
		write(1, " [1] [1] || [rush-04] [1] [1]\n", 30);
	}
	else if (x == 0 && y == 0)
	{
		write(1, "[rush-00] [0] [0] || ", 22);
		write(1, "[rush-01] [0] [0] || ", 22);
		write(1, "[rush-02] [0] [0] || ", 22);
		write(1, "[rush-03] [0] [0] || ", 22);
		write(1, "[rush-04] [0] [0]\n", 19);
	}
	else
	{
		write(1, "[rush-04] [", 11);
		ft_putnbr(x);
		write(1, "] [", 3);
		ft_putnbr(y);
		write(1, "]\n", 2);
	}
}

void	ft_which_y(char *s123, int x)
{
	if (s123[1] == 'C')
	{
		write(1, "[rush-03] [", 11);
		ft_putnbr(x);
		write(1, "] [1] || [rush-04] [", 20);
		ft_putnbr(x);
		write(1, "] [1]\n", 6);
	}
	else if (s123[1] == 'A')
	{
		write(1, "[rush-02] [", 11);
		ft_putnbr(x);
		write(1, "] [1]\n", 6);
	}
}

void	ft_which_x(char *s123, int y)
{
	if (s123[2] == 'C')
	{
		write(1, "[rush-02] [1] [", 16);
		ft_putnbr(y);
		write(1, "] || [rush-04] [1] [", 21);
		ft_putnbr(y);
		write(1, "]\n", 2);
	}
	else if (s123[2] == 'A')
	{
		write(1, "[rush-03] [1] [", 16);
		ft_putnbr(y);
		write(1, "]\n", 2);
	}
}

void	ft_which_a(char *s123, int x, int y)
{
	if (x == 1 && y == 1)
		ft_putrushfour(x, y);
	else if (x == 1)
		ft_which_x(s123, y);
	else if (y == 1)
		ft_which_y(s123, x);
	else if (s123[1] == 'A')
	{
		write(1, "[rush-02] [", 11);
		ft_putnbr(x);
		write(1, "] [", 3);
		ft_putnbr(y);
		write(1, "]\n", 2);
	}
	else if (s123[1] == 'C' && s123[2] == 'C')
	{
		write(1, "[rush-03] [", 11);
		ft_putnbr(x);
		write(1, "] [", 3);
		ft_putnbr(y);
		write(1, "]\n", 2);
	}
	else if (s123[1] == 'C' && s123[2] == 'A')
		ft_putrushfour(x, y);
}

void	ft_which_rush(char *s123, int x, int y)
{
	if (s123[0] == 'o')
	{
		write(1, "[rush-00] [", 11);
		ft_putnbr(x);
		write(1, "] [", 3);
		ft_putnbr(y);
		write(1, "]\n", 2);
	}
	else if (s123[0] == '/')
	{
		write(1, "[rush-01] [", 11);
		ft_putnbr(x);
		write(1, "] [", 3);
		ft_putnbr(y);
		write(1, "]\n", 2);
	}
	else if (s123[0] == 'A')
		ft_which_a(s123, x, y);
	else if (x == 0 && y == 0)
		ft_putrushfour(x, y);
	else
		write(1, "Input is not any of the rushes.\n", 32);
}
