/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_recursive_factorial.c                            :+:    :+:           */
/*                                                      +:+                   */
/*   By: IHaveNoClueI <ctfx337@gmail.com>              +#+                    */
/*                                                    +#+                     */
/*   Created: 2018/10/21 21:51:01 by IHaveNoCl       #+#    #+#               */
/*   Updated: 2018/10/21 21:51:03 by IHaveNoCl      ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_recursive_factorial(int nb)
{
	if (nb == 1)
	{
        return 1;
    }
    else
	{
        return(nb*ft_recursive_factorial(nb-1));
		printf("Recursive: %i", nb);
    }
	return 0;

}

int main()
{
	ft_recursive_factorial(4);
	printf("Recursive: %i", nb);
	return 0;
}
