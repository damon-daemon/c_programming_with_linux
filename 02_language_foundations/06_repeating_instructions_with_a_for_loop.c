#include <stdio.h>

int main(void){

    int boxCars;
    double weightTotal = 0;
    double weightAverage;
    int i;

    scanf("%d", &boxCars);

    double boxCarArray[boxCars];

    for(i = 0; i < boxCars; i++){
        scanf("%lf", &boxCarArray[i]);
    }

    for(i = 0; i < boxCars; i++){
        weightTotal = weightTotal + boxCarArray[i];
    }
    
    weightAverage = weightTotal / boxCars;

    for(i = 0; i < boxCars; i++){
        printf("%.1lf\n", weightAverage - boxCarArray[i]);
    }

    return(0);
}
