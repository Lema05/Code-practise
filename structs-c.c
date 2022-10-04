#include <stdio.h>
#include <string.h>



struct Player
{
    char name[12];
    int score;
};

int main(){

    // struct - collection of related members("variables)" which can be of different
    // data types listed in a block of memory



struct Player Player1;
struct Player Player2;

strcpy(Player1.name, "Allen");
Player1.score = 4;

strcpy(Player2.name, "Kipeno");
Player2.score = 5;

printf("%s\n", Player1.name);
printf("%d\n", Player1.score);

printf("%s\n", Player2.name);
printf("%d\n", Player2.score);

return 0;
}
