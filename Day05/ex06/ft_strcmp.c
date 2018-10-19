int        ft_strcmp(char str1, char str2)
{
    while (str1 && (str1 == str2))
    {
        str1 += 1;
        str2 += 1;
    }
    return (str1 - str2);
}