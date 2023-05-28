#include <stdio.h>

void SaltoLinea ()
{
    printf("\n");
}
void CleanBuffer()
{
    fflush(stdin);
    fflush(stdout);
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
    scanf("%d", &opc);
    return opc;
}
