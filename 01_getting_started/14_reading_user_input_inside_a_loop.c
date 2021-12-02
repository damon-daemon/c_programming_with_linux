#include <stdio.h>

int main(void){

    int numberOfRobots;
    int enginePower;
    int resistance;
    int weight;
    int height;
    int totalPower = 0;

    scanf("%d", &numberOfRobots);
    
    for(int i = 0; i < numberOfRobots; i++){
        scanf("%d %d %d %d", &weight, &height, &enginePower, &resistance);
        totalPower = totalPower + ((enginePower + resistance) * (height - weight));
    }

    printf("%d\n", totalPower);

    return(0);
}
