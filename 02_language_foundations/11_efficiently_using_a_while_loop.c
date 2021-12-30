#include <stdio.h>

int main(void){

    int days = 0;
    int population;
    int infected = 1; 

    scanf("%d", &population);

    while(population > infected){
        days++;
        infected = infected * 2;
    }

    printf("%d", days);

    return(0);
}
