#include <stdio.h>

int main(){

    int num1, num2, soma, men, mul;
    float divi;

    printf("Me de um numero: ");
    scanf("%d", &num1);

    printf("Me de outro numero: ");
    scanf("%d", &num2);

    soma = num1 + num2;
    printf("O resultado da soma foi: %d\n", soma);

    men = num1 - num2;
    printf("O resultado da subtração foi: %d\n", men);

    mul = num1 * num2;
    printf("O resultado da multiplicação foi: %d\n", mul);

    divi =(float) num1 / num2;
    printf("O resultado da divisão foi: %.2f\n", divi);

    if(num1 > num2){
    printf("O numero %d é maior que %d\n",num1, num2);
    }
    if(num1 = num2){
       printf("O numero %d é igual a %d\n",num1, num2); 
    }if(num1 < num2){
        printf("O numero %d é menor que %d\n",num1, num2); 
    }if(num1 >= 0 && num2 >=0){
        printf("Os numeros %d e %d são positivos", num1, num2);
    }else{
        printf("Algum ou ambos dos numeros são negativos");
    }


    return 0;


}