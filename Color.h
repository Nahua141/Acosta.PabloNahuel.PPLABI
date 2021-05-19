#ifndef COLOR_H_INCLUDED
#define COLOR_H_INCLUDED
typedef struct
{
    int id;
    char color[20];
    int isEmpty;
} eColor;


#endif // COLOR_H_INCLUDED
void mostrarColor(eColor unColor);
int mostrarColores(eColor colores[], int tamC);
int cargarDescripcionColor(int id, eColor colores[], int tamC, char desc[]);
int validarIdColor(int id, eColor colores[], int tamC);
