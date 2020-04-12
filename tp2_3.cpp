#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
srand(time(NULL));
    int f,c,i,j;
    f=15;
    c=5+rand()%(16-5);
    int par=0;
    //vector dinamico
    int *vector;
    vector=(int     *) calloc(15,sizeof(int));
    //reserva memoria-------
    int **matriz =(int**) calloc(f,sizeof(int *));
    
    for (i=0;i<f;i++){
        matriz[i]=(int *) calloc(c,sizeof(int));
    }
    //------------------------
    for(i=0;i<f;i++){
        for(j=0;j<c;j++){
            matriz[i][j]= 100+rand() %(1000-100) ;
            
        }
    }

    for(i=0;i<f;i++){
        for(j=0;j<c;j++){
            printf("%d   ",matriz[i][j]);
//verifico si el numero par 
            if(matriz[i][j]%2==0){
                par++;
            }
            *(vector+i)=par;

        }
        par=0;
        printf("\n");
//---------------       
    }
//libera memoria
    for(i=0;i<f;i++){
        free(matriz[i]);
    }
    free(matriz);
//---------------
    printf("\n\n");
//muestra vector
    for(i=0;i<15;i++){
        printf("\n numeros pares en fila %d =%d ",(i+1),*(vector+i));
    }
    return 0;
}