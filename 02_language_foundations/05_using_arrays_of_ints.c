#include <stdio.h>

int main(void){

    int recipeQuantity[10];
    int recipeQuantityIndex;

    scanf("%d %d %d %d %d %d %d %d %d %d", &recipeQuantity[0], &recipeQuantity[1], &recipeQuantity[2], &recipeQuantity[3], &recipeQuantity[4], &recipeQuantity[5], &recipeQuantity[6], &recipeQuantity[7], &recipeQuantity[8], &recipeQuantity[9]);
    scanf("%d", &recipeQuantityIndex);

    printf("%d", recipeQuantity[recipeQuantityIndex]);

    return(0);
}
