/* Write a program that takes a string, and displays the first 'a' character it encounters in it, followed by a newline. 
If there are no 'a' characters in the string, the program just writes a newline. 
If the number of parameters is not 1, the program displays 'a' followed by a newline. */

#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    if (argc > 1)
        i = 0;
        while (argv[1])
        {
            if (argv[1][i] == 'a')
            {
                write(1, "a\n", 2);
                return 0;
            }
            else 
                write(1, "\n", 1);
            i++;
        }
    return (0);
}

// compile: cc aff_a.c && ./a.out "aha"