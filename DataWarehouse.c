#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "DataWarehouse.h"
int id[10] ={100,101,102,103,104,105,106,107,108,109};
char nombres[10][20] = {"Michifu", "Firulais","Panky","Pancho","Rudolf","Luna","Negro","Nieves","Atila","Marley"};
int idTipo[10] = {1000,1001,1002,1003,1004,1001,1001,1004,1002,1003};
int idColor[10] = {5000,5001,50002,5003,5004,5004,5000,5002,5001,5002};
int edades[10] = {4,12,5,3,10,11,8,9,4,10};

int hardCodearMascotas(eMascota mascotas[],int tamM, int cant, int* pId)
{
    int cantidad = 0;
    if(mascotas != NULL && tamM > 0 && cant >= 0 && cant <= tamM && pId != NULL)
    {
        for(int i = 0; i < cant; i ++)
        {
            mascotas[i].id = *pId;
            (*pId)++;
            strcpy(mascotas[i].nombre, nombres[i]);
            mascotas[i].edad = edades[i];
            mascotas[i].isEmpty = 0;
            mascotas[i].idTipo = idTipo[i];
            mascotas[i].idColor = idColor[i];
            cantidad ++;
        }
    }
    return cantidad;
}
