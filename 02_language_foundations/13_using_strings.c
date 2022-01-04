#include <stdio.h>

int main(void){

    char word[101];
    int i;
    int j;

    scanf("%d %s", &j, word);

    for(i = 0; i < j; i++){
        printf("%s\n", word);
    }

    return(0);
}
