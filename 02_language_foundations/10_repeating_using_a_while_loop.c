#include <stdio.h>

int main(void){

    int expense = 0;
    int sum = 0;

    while(expense != -1){
        scanf("%d", &expense);
        if(expense != -1){
            sum = sum + expense;
        }
    }

    printf("%d", sum);

    return(0);
}
