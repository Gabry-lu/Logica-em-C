#include <stdio.h>
int main(){
    int num, i = 1, soma = 0;
    printf("Insira um numero: ");
    scanf("%d", &num);

    while(i <= num){
        if (i % 2 == 0) {
            soma = soma + i;
        }
        i++;
    }
    printf("Resultado %d", soma);
    return 0;
}