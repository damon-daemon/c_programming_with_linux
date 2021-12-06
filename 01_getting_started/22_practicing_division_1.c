#include <stdio.h>

int main(void){
    double currentMoney;
    double pricePerBook;

    scanf("%lf", &currentMoney);
    scanf("%lf", &pricePerBook);

    printf("%d", (int) (currentMoney / pricePerBook));

    return(0);
}
