#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "Funciones.h"

int main(int argc, char const* argv[])
{
    int opcion = 0;
    int bandera = 0;
    while (!bandera)
    {
        opcion = menu();
        CleanBuffer();
        switch (opcion)
        {
        case 1:
            CleanPantalla();
            CleanBuffer();
            int opcSMenu = 0;
            opcSMenu = menuInventario;
            CleanBuffer();
            break;
        case 2:
            /* code */
            break;
        case 3:
            /* code */
            break;
        case 4:
            /* code */
            break;
        default:

            break;
        }
    }   
    return 0;
}
