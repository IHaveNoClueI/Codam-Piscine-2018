/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_atoi_base.c                                      :+:    :+:           */
/*                                                      +:+                   */
/*   By: IHaveNoClueI <ctfx337@gmail.com>              +#+                    */
/*                                                    +#+                     */
/*   Created: 2018/10/21 21:51:01 by IHaveNoCl       #+#    #+#               */
/*   Updated: 2018/10/21 21:51:03 by IHaveNoCl      ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int g_size_base = 0;

int	check_in_base(char c, char *base)
{
	int i;

	i = 0;
	while(base[i] != '\0'){
		if(base[i] == c){
			return i;
		}
		++i;
	}
	return -1;
}

int ft_atoi_base(char *str, char *base)
{
	int i;
	int n;
	int x;
	int sign;

	i = 0;
	n = 0;
	x = 0;
	sign = 1;
	while(base[g_size_base] != '\0')
		++g_size_base;
	if(str[0] == '-'){
		sign = -1;
		++str;
	}
	while(str[i] != '\0'){
		x = check_in_base(str[i], base);
		if(x >= 0){
			n = (n * g_size_base) + x;
		}
		++i;
	}
	return n * sign;
}

int main()
{
	printf("%i", ft_atoi_base("-123", "0123456789"));
}
