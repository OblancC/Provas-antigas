#include <stdio.h>
#include <stdlib.h>


int main()
{
    float notas[5];
    float soma,total;
    for(int i=0;i<5;i++){
        printf("Digite a %i Nota:\n", i+1);
        scanf("%f", &notas[i]);
        soma=soma+notas[i];
    }
    total=soma/5;
    printf("Soma:%.2f\nMedia:%.2f", soma,total);
    return 0;
}


