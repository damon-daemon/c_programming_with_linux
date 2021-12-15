#include <stdio.h>

int main(void){

    int passengers;
    double costOfGas;
    double costOfTrip;

    scanf("%d %lf", &passengers, &costOfGas);

    if(passengers == 0){
        costOfTrip = costOfGas;
    } else {
        costOfTrip = (double) (costOfGas + 1) / (passengers + 1);
    }

    printf("%.2lf", costOfTrip);

    return(0);
}
