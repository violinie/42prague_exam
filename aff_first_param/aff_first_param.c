// print first parameter of the program

#include <stdio.h>

int main(int argc, char **argv)
{
    printf("%s\n", argv[1]);
}

// compile: cc aff_first_param.c && ./a.out print just the first
// output: print