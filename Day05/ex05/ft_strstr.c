char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int b;

	i = 0;
	while (str[i] != '\0')
	{
		b = 0;
		while (to_find[b] == str[i + b])
		{
			if (to_find[b + 1] == '\0')
			{
				return (str + i);
			}
			b++;
		}
		i++;
	}
	return (0);
}