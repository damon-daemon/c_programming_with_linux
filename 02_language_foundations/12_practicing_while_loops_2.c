#include <stdio.h>

int main(void){

    int maxTmp;
    int minTmp;
    int currentTmp;

    scanf("%d %d", &minTmp, &maxTmp);

    while(currentTmp != -999){
        scanf("%d", &currentTmp);
        if (currentTmp == -999){
            break;
        }
        else if (currentTmp >= minTmp && currentTmp <= maxTmp){
            printf("Nothing to report\n");
        } 
        else if ((currentTmp < minTmp || currentTmp > maxTmp) && currentTmp != -999) {
            printf("Alert!\n");
            break;
        }
        
    }

    return(0);
}
