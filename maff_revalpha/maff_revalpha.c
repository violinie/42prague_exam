// write wierd ABC (reversed, every other letter capital)

#include <unistd.h> 

void    maff_realpha(char   *abc)
{
    int length = 0;
    // this will get us at the end of the string
    while (abc[length] != '\0') {
        length++;
    }
    int i = length - 1;
    while (i >= 0) {
        char to_print;
        if ((length - i) % 2 == 0) // for even (modulo 2 is always 0): make it uppercase
            to_print = abc[i] - 32; // convert to uppercase == the same as ```abc[i] - ('a' - 'A')```
        else 
            to_print = abc[i];  // just print the letter
        write(1, &to_print, 1);
        i--;
    }
}

int main(void)
{
    char    abc[] = "abcdefghijklmnopqrstuvwxyz";

    maff_realpha(abc);
    return (0);
}

// returning zYxWvUtSrQpOnMlKjIhGfEdCbA
// i dont know it the right output is ZyX or zYx