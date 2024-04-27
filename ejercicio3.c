#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define tama 5

void main(){
    char **Nombres = (char ** )malloc(tama * sizeof(char *));
    char *buffer = (char *)malloc(100 * sizeof(char));
    for (int i = 0; i < 5; i++)
    {
        printf("\nIngresar el nombre del usuario %d:", i);
       scanf("%s", buffer);
       int longNombre = strlen(buffer) + 1;
       Nombres[i] = (char *)malloc(longNombre * sizeof(char));
        strcpy(Nombres[i], buffer);
    }

    for (int i = 0; i < 5; i++)
    {
        printf  ("\nEl nombre del usuario[%d] es: %s", i, Nombres[i]);
        free(Nombres[i]);
    }
    
    free(buffer);
    free(Nombres);
    
}