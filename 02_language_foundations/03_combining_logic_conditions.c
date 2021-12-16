#include <stdio.h>

int main(void){

    int age;
    int weightOfLuggage;

    scanf("%d", &age);
    scanf("%d", &weightOfLuggage);

    if(age == 60){
        printf("0");
    } 
    else if(age < 10){
        printf("5");
    }
    else if(weightOfLuggage > 20) {
        printf("40");
    }
    else {
        printf("30");
    }

    return(0);
}
