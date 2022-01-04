#include <stdio.h>

int main(void){

    char word[100];
    int wordCount;
    int i;
    int j = 0;
    int largestWordCount = 0;

    scanf("%d", &wordCount);

    for(i = 0; i < wordCount; i++){
        scanf("%s", word);
        while(word[j] != '\0'){
            j++;
        }
        if(j > largestWordCount){
            largestWordCount = j;
        }
    }

    printf("%d\n", largestWordCount);

    return(0);
}
