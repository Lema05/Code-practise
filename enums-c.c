#include <stdio.h>

enum Day{Sun = 1, Mon= 2, Tue=3, Wed=4, Thur=5, Fri=6, Sat=7};

int main()
{

    enum Day today = Fri;

    //printf("%d", today);


    if(today ==Sun || today == Sat)
    {
        printf("\nIt is the weekend! Party time!");
    }else {

        printf("\nI have to work today");
    }

    return 0;
}
