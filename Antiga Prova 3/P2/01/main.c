#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    int matriz[3][3] = {
		{  5, 10, 20},
		{  1,  2,  3},
		{ 20, 30, 40}
};
printf("A-\n");
for( i=0;i<3;i++){
        printf("\n");
    for( j=0;j<3;j++){
        printf("%d  ",matriz[i][j]);
    }
}
printf("\n\n\n");
printf("B-\n");
for(int i=0;i<3;i++){
    printf("%d  ",matriz [i][i]);
}


    return 0;
}
