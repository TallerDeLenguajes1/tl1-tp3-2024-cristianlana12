#include <stdio.h>
#include <stdlib.h>

void cargadoMatrizNumAle(int matriz[5][12], int inf, int sup);

void mostrarMatriz(int matriz[5][12]);

void main(){
    int matriz[5][12];
    int limInf, limSup;

    printf("Ingresar el limite inferior: ");
    scanf("%d", &limInf);
    printf("\nIngresar el limite superior: ");
    scanf("%d", &limSup);

    cargadoMatrizNumAle(matriz, limInf, limSup);
    mostrarMatriz(matriz);
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

void mostrarMatriz(int matriz[5][12]){
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            printf("[%d]", matriz[i][j]);
        }
        printf("\n");
    }
    
}