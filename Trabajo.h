#include "Mascota.h"
#include "Servicio.h"
#include "fecha.h"
#ifndef TRABAJO_H_INCLUDED
#define TRABAJO_H_INCLUDED
typedef struct
{
    int id;
    eFecha fIngreso;
    int idMascota;
    int idServicio;
    int isEmpty;
} eTrabajo;


#endif // TRABAJO_H_INCLUDED
void mostrarTrabajo(eTrabajo unTrabajo, eMascota mascotas[], int tamM, eServicio servicios[], int tamSer);
int mostrarTrabajos(eTrabajo trabajos[], int tamTRA, eMascota mascotas[], int tamM, eServicio servicios[], int tamSer);
int buscarLibreTrabajos(eTrabajo trabajos[], int tamTR);
int inicializarTrabajos(eTrabajo trabajos[], int tamTR);
int altaTrabajo(eMascota mascotas[], int tamM, eTrabajo trabajos[], int tamTR ,eServicio servicios[], int tamSER, eTipo tipos[], int tamT,eColor colores[], int tamC,int* pId);
