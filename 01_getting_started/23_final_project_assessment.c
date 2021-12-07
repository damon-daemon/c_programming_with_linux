#include <stdio.h>

int main(void){

    int diceToRoll;
    int redDice;
    int yellowDice;
    int greenDice;
    int i;
    double average = 0;

    scanf("%d", &diceToRoll);

    for(i = 1; i < (diceToRoll + 1); i++){
        scanf("%d %d %d", &redDice, &yellowDice, &greenDice );
        average = average + (greenDice * 100) + (yellowDice * 10) + redDice;
        printf("%d. you rolled: %d%d%d, current average: %.1lf\n", i, greenDice, yellowDice, redDice, (average / i));
    }

    return(0);
}
