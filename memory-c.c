#include <stdio.h>

int main()
{

    // memory = an array of bytes within RAM(street)
    //memory block = a single unit (byte) within memory, used
    //memory address = the adress of where a memory block is located (home adress)

    short a = 'X';
    int b = 'Y';
    double c = 'Z';

    printf("%d bytes\n", sizeof(a));
    printf("%d bytes\n", sizeof(b));
    printf("%d bytes\n", sizeof(c));


    printf("%p\n", &a);
    printf("%p\n", &b);
    printf("%p\n", &c);

    return 0;






}
