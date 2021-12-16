#include <stdio.h>

int main(void){

    int numberOfPlayers;
    int playerWeight;
    int teamOneWeight = 0;
    int teamTwoWeight = 0;
    int i;

    scanf("%d", &numberOfPlayers);

    for(i = 1; i <= numberOfPlayers * 2; i++){
        scanf("%d", &playerWeight);
        if(i % 2 != 0){
            teamOneWeight = teamOneWeight + playerWeight;
        } else {
            teamTwoWeight = teamTwoWeight + playerWeight;
        }
    }

    if(teamOneWeight > teamTwoWeight){
        printf("Team 1 has an advantage\n");
    } else {
        printf("Team 2 has an advantage\n");
    }

    printf("Total weight for team 1: %d\n", teamOneWeight);
    printf("Total weight for team 2: %d\n", teamTwoWeight);

    return(0);
}
