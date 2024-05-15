#include <stdio.h>
#include <string.h>
#include "funciones.h"

int buscarNombre(char nombres[][20],char nombre[],int n){
    int index=-1;
    for (int i = 0; i < n; i++)
    {
        if(strcmp(nombres[i],nombre)==0){
            index=i;
            break;
        }
    }
    return index;
    
}