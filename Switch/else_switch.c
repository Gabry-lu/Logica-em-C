#include <stdio.h>

int main(){
    int num, num2;
    

    printf("Insira sua idade: ");
    scanf("%d", &num);


    if(num >= 13 && num <= 17){
        printf("Adolescente\n");

    }else if (num >= 18 && num <=59){
        printf("Adulto\n");

    }else if(num >= 60){
        printf("Idoso\n");
    }else{
        printf("Criança\n");
    }

    printf("Escolha um numero de 1 a 7 representando o dia da semana: ");
    scanf("%d", &num2);

    switch(num2){
        case 1:
        printf("Domingo\n");
        break;

        case 2:
        printf("Segunda\n");
        break;

        case 3:
        printf("Terça\n");
        break;

        case 4:
        printf("Quarta\n");
        break;

        case 5:
        printf("Quinta\n");
        break;

         case 6:
        printf("Sexta\n");
        break;

         case 7:
        printf("Sabado\n");
        break;

        default:
        printf("Dia invalido\n");
        return 1;

    }
    if(num2 == 1 || num2 == 2 ||num2 == 3 ||num2 == 4 ||num2 == 5){
        printf("Dias de cão");

    }else{
        printf("Aproveite o fim de semana!");
    }
}