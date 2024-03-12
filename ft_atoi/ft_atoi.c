// string to int (bonus: check if it can be an integer)

#include <stdio.h>

int    ft_atoi(char *s)
{
    int sum;
    int i;
  
    sum = 0; 
    i = 0;

    while (s[i]) { 
        sum = sum + s[i]; 
        i++; 
    }

    return sum; 
}

int main(void)
{
    char    s[] = "AB";  

    ft_atoi(s);
    printf("%d", ft_atoi(s));
    return (0);
}

//++(bonus: check if it can be an integer) TODO