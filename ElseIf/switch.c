#include <stdio.h>

int main(){
    int num;

    printf("Escoha um numero de 1 a 5");
    scanf("%d", &num);

    switch(num){
        case 1:
        printf("One");
        break;

        case 2:
        printf("two");
        break;

        case 3:
        printf("three")
        break;

        case 4:
        printf("four");
        break;

        case 5:
        printf("five");
        break;

        default:
        printf("Não sabe ler instruções???")

    }
    return 0;
}