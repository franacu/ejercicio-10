//
// Created by Fran on 19/06/2023.
//

#include "helper.h"
#include <stdio.h>


#define MaxUsuarios 100

void ListarUsuariosSuperanConsumoMinimo(Usuario usuario[], int numUsuario, Zona zona[], int numZona)
{
    int i, j;
    float importe;

    for (i = 0; i < numUsuario; i++)
    {
        Usuario* usuarioActual = &usuario[i];
        Zona* zonaActual=NULL;

        for (j = 0; j < numZona; j++)
        {
            if (zona[j].nroZona == usuarioActual->nrozona)
            {
                zonaActual = &zona[j];
                break;
            }
        }

        if (zonaActual != NULL &&
            ((usuarioActual->tipoUsuario == 'P' && usuarioActual->consumo >= zonaActual->consumoMinimoParticular) ||
             (usuarioActual->tipoUsuario == 'C' && usuarioActual->consumo >= zonaActual->consumoMinimoComercial)))
        {
            if (usuarioActual->tipoUsuario == 'P')
            {
                importe = zonaActual->tarifaParticular * usuarioActual->consumo;
            }
            else if (usuarioActual->tipoUsuario == 'C')
            {
                importe = zonaActual->tarifaComercial * usuarioActual->consumo;
            }

            printf("Zona: %d\n", usuarioActual->nrozona);
            printf("Tipo de usuario: %s\n", usuarioActual->tipoUsuario);
            printf("Nombre: %s\n", usuarioActual->nombre);
            printf("Calle y número: %c %d\n", usuarioActual->calle, usuarioActual->numero);
            printf("Consumo: %.2f\n", usuarioActual->consumo);
            printf("Importe: %.2f\n", importe);
        }
    }
}
