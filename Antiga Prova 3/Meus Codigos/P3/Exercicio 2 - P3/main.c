#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

void ler();


int main()
{
    FILE *fp;

    fp=fopen("prova2.txt","w");
    int x;
    float y;
    char texto[26];

    printf("Digite um valor Inteiro:\n");
    scanf("%i", &x);
    getchar();
    printf("Digite um valor decimal:\n");
    scanf("%f", &y);
    getchar();
    printf("Digite uma frase:\n");
    gets(texto);
    if(fp==NULL){
        printf("Erro na abertura do Arquivo.\n");
        return 1;
    }
    fprintf(fp,"%i\n",x);
    fprintf(fp,"%.2f\n",y);
    fprintf(fp,"%s",texto);

    fclose(fp);
    ler();
    return 0;
}



void ler(){

    FILE *fp;
    fp=fopen("prova2.txt","r");
    int x;
    float y;
    char texto[26];

    fscanf(fp,"%i",&x,&texto);
    fscanf(fp,"%f",&y);
    fgets(texto,26,fp);
    printf("O valor da variavel inteiro e:%i", x);
    printf("O valor da variavel decimal e:%.2f",y);
    printf("O valor da variavel do tipo frase e:%s",texto);
}
