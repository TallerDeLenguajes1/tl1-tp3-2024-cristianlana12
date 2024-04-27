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
    int cantidadClientes = 1 + rand() % (5 - 1 + 1);
    char *auxNombre = (char *)malloc(100 * sizeof(char));

    Cliente *clientes;
    clientes = (Cliente *)malloc(cantidadClientes * sizeof(Cliente));

    for (int i = 0; i < cantidadClientes; i++)
    {
        printf("\nIngresar nombre del cliente[%d]: ", i);
        scanf("%s", auxNombre);
        int indiceAleatorio = 0 + rand() % (4 - 0 + 1); 
        int longNombre = strlen(auxNombre) + 1;
        clientes[i].nombreCliente = (char *)malloc(longNombre * sizeof(char));
        strcpy(clientes[i].nombreCliente, auxNombre);

        clientes[i].clienteId = i;

        clientes[i].cantidadProductosAPedir = 1 + rand() % (5 - 1 + 1);

        clientes[i].Producto = (Producto *)malloc(clientes[i].cantidadProductosAPedir * sizeof(Producto));

        clientes[i].Producto[i].productoId = i;
        clientes[i].Producto[i].cantidad = 1 + rand() % (10 - 1 + 1);
        char *TipoProd = (char *)malloc(50 * sizeof(char));
        strcpy(TipoProd, tipoProductos[indiceAleatorio]);
        int longitudTipo = strlen(TipoProd) + 1;

        clientes[i].Producto[i].tipoProducto = (char *)malloc(longitudTipo * sizeof(char));
        strcpy(clientes[i].Producto[i].tipoProducto , TipoProd );

        clientes[i].Producto[i].precioUnitario = 10 + rand() % (100 - 10 + 1);
    }

    
}
