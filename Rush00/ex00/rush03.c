/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rush03.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: clie-kwi <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2018/09/30 21:33:49 by clie-kwi      #+#    #+#                 */
/*   Updated: 2018/09/30 22:46:20 by clie-kwi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	fl_row(int x)
{
	int c;

	c = 1;
	if (c == 1)
	{
		ft_putchar('A');
		c++;
	}
	while (c > 1 && c < x)
	{
		ft_putchar('B');
		c++;
	}
	if (c == x)
	{
		ft_putchar('C');
		ft_putchar('\n');
	}
}

void	mid(int x)
{
	int c;

	c = 1;
	if (c == 1)
	{
		ft_putchar('B');
		c++;
	}
	while (c > 1 && c < x)
	{
		ft_putchar(' ');
		c++;
	}
	if (c == x)
	{
		ft_putchar('B');
		ft_putchar('\n');
	}
}

int		rush(int x, int y)
{
	int row;

	row = 1;
	if (x <= 0 || y <= 0)
	{
		return (0);
	}
	if (row == 1)
	{
		fl_row(x);
		row++;
	}
	while (row > 1 && row < y)
	{
		mid(x);
		row++;
	}
	if (row == y)
	{
		fl_row(x);
	}
	return (0);
}
