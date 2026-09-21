#include <stdio.h>
int main(){
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    while(num >= 1){
        printf("%d\n", num);
        num--;

    }
    printf("-----FIM-----");
    return 0;
}