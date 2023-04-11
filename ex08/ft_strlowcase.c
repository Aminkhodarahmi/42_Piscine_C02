
#include <stdio.h>

char    *ft_strlowcase(char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		if (src[i] >= 'A' && src[i] <= 'z')
			{
				src[i] = src[i] + 32;
			}
		i++;
	}
	return (src);
}

int main(void)
{
	char    src[] = "Amin yalLFSGDLH OHFS.J";
	printf ("result = %s \n", ft_strlowcase(src));
	return (0);
}
