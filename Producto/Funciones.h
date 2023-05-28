#include <stdio.h>
#include <string.h>

void SaltoLinea ()
{
    printf("\n");
}
void CleanBuffer()
{
    fflush(stdin);
    fflush(stdout);
}
void CleanPantalla()
{
    system("cls");
}
int main()
{
    int opc = 0;
    printf("******************* ¡ZAS!CLINIC *******************"); SaltoLinea(); SaltoLinea();
    printf("- Opcion 1: Menu Gestion de Inventario"); SaltoLinea();
    printf("- Opcion 2: Menu Gestion  de la Facturacion"); SaltoLinea();
    printf("- Opcion 3: Menu Gestion de Pacientes"); SaltoLinea();
    printf("- Opcion 4: Salir"); SaltoLinea();
    printf("- Digite su opcion: ");
    scanf("%d", &opc); CleanBuffer();
    return opc;
}

int menuInventario()
{
    int opc = 0;
    printf("******************* Menu - Gestion de Inventario *******************"); SaltoLinea(); SaltoLinea();
    printf("- Opcion 1: Visualizar Productos en Exitensia"); SaltoLinea();
    printf("- Opcion 2: Agregar Nuevo Producto"); SaltoLinea();
    printf("- Opcion 3: Editar Datos de un Producto"); SaltoLinea();
    printf("- Opcion 4: Salir"); SaltoLinea();
    printf("- Digite su opcion: ");
    scanf("%d", &opc); CleanBuffer();
    return opc;
}
