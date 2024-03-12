// return length of a string

#include <stdio.h>

int ft_count_len(char   *s)
{
    int i;

    i = 0;
    while(s[i])
    {
        i++;
    }
    return i;
}

int main(void)
{
    char    s[] = "Hello";

    ft_count_len(s);
    printf("%d", ft_count_len(s));
    return (0);
}