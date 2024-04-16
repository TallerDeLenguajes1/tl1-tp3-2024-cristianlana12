#include <stdio.h>
#include <stdlib.h>

void cargadoMatrizNumAle(int matriz[5][12], int inf, int sup);



void main(){
    int matriz[5][12];
    int limInf, limSup;

    printf("Ingresar el limite inferior: ");
    scanf("%d", &limInf);
    printf("\nIngresar el limite superior: ");
    scanf("%d", &limSup);

    cargadoMatrizNumAle(matriz, limInf, limSup);
}


void cargadoMatrizNumAle(int matriz[5][12], int inf, int sup){
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            matriz[i][j] = inf + rand() % (sup - inf + 1);
        }
    }
}