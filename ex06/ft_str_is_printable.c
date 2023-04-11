#include <stdio.h>

int ft_str_is_printable(char *src)
{
    int i;

    i = 0;
    while (src[i])
    {
        if (src[i] < 65 || src[i] > 122)
        {
            return (0);
        }
        i++;
    }

    return (1);
}

int main(void)
{
    char    src[] = "@";
    printf ("result = %d\n", ft_str_is_printable(src));
    return (1);
}
