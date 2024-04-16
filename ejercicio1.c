#include <stdio.h>
#include <stdlib.h>

void cargadoMatrizNumAle(int matriz[5][12], int inf, int sup);

void mostrarMatriz(int matriz[5][12]);

void promedioAnioMatriz(int matriz[5][12]);

void menorMayorMatriz(int matriz[5][12]);

void main(){
    int matriz[5][12];
    int limInf, limSup;

    printf("Ingresar el limite inferior: ");
    scanf("%d", &limInf);
    printf("\nIngresar el limite superior: ");
    scanf("%d", &limSup);

    cargadoMatrizNumAle(matriz, limInf, limSup);
    mostrarMatriz(matriz);
    promedioAnioMatriz(matriz);
    menorMayorMatriz(matriz);
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

void promedioAnioMatriz(int matriz[5][12]){
    float sum=0, prom;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            sum = sum + matriz[i][j];
        }
        prom = sum/12;
        printf("\nEl calor del año %d es: %.2f", i,prom);
        sum = 0;
    }
}

void menorMayorMatriz(int matriz[5][12]){
    int anioMayor, mesMayor, mayor = 0, menor = matriz[0][0];
    int anioMenor, mesMenor;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            if (matriz[i][j] > mayor)   
            {
                mayor = matriz[i][j];
                mesMayor = j;
                anioMayor = i;
            }

            if (menor > matriz[i][j])
            {
                menor = matriz[i][j];
                mesMenor = j;
                anioMenor = i;
            }
        }
    }


    
}