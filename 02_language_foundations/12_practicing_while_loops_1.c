#include <stdio.h>

int main(void){

    int correctNumber;
    int guessNumber;
    int tries = 0;

    scanf("%d", &correctNumber);

    while(correctNumber != guessNumber){
        scanf("%d", &guessNumber);
        if (guessNumber > correctNumber){
            printf("it is less\n");
        } if (guessNumber < correctNumber) {
            printf("it is more\n");
        }
        tries++;
        
    }

    printf("Number of tries needed:\n%d", tries);

    return(0);
}
