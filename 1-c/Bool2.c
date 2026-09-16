#include <stdio.h>
#include <stdbool.h>

int main(){
    int num;
    bool idade1, idade2;

    printf("Insira sua idade: ");
    scanf("%d", &num);

    idade1 = (num >= 16 && num < 18);
    idade2 = ( num >= 18);

    if(idade1){
        printf("Pode votar mas não pode dirigir");

    }else if (idade2){
        printf("Pode votar e dirigir");

    }else{
        printf("Voce nao pode votar nem dirigir");
    }
}