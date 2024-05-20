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

void editarNumero(char nombres[][20],
                  char nombre[],
                  int numeros[],
                  int nuevoNumero,
                  int n){
    int index = buscarNombre(nombres,nombre,n);
    numeros[index]=nuevoNumero;
}

void imprimirNombreNumeros(char nombres[][20],int numeros[],int n){
    printf("Nombre\t\tNumero\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\t\t%d\n",nombres[i],numeros[i]);
    }
    
}