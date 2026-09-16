#include <stdio.h>

int main(){
    float nota1, nota2, resultado;

    printf("Coloque a nota do primeiro bimestre:\n ")
    scanf("%.2f", &nota1);

    printf("Coloque a nota do segundo bimestre:\n ")
    scanf("%.2f", &nota2);

    resultado = nota1 + nota2;
    if(resultado >= 7 && nota1 >= 5 && nota2 >=5){
        printf("Aprovado, sua média foi %.2f e sua notas bimestrais foram igual ou maior que 5", resultado);

    }else{
        printf("Reprovado, sua média foi %.2f e sua notas bimestrais foram menor que 5", resultado);
    }
    return 0;
}