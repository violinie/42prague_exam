// write wierd ABC (reversed, every other letter capital)

#include <unistd.h> 

void    maff_realpha()
{
    write(1, "ZyXwVuTsRqPoNmLkJiHgFeDcBa", 26);
}

int main(void)
{
    maff_realpha();
    return (0);
}

// returning ZyXwVuTsRqPoNmLkJiHgFeDcBa
// i dont know it the right output is ZyX or zYx