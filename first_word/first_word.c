// print first word (not counting spaces or tab)

#include <unistd.h>

void    first_word(char *w)
{
    int i = 0;

    int start = i; // start of the first word
    while (w[i] != ' ' && w[i] != '\t' && w[i] != '\0')  // if its not space/tab/end of the string
        i++;
    int length = i - start; // length of the first word
    if (length > 0) 
        write(1, w + start, length);
}
 

int main(void)
{
    char w[] = "first word";
    first_word(w);
    return (0);
}