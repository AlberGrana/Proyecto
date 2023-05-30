#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"
#include "Factura.h"

int main(int argc, char const *argv[])
{
    int opcion = 0;
    int bandera = 0;
    FILE *fileFact = NULL;

    while(!bandera){

        opcion = menu();
        CleanBuffer();
        int opcSMenu=0;
        int bandera2 = 0;
        switch (opcion) //switch principal
        {
            case 1:
                while (!bandera2)
                {
                    bandera2 = 0;
                    system("cls");
                    CleanBuffer();
                    opcSMenu = menuInventario();
                    CleanBuffer();
                    switch (opcSMenu)
                    {
                    case 1:
                        system("cls");
                        CleanBuffer();
                        break;
                    case 2:
                        system("cls");
                        CleanBuffer();
                        break;
                    case 3:
                        system("cls");
                        CleanBuffer();
                        break;
                    case 4:
                        system("cls");
                        bandera2 = 1;
                        CleanBuffer();
                        break;
                    default:
                        OpcionInvalida();
                        break;
                    }
                }                
                break;
            
            case 2:
                while (!bandera2)
                {
                    bandera2 = 0;
                    system("cls");
                    CleanBuffer();
                    opcSMenu = menuFacturacion();
                    CleanBuffer();
                    break;
                }
            
            case 3:
                system("cls");
                CleanBuffer();
                break;
            
            case 4: 
                CleanBuffer();
                SaltoLinea();   printf("Hasta pronto!!!");  SaltoLinea();
                bandera = 1;
                break;

            default:
                OpcionInvalida();
                system("pause");
                system("cls");
                break;
        } //cierra el switch
    }
    return 0;
}
