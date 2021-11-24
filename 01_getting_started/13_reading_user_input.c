#include <stdio.h>

int main(void){

    int input;
    scanf("%d", &input);

    for(int i=0; i <= 10; i++){
        printf("%dx%d = %d\n", i, input, i*input);
    }
    return(0);
}
