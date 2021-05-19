#ifndef SERVICIO_H_INCLUDED
#define SERVICIO_H_INCLUDED
typedef struct
{
    int id;
    char descripcion[25];
    float precio;
} eServicio;


#endif // SERVICIO_H_INCLUDED
void mostrarServicio(eServicio unServicio);
int mostrarServicios(eServicio servicios[], int tamS);
int cargarDescripcionServicio(int id, eServicio servicios[], int tamS, char desc[]);
int buscarServicio(eServicio servicios[], int tamSer, int id);
