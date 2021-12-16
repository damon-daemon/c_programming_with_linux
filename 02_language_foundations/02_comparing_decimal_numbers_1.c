#include <stdio.h>

int main(void){

    int diceRollOne;
    int diceRolleTwo;
    int diceTotal;

    scanf("%d", &diceRollOne);
    scanf("%d", &diceRolleTwo);

    diceTotal = diceRollOne + diceRolleTwo;

    if(diceTotal >= 10){
        printf("Special tax\n36");
    } else {
        printf("Regular tax\n%d", 2 * diceTotal);
    }

    return(0);
}
