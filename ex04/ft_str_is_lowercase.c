#include <stdio.h>

int ft_str_is_lowercase(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] > 'a' && str[i] < 'z')
            {
                return (0);
            }
        i++;
    }
    return (1);
}

int main(void)
{
    char    src[] = "A";
    printf ("result = %d \n", ft_str_is_lowercase(src));
    return (0);
}
