#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p;
    int i,tamanho;

    printf("Digite o tamanho do vetor:\n");
    scanf("%i", &tamanho);

    p = (int*)malloc(tamanho*sizeof(int));

    if(p==NULL){
        printf("Erro na alocacao de memoria\n");
        exit(1);
    }
    for(i=0;i<tamanho;i++){
        printf("Digite o valor para o indice [%i]",i);
        scanf("%i", &p[i]);
    }
    for(i=0;i<tamanho;i++){
       for(int j=0;j<tamanho;j++){
        if(p[i]>p[j]){
            int aux=p[i];
            p[i]=p[j];
            p[j]=aux;
        }
       }
    }
    printf("O maior valor eh %i", p[0]);
    return 0;
}
