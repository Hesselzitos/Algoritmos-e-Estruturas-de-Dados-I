#include <stdio.h>

int main(){
    int dividendo,divisor,resultadoDivisao;

    scanf("%d %d", &dividendo, &divisor);
    resultadoDivisao=dividendo/divisor;
    printf("%d %d \n",resultadoDivisao,dividendo%divisor);

    return 0;
}