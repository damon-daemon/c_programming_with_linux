#include <stdio.h>

int main(void){

    int totalMatches;
    int boxSize;

    scanf("%d", &totalMatches);
    scanf("%d", &boxSize);

    printf("%d\n", totalMatches / boxSize);
    printf("%d\n", totalMatches % boxSize);

    return(0);
}
