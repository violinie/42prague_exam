// string to int (bonus: check if it can be an integer)

#include <stdio.h>

int    ft_atoi(char *s)
{
    int i;
    int converted;

    i = 0;
    converted = 0;
    while (s[i]) { 
         converted = converted * 10 + (s[i] - 48); // first turn: 0*10+shift x to be number; second turn previous *10 (shift to tens) +shift x to be number ...
        i++; 
    }
    return converted;
}

int main(void)
{
    char    s[] = "1";  

    ft_atoi(s);
    printf("%d", ft_atoi(s));
    return (0);
}

//++(bonus: check if it can be an integer) TODO