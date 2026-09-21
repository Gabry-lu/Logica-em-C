#include <stdio.h>
int main(){
    int num, i = 1;

    printf("Insira um numero: ");
    scanf("%d", &num);

    while(i <= 10){
        printf("%d x %d = %d\n", i, num, num*i);
        i++;
    }
}