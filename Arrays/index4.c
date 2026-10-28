#include <stdio.h>
int main(){

    int numeros[4] = {5, 4, 3, 2};
    int soma;

    soma = numeros[0] + numeros[3];

    printf("soma: %d + %d = %d",numeros[0], numeros[3], soma);

    return 0;
}