#include <stdio.h>

int main(void){

    double distanceInKilometers;

    scanf("%lf", &distanceInKilometers);

    printf("%.6lf", distanceInKilometers * 0.621371);

    return(0);
}
