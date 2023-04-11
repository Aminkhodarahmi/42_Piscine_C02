#include <stdio.h>

char	*ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		dest[i] = src [i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char	src[] = "amin kkhodarahmi";
	char	dest[] = "yalda";
	printf ("res = %s \n", ft_strlcpy(dest, src, 8));
	return (0);
}
