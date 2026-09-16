#include <stdio.h>

int main(){
    char letra, bonus;
    float nota ;

    printf("Insira sua nota de A a F:\n");
    scanf(" %c", &letra);

    switch(letra){
        case 'A':
        nota = 9.0;
        printf("Nota entre 9.0 e 10.0 ");
        break;

        case 'B':
        nota = 7.0;
         printf("Nota entre 7.0 e 8.9");
        break;

        case 'C':
        nota = 5.0;
        printf("Nota entre 5.0 e 6.9");
        break;

        case 'D':
        case 'F':
        nota = 0.0;
        printf("Nota entre 0.0 e 4.9");
        break;

        default:
        printf("Nota invalida");
        return 1;

    }
    printf("Deseja calcular a media com bonus? (S/N)\n");
    scanf(" %c", &bonus);

    switch(bonus){
        case 's':
        case 'S':
        nota = nota + 0.5;
        printf("Sua nota foi de %.2f", nota);
        break;

        case 'n':
        case 'N':
        printf("Sua nota foi de %.2f", nota);
        break;

        default:
        printf("Invalido");


    }
    return 0;

    
}