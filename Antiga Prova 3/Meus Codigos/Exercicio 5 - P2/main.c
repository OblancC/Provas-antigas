#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void menu();
void lista();

struct lista_agenda{
    char nome[26];
    long int telefone;
}agenda[10];

int main()
{

    int opc,i=0;
    do{
    menu();
    scanf("%i", &opc);
    getchar();
    switch(opc){
            case 1:
                do{

                    printf("Digite o Nome:\n");
                    gets(agenda[i].nome);
                    getchar();
                    printf("Digite o telefone:\n");
                    scanf("%i",&agenda[i].telefone);
                    getchar();
                    i++;
                    printf("Deseja sair:\n1 - Sim\n2 - Nao");
                    scanf("%i",&opc);
                }while(opc!=1);
                break;
            case 2:
                    lista();
                    break;
            case 3:
                exit(1);
            default:
                printf("Opcao invalida:");
                break;
    }
    }while(opc!=3);
    return 0;
}

void lista(){
    printf("|\t\tNome\t\t|\t\tTelefone\t\t|\n");
    for(int i=0;i<10;i++){
        printf("|\t\%s\t\t|\t\%i\t\t|\n",agenda[i].nome,agenda[i].telefone);
    }
}
void menu(){
    printf("\t\t|Selecione a opção |\n");
    printf("\t\t|1-Criar um contato|\n");
    printf("\t\t|2-Mostrar a lista |\n");
    printf("\t\t|3-Sair do programa|\n");
}
