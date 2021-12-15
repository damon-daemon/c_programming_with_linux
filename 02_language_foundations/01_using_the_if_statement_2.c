#include <stdio.h>

int main(void){

    int hoursPassedNoon;
    int price;

    scanf("%d", &hoursPassedNoon);

    price = 10 + (hoursPassedNoon * 5);

    if(price  > 53){
        price = 53;
    }

    printf("%d", price);

    return(0);
}
