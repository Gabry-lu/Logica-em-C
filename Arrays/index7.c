#include <stdio.h>
int main(){
    int numero[3];

    for(int i =0; i < 3; i++ ){
        printf("Digite um numero: ");
        scanf("%d", &numero[i]);
    }

    printf("Os numero são :%d, %d e %d\n", numero[0], numero[1],numero[2]);
    

    

}