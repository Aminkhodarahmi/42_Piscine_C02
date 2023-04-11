#include <stdio.h>

int ft_str_is_numeric(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '0' || str[i] == '1' || str[i] == '2' || str[i] == '3' || str[i] == '4' || str[i] == '5' || str[i] == '6' || str[i] == '7' || str[i] == '8' || str[i] == '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int main(void)
{
	char	*src = "amin";
	printf ("result = %d \n", ft_str_is_numeric(src));
	return (0);
}
