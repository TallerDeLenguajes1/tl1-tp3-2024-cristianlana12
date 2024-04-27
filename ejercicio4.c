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

void total(Producto Producto);

char *tipoProductos[] = {"Galletas", "Snack", "Cigarrillos", "Caramelos", "Bebidas"};

void main()
{
    srand(time(NULL));
    int cantidadClientes = 1 + rand() % (5 - 1 + 1);
    char *auxNombre = (char *)malloc(100 * sizeof(char));

    Cliente *clientes;
    clientes = (Cliente *)malloc(cantidadClientes * sizeof(Cliente));

    for (int i = 0; i < cantidadClientes; i++)
    {
        printf("\nIngresar nombre del cliente[%d]: ", i);
        scanf("%s", auxNombre);
        int longNombre = strlen(auxNombre) + 1;
        clientes[i].nombreCliente = (char *)malloc(longNombre * sizeof(char));
        strcpy(clientes[i].nombreCliente, auxNombre);

        clientes[i].clienteId = i;

        clientes[i].cantidadProductosAPedir = 1 + rand() % (5 - 1 + 1);

        clientes[i].Producto = (Producto *)malloc(clientes[i].cantidadProductosAPedir * sizeof(Producto));

        for (int j = 0; j < clientes[i].cantidadProductosAPedir; j++)
        {
            int indiceAleatorio = 0 + rand() % (4 - 0 + 1);
            clientes[i].Producto[j].productoId = j;
            clientes[i].Producto[j].cantidad = 1 + rand() % (10 - 1 + 1);
            char *TipoProd = (char *)malloc(50 * sizeof(char));
            strcpy(TipoProd, tipoProductos[indiceAleatorio]);
            int longitudTipo = strlen(TipoProd) + 1;

            clientes[i].Producto[j].tipoProducto = (char *)malloc(longitudTipo * sizeof(char));
            strcpy(clientes[i].Producto[j].tipoProducto, TipoProd);

            clientes[i].Producto[j].precioUnitario = 10.0 + rand() % (100 - 10 + 1)/1.0;
        }
    }

    for (int i = 0; i < cantidadClientes; i++)
    {
        float totalPrecio = 0;
        printf("\n\nEl cliente ### %s ### tiene %d productos: ", clientes[i].nombreCliente, clientes[i].cantidadProductosAPedir);
        for (int j = 0; j < clientes[i].cantidadProductosAPedir; j++)
        {
            printf("\n\nTipo de producto: %s", clientes[i].Producto[j].tipoProducto);
            printf("\nCantidad: %d", clientes[i].Producto[j].cantidad);
            printf("\nPrecio Unitario: %.2f", clientes[i].Producto[j].precioUnitario);
            total(clientes[i].Producto[j]);
            totalPrecio = totalPrecio + (clientes[i].Producto[j].cantidad * clientes[i].Producto[j].precioUnitario);
        }
        
        printf("\nEl total a pagar de ### %s ### es: %.2f", clientes[i].nombreCliente ,totalPrecio);
    }
}


void total(Producto Producto){
    float total = 0;
    total = (Producto.cantidad) * (Producto.precioUnitario);
    printf("\nEl total a pagar de este producto es: %.2f", total);
}