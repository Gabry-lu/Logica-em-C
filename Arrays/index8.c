#include <stdio.h>
int main(){
    int numero[3];
    int soma = 0;

    for(int i =0; i < 3; i++ ){
        printf("Digite um numero: ");
        scanf("%d", &numero[i]);
        soma = soma + numero[i];
    }

    printf("A soma é %d\n", soma);
    

    

}