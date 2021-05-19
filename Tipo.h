#ifndef TIPO_H_INCLUDED
#define TIPO_H_INCLUDED
typedef struct
{
    int id;
    char descripcion[20];
    int isEmpty;
} eTipo;


#endif // TIPO_H_INCLUDED
void mostrarTipo(eTipo unTipo);
int mostrarTipos(eTipo tipos[], int tamT);
int cargarDescripcionTipos(int id, eTipo tipos[], int tamT, char desc[]);
int validarIdTipos(int id, eTipo tipos[], int tamT);
