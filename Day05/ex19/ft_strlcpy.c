/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strncpy.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: IHaveNoClueI <ctfx337@gmail.com>              +#+                    */
/*                                                    +#+                     */
/*   Created: 2018/10/21 21:51:01 by IHaveNoCl       #+#    #+#               */
/*   Updated: 2018/10/21 21:51:03 by IHaveNoCl      ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

static int		ft_strlen(char *str)
{
	int		i;
	int		len;

	i = 0;
	while (str[i])
		i += 1;
		len = i;
	return (i);
}

static char		*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while ((i < len) && src[i])
	{
		dest[i] = src[i];
		i += 1;
	}
	while (i < len)
		dest[i++] = '\0';
	return (dest);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	ft_strncpy(dest, src, size);
	return (ft_strlen(src));
}
