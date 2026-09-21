#include <stdio.h>

int main(){
    float peso, altura;
    int faixa;

    printf("Insira seu peso: ");
    scanf("%f", &peso);
    printf("Insira sua altura: ");
    scanf("%f", &altura);

    peso = peso / (altura * altura);

    printf("Seu IMC é %.2f.\n", peso);

     faixa = (int)peso;

     switch(faixa){
        case 18:
        printf("Abaixo do peso");
        break;

         case 24:
         case 23:
         case 22:
         case 21:
         case 20:
         case 19:
        printf("Peso normal");
        break;

         case 25:
         case 26:
         case 27:
         case 28:
         case 29:
        printf("Sobre peso");
        break;

        case 30:
         case 31:
         case 32:
         case 33:
         case 34:
         case 35:
         case 36:
         case 37:
         case 38:
         case 39:
        printf("Obesidade");
        break;

          case 40:
        printf("Obesidade grave");
        break;

        default:
        printf("Invalido");
        return 1;


     }
}