#include <stdio.h>

int main(void){

    double poundsOfCement;

    scanf("%lf", &poundsOfCement);

    printf("%d", (int) ((poundsOfCement / 120) + 1) * 45);

    return(0);
}
