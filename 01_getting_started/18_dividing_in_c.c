#include <stdio.h>

int main(void){

    double tempInCels;

    scanf("%lf", &tempInCels);

    printf("%.1lf", tempInCels * 9.0 / 5.0 + 32.0);

    return(0);
}
