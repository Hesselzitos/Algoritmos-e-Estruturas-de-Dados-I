#include <stdio.h>

int main(){
    int nMAX,nLido;

    scanf("%d", &nLido);
    nMAX = nLido;
    while(nLido>=0){
        if(nLido>nMAX){
            nMAX=nLido;
        }
        scanf("%d", &nLido);
    }
    if(nMAX<0){
        printf("nenhum numero informado \n");
    } else {
        printf("%d \n",nMAX);
    }
    return 0;
}