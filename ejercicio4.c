#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct
{
    int productoId;
    int cantidad;
    char *tipoProducto;
    float precioUnitario;
} typedef Producto;

struct
{
    int clienteId;
    char *nombreCliente;
    int cantidadProductosAPedir;
    Producto *Producto;
} typedef Cliente;

char *tipoProductos[] = {"Galletas", "Snack", "Cigarrillos", "Caramelos", "Bebidas"};

void main()
{
    int cantidadClientes;
    char *auxNombre;

    printf("ingresar la cantidad de clientes: ");
    scanf("%d", &cantidadClientes);

    Cliente *clientes;
    clientes = (Cliente *)malloc(cantidadClientes * sizeof(clientes));

    for (int i = 0; i < cantidadClientes; i++)
    {
        printf("\nIngresar nombre del cliente: ");
        scanf("%s", &auxNombre);
        int longNombre = strlen(auxNombre) + 1;
        clientes->nombreCliente = (char *)malloc(longNombre * sizeof(char));
        strcpy(clientes->nombreCliente,auxNombre);

        clientes->cantidadProductosAPedir = 0 + rand()%(8 - 0 + 1);
        clientes->Producto=(Producto *)malloc(clientes->cantidadProductosAPedir * sizeof(Producto ));
        
    }
}
