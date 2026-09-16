#include <stdio.h>

int main(){
    int num;

    printf("-----DESTINO-----\n");
   printf("1. Canada\n");
   printf("2.Japão\n");
   printf("3.Grecia\n");
   printf("4.Inglaterra\n");
   printf("5.Italia\n");
   scanf("%d", &num);

   switch(num){
    case 1:
    printf("Patiu Canada");
    break;

    case 2:
    printf("Patiu Japão");
    break;

    case 3:
    printf("Patiu Grecia");
    break;

    case 4:
    printf("Patiu Inglaterra");
    break;

    case 5:
    printf("Patiu Italia");
    break;

    default:
    printf("Opçao invalida");
   }
return 0;

}