// write wierd ABC (reversed, every other letter capital)

#include <unistd.h> 

void    maff_realpha()
{
    int i = 122; // ASCII 'z'
    int counter = 0; 

    while (i >= 97) { // 97 == ASCII 'a'
        char to_print;

        if (counter % 2 == 0) {
            to_print = i - 32; // make it uppercase (shifting the ascii value)
        } else {
            to_print = i;
        }

        write(1, &to_print, 1); 
        i--; 
        counter++;
    }
}

int main(void)
{
    maff_realpha();
    return (0);
}

// returning ZyXwVuTsRqPoNmLkJiHgFeDcBa
// i dont know it the right output is ZyX or zYx