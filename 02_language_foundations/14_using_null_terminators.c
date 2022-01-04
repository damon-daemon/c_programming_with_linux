#include <stdio.h>

int main(void){

    char firstName[101];
    char lastName[101];
    int i;
    int numberOfNames;

    scanf("%d", &numberOfNames);

    for(i = 0; i < numberOfNames; i++){
        scanf("%s %s", firstName, lastName);
        printf("%s %s\n", lastName, firstName);
    }

    return(0);
}
