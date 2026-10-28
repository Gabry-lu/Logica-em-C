#include <stdio.h>
int main(){

    int numeros[5] = {5, 4, 3, 2, 1};
    int soma = 0;

    for(int i = 0; i <5; i++ ){
        soma = soma + numeros[i];
       
       

    }
    printf("%d\n", soma);
    return 0;
}