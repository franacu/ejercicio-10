//
// Created by Fran on 19/06/2023.
//

#ifndef PRACTICANDOESTRUCTPILAS_HELPER_H
#define PRACTICANDOESTRUCTPILAS_HELPER_H

typedef struct usuario
{
    int nrozona;
    char nombre[50];
    char calle[50];
    int numero;
    char tipoUsuario[5];
    float consumo;

}Usuario;

typedef struct zona{
    int nroZona;
    float tarifaParticular;
    float tarifaComercial;
    float consumoMinimoParticular;
    float consumoMinimoComercial;
} Zona;

void ListarUsuariosSuperanConsumoMinimo(Usuario usuario[],int numUsuario,Zona zona[],int numZona);


#endif //PRACTICANDOESTRUCTPILAS_HELPER_H
