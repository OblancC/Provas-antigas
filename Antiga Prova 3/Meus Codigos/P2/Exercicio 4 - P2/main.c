#include <stdio.h>
#include <stdlib.h>

int expoente(float x,int y);

int main()
{
    float x;
    int y;

    printf("Digite o valor de X");
    scanf("%f",&x);
    do{
    printf("Digite o valor de Y");
    scanf("%i",&y);
    if(y>=0){
        break;
    }else{
        printf("Valor Invalido, Informe um valor maior ou igual a zero\n");
    }
    }while(y<0);
    if(y==0){
        printf("Resultado = 0");
    }else{
        expoente(x,y);
    }
    return 0;
}

int expoente(float x,int y){
float total=1;

    for(int i=0;i<y;i++){
        total=total*x;
        printf("%.2f", total);
    }



return total;
}
