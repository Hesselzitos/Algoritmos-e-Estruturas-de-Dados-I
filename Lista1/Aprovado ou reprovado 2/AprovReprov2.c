#include <stdio.h>

int main(){
    float n1,n2,nf;

    scanf("%f %f", &n1, &n2);
    nf = (n1+n2)/2;

    if(nf>=60){
        printf("APROVADO \n");
    }else if(nf>=40) {
        printf("EXAME FINAL \n");
    }else{
        printf("REPROVADO \n");
    }

    return 0;
}