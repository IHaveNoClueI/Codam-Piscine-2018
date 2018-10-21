/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_putstr.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: IHaveNoClueI <ctfx337@gmail.com>              +#+                    */
/*                                                    +#+                     */
/*   Created: 2018/10/21 21:51:01 by IHaveNoCl       #+#    #+#               */
/*   Updated: 2018/10/21 21:51:03 by IHaveNoCl      ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

void ft_putstr(char *str)
{
    int index;

    index = 0;
    while (str[index] != '\0')
    {
        ft_putstr(str[index]);
        index++;
    }
}
