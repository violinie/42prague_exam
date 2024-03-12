// print first parameter of the program

#include <stdio.h>

void    aff_first_param(char *first)
{
     if (first != NULL)
    {
        printf("%s\n", first);
    }
}

int main(int argc, char **argv)
{
    if (argc > 1)
        aff_first_param(argv[1]);
    return (0);
}

// compile: cc aff_first_param.c && ./a.out print just the first
// output: print