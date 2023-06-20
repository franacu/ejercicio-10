#include "helper.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#define MaxUsuarios 100

int main()
{
    int numUsuario=4;
    int numZona=3;
    Usuario usuario[MaxUsuarios]=
    {
            {1,"francisco","Pueyrredon",230,"P",25000},
            {2,"Manuel","Pujol",145,"P",2000},
            {2,"francine","Paez",607,"C",30000},
            {3,"Lucas","Villaster",321,"C",200},

    };

    Zona zona[]=
            {
                    {1,1500,3000,700,1700},
                    {2,1000,2000,1000,2700},
                    {3,2500,3500,400,700},

            };
    Zona *zonas=malloc(numZona * sizeof(Zona));
    if (zonas == NULL) {
        printf("Error al asignar memoria dinámica.\n");
        return 1;
    }

    ListarUsuariosSuperanConsumoMinimo(usuario, numUsuario,zona,numZona);

    free(zonas);


    return 0;
}
