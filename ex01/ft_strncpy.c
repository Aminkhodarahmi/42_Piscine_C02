#include <stdio.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}

int main(void)
{
	char	src[] = "helllo Amin how are you?";
	char	dest[] = "Amin";
	unsigned int	n;

	n = 9;
	printf ("dest = %s \n", ft_strncpy(dest, src, n));
	return (0);
}
