#include <stdio.h>
#include <stdlib.h>

int matriz[3][3]={
                {5,10,20},
                {1,2,3},
                {20,30,40}
};

int main()
{
    //Ex 1)
    /*for(int i =0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("[%i]\t\t",matriz[i][j]);
        }
    printf("\n");
    }*/

    //Ex 2)
    for(int i =0;i<3;i++){
        for(int j=0;j<3;j++){
                if(i==j){

            printf("[%i]\t\t",matriz[i][j]);
                }else{
                printf("[0]\t\t");
                }
        }
    printf("\n");
    }
return 0;
}
