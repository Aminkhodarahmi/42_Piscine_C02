
#include <stdio.h>

char    *ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if ((str[0] >= 'a') && (str[0] <= 'z')) str[0] -= 32;
	while (str[i])
	{
		if (str[i] == ' ')
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] = str[i + 1] - 32;
			} 
		}
		i++;
	}
	return (str);
}

int	main(void)
{
	char	str[] = "   amin     khodarahmi farzand";
	printf ("res = %s \n", ft_strcapitalize(str));
	return (0);
}







