#include <stdio.h>

int main(void){
    int population;
    double populationGrowth;

    scanf("%d", &population);
    scanf("%lf", &populationGrowth);

    printf("%d", (int) (population + (population * populationGrowth / 100)));
    return(0);
}
