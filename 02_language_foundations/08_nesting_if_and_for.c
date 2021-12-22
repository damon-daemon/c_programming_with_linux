#include <stdio.h>

int main(void){

    int numberOfCities;
    int i;
    int largeCities = 0;
    int population;

    scanf("%d", &numberOfCities);

    for(i = 0; i < numberOfCities; i++){
        scanf("%d", &population);
        if(population > 10000){
            largeCities++;
        }
    }

    printf("%d", largeCities);

    return(0);
}
