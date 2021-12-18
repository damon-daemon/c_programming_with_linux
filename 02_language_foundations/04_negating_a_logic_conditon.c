#include <stdio.h>

int main(void){

    int leafletCount;
    int treeHeight;

    scanf("%d", &treeHeight);
    scanf("%d", &leafletCount);

    if((treeHeight <= 5) && (leafletCount >= 8)){
        printf("Tinuviel");
    }
    else if ((treeHeight >= 10) && (leafletCount >= 10)){
        printf("Calaelen");
    }
    else if ((treeHeight <= 8) && (leafletCount <= 5)){
        printf("Calaelen");
    }
    else if ((treeHeight >= 12) && (leafletCount <= 7)){
        printf("Dorthonion");
    }
    else {
        printf("Uncertain");
    }

    return(0);
}
