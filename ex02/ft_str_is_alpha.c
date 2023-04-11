#include <stdio.h>

int ft_str_is_alpha(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
        {
            return (0);
        }
        i++;
    }
    return (1);
}

int main(void)
{
    char    src[] = "amin";
    printf ("result = %d \n", ft_str_is_alpha(src));
    return (0);
}
