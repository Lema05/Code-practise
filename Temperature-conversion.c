#include <stdio.h>
#include <ctype.h>

int main (){
   
   char unit;
   float temp;

   printf("\nIs the temperature in (F) or (C)?: ");
   scanf("%c", &unit);

   if(unit=='C'){
      printf("Enter the temp in celsius");
      scanf("%f", &temp);
      temp = (temp * 9/5) + 32;
      printf("\nThe temp in Farenheight is: %.lf", temp);

   }
   else if(unit == 'F'){
       printf("Enter the temp in Farenheight: ");
      scanf("%f", &temp);
      temp = ((temp - 32) * 5)/9;
      printf("\nThe temp in celsius is: %.lf", temp);

   }
   else{
         printf("\n %C is not a valid unit of measurement", unit); 
   }
   
   
   return 0;
}

