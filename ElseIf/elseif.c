#include <stdio.h>
#include <stdbool.h>

int main(){
    int num;
    

    printf("Insira sua idade: ");
    scanf("%d", &num);


    if(num >= 13 && num <= 17){
        printf("Adolescente");

    }else if (num >= 18 && num <=59){
        printf("Adulto");

    }else if(num >= 60){
        printf("Idoso");
    }else{
        printf("Criança");
    }
}