#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define tama 5

void main(){
    char **Nombres = (char ** )malloc(tama * sizeof(char *));
    char *buffer = (char *)malloc(100 * sizeof(char));
    for (int i = 0; i < 5; i++)
    {
       scanf("%s", buffer);
       int longNombre = strlen(buffer) + 1;
       Nombres[i] = (char *)malloc(longNombre * sizeof(char));
        strcpy(Nombres[i], buffer);
    }
    
}