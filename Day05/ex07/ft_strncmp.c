/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strncmp.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: IHaveNoClueI <ctfx337@gmail.com>              +#+                    */
/*                                                    +#+                     */
/*   Created: 2018/10/21 21:51:01 by IHaveNoCl       #+#    #+#               */
/*   Updated: 2018/10/21 21:51:03 by IHaveNoCl      ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (s1[i] && i < n)
	{
		if (s2[i] == '\0')
			return (1);
		if (s1[i] > s2[i])
			return (1);
		else if (s1[i] < s2[i])
			return (-1);
		i++;
	}
	if (s2[i] != '\0' && i < n)
		return (-1);
	return (0);
}
