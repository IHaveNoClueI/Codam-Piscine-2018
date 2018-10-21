/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_spy.c                                            :+:    :+:           */
/*                                                      +:+                   */
/*   By: IHaveNoClueI <ctfx337@gmail.com>              +#+                    */
/*                                                    +#+                     */
/*   Created: 2018/10/21 21:51:01 by IHaveNoCl       #+#    #+#               */
/*   Updated: 2018/10/21 21:51:03 by IHaveNoCl      ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char const *argv[])
{
    char words[50];

    words = {"president", "attack", "Bauer"};
    int i;

    i = 0;
    if (argv[3] == 'squared')
    {
        write(1, "Alert!!!\n", 10);
    }

    return 0;
}
