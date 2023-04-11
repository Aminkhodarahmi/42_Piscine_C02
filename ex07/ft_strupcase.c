
#include <stdio.h>

char    *ft_strupcase(char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		if (src[i] >= 'a' && src[i] <= 'z')
			{
				src[i] = src[i] - 32;
			}
		i++;
	}
	return (src);
}

int main(void)
{
	char    src[] = "Amin yalda golshani fatemeh khodarahmi";
	printf ("result = %s \n", ft_strupcase(src));
	return (0);
}
