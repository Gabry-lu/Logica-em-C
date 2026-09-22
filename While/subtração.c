#include <stdio.h>
int main(){
    int num;

    printf("Digite um numero para ser sucessivamete subtraido: ");
    scanf("%d", &num);

    while(num >= 0){
        printf("%d\n", num);
        num = num - 2;
    }
    return 0;
}