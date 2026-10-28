#include <stdio.h>
int main(){

    int numeros[5] = {5, 4, 3, 2, 1};

    for(int i = 0; i < 5; i++ ){
        printf("%d x 2 = %d\n", numeros[i], numeros[i]*2);
       

    }
    return 0;
}