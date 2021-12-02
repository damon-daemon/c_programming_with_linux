#include <stdio.h>

int main(void){

    int i, j, k, n;
    char baseChar;
    char otherChar = '+';

    scanf("%c", &baseChar);

    for(i = 1; i < 6; i++){
        for(j = 0; j < 5 - i; j++){
            printf("%c", otherChar);
        }
        for(k = 0; k < (2 * i - 1); k++){
            printf("%c", baseChar);
        }
        for(n = 0; n < 5 - i; n++){
            printf("%c", otherChar);
        }
        printf("\n");
    }

    return(0);
}
