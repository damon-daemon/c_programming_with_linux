#include <stdio.h>

int main(void){

    int ingredientCount;
    int i;
    double price[10];
    double weight[10];
    double cost = 0;

    scanf("%d", &ingredientCount);

    for(i = 0; i < ingredientCount; i++){
        scanf("%lf", &price[i]);
    }

    for(i = 0; i < ingredientCount; i++){
        scanf("%lf", &weight[i]);
        cost = cost + (price[i] * weight[i]);
    }

    printf("%.6lf", cost);

    return(0);
}
