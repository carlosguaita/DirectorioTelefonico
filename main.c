#include <stdio.h>
#include "funciones.h"

int main (int argc, char *argv[]) {

    char nombres[10][20]={"Luis",
                          "Juan",
                          "Jose",
                          "David",
                          "Ana",
                          "Maria",
                          "Alberto",
                          "Lorena",
                          "Diana",
                          "Matias"};
    int numeros[10]={11,23,45,65,34,76,32,25,66,37};
    char nombreABuscar[20];
    printf("Ingrese el nombre que desea encontrar en el directorio: ");
    fflush(stdin);
    scanf("%s",&nombreABuscar);
    int index = buscarNombre(nombres,nombreABuscar,10);
    
    if(index!=-1){
        int numero = numeros[index];
        printf("El numero de %s es %d",nombreABuscar,numero);
    }else{
        printf("No existe el nombre %s en el directorio",nombreABuscar);
    }
   
    return 0;
}