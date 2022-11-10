#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[10];

    printf("Digite os valores:\n");
    for(int i=0;i<10;i++){
        printf("\n[%i]",i+1);
        scanf("%i", &vet[i]);
    }
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(vet[i]<vet[j]){
                int aux=vet[i];
                vet[i]=vet[j];
                vet[j]=aux;
            }

        }
    }
    for(int i=0;i<10;i++){
        printf("%\ti\n",vet[i]);

    }
    return 0;
}
