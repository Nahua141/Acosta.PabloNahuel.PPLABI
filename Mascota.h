#include "Tipo.h"
#include "Color.h"
#ifndef MASCOTA_H_INCLUDED
#define MASCOTA_H_INCLUDED
typedef struct
{
    int id;
    char nombre[20];
    int edad;
    int idTipo;
    int idColor;
    int isEmpty;
} eMascota;


#endif // MASCOTA_H_INCLUDED
void mostrarMascota(eMascota unaMascota, eTipo tipos[], int tamT,eColor colores[], int tamC);
int mostrarMascotas(eMascota mascotas[], int tamM, eTipo tipos[], int tamT,eColor colores[], int tamC);
int buscarLibre(eMascota mascotas[], int tamM);
int altaMascota(eMascota mascotas[], int tamM, eTipo tipos[], int tamT, eColor colores[], int tamC, int* pId);
int modificarMascota(eMascota mascotas[], int tamM, eTipo tipos[], int tamT, eColor colores[], int tamC);
int inicializarMascotas(eMascota mascotas[], int tamM);
int buscarMascota(eMascota mascotas[], int tamM, int id);
int subMenu();
int listarMascotas(eMascota mascotas[], int tamM, eTipo tipos[], int tamT, eColor colores[], int tamC);
int cargarDescripcionMascota(int id, eMascota mascotas[], int tamM, char desc[]);
int bajaMascota(eMascota mascotas[], int tamM, eTipo tipos[], int tamT, eColor colores[], int tamC);
