#include <stdio.h>

//nested loop = a loop inside another loop

int main(){

    int rows;
    int columns;
    char symbols;

    printf("\nEnter # of rows: ");
    scanf("%d", &rows);
    
    printf("\nEnter # of columns: ");
    scanf("%d", &columns);

    for (int i = 1; i <= rows; i++){
        for(int j=1; j<= columns; j++)
        {
                printf("%d", j);
        }
        printf("\n");

    }

return 0;
}
