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

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
		return (i);
	}
}
