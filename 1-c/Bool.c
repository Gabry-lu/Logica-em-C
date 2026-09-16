#include <stdio.h>
#include <stdbool.h>

int main(){
    int num;

    printf("Insira um numero: ");
    scanf("%d", &num);

    bool conta = ( num %2 == 0);

    if(conta){
        printf("O numero %d é par", num);

    }else{
        printf("O numero %d é impar", num);

    }
}