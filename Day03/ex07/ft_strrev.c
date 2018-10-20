/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strrev.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: IHaveNoClueI <ctfx337@gmail.com>              +#+                    */
/*                                                    +#+                     */
/*   Created: 2018/10/20 23:34:44 by IHaveNoCl       #+#    #+#               */
/*   Updated: 2018/10/20 23:34:56 by IHaveNoCl      ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
    int i;
    int end;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    end = i - 1;

    while (str[end] != 0)
    {
        end--;
    }
    return (0);
}
