#include <stdio.h>

//do while loop executes a block of code once, THEN checks a condition

int main(){

int number = 0;
int sum = 0;


do{
    printf("Enter a # above 0: ");
    scanf("%d", &number);
    if(number > 0)
    {
        sum += number;
    }

}while(number > 0);
printf("sum: %d", sum);
return 0;
}
