// reverse a string (modify it) + return pointer to the string

#include <stdio.h>

char *ft_strrev(char *s) {
    int length = 0;
    int i = 0;

    while (s[length] != '\0') {
        length++;
    }
    // reverse the string: swap characters from the start and end of the string, middle part will stop it (because everything after the middle part is already swaped)
    while (i < length / 2) {
        char temp = s[i]; // first round: temp = d
        s[i] = s[length - i - 1]; // first round = the last char to the first: s = resrever
        s[length - i - 1] = temp; // first round = the temp char to the last: s = resreved
        i++; 
    }
    return s; 
}

int main(void) {
    char s[] = "desrever";

    ft_strrev(s);
    printf("%s", s);
    return (0);
}