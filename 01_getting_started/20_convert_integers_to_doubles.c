#include <stdio.h>

int main(void){
    int i;    
    int gradesToBeAveraged;
    double grade;
    double gradeTotal = 0;

    scanf("%d", &gradesToBeAveraged);

    for(i = 0; i < gradesToBeAveraged; i++){
        scanf("%lf", &grade);
        gradeTotal = gradeTotal + grade;
    }

    printf("%.2lf", (double) gradeTotal / gradesToBeAveraged);

    return(0);
}
