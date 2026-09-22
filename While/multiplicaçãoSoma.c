#include <stdio.h>
int main(){
    int num ,num2, soma = 0, i =1;

    printf("Digite um numero :");
    scanf("%d", &num);

    printf("Digite quantas vezes esse numero vai ser somado: ");
    scanf("%d", &num2);

    while(i <= num2){
        soma = soma + num;
        printf("%d\n", soma);
        i++;

    }
    
    return 0;
}