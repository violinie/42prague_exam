// swap values of two variables, prototype: ft_swap(int *a, *int b);

#include <stdio.h>

void    ft_swap(int *a, int *b)
{
    int s;

    s = *a;
    *a = *b;
    *b = s;
}

int main(void)
{
    int a = 5;
    int b = 10; 

    printf("before swap: a = %d, b = %d\n", a, b); 
    ft_swap(&a, &b);
    printf("after swap: a = %d, b = %d\n", a, b); 
    return (0);
}