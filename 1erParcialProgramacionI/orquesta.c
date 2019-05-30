#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <ctype.h>
#include "musico.h"
#include "utn.h"

/** \brief Inicializa el campo isEmpty en 1(vacio)
* \param arrayOrquesta Array de Orquesta
* \param cantidad es el tamaño del array
* \return int Return (-1) si Error [largo no valido o NULL pointer] - (0) si se inicializa correctamente
*
*/
int orq_Inicializar(Orquesta *arrayOrquesta, int cantidad)
{
    int retorno = -1;
    int i;

    for (i = 0; i < cantidad; i++)
    {
        arrayOrquesta[i].isEmpty = 1;
        retorno=0;
    }

    return retorno;
}

/** \brief Busca una posicion libre en arrayOrquesta
* \param cantidad es el tamaño del array
* \param devuelve int puntero a una variable que guarda la posicion
* \return   int Return (-1) si Error [largo no valido o NULL pointer] -
            (0) si encuentra una posicion libre
*
*/
int orq_buscarLibre(Orquesta *arrayOrquesta, int cantidad, int *devuelve)
{
    int retorno=-1;
    for (int i=0; i<cantidad;i++)
    {
        if (arrayOrquesta[i].isEmpty==1)
        {
            *devuelve=i;
            retorno=0;
            break;
        }

        retorno=1;
    }

    return retorno;
}
/** \brief  Da de alta una orquesta y guarda sus campos en un array de orquesta
* \param arrayOrquesta array de Orquesta
* \param cantidadOrquesta tamaño de array de Orquesta
* \param posLibre int recibe una posicion libre para guardar los datos
* \param id int recibe un  id para asignar a la alta
* \return   int Return (-1) si Error [largo no valido o NULL pointer] -
            (0) si se da de alta una orquesta correctamente
*/
int orq_alta(Orquesta *arrayOrquesta, int cantidad, int posLibre, int id)
{
    int retorno = -1;

    if (    utn_getName("\n\nIngrese un nombre de orquesta: ","Error, vuelva a ingresar\n\n",2,30,2, arrayOrquesta[posLibre].nombre) == 0 &&
            utn_getName("\n\nIngrese un nombre del lugar: ","Error, vuelva a ingresar\n\n",2,30,2, arrayOrquesta[posLibre].lugar) == 0)
        {
            printf("\n\n1-Sinfonica");
            printf("\n\n2-Filarmonica");
            printf("\n\n3-Camara");
            if(utn_getUnsignedInt("\n\nIngrese un tipo de orquesta: ","Error, vuelva a ingresar\n\n",1,3,2,&arrayOrquesta[posLibre].tipo) == 0)
            {

                arrayOrquesta[posLibre].idOrquesta = id;
                arrayOrquesta[posLibre].isEmpty  = 0;
                retorno=0;

            }
        }

    else
    {
        retorno = 1;
    }

    return retorno;
}
/** \brief  busca la posicion de una orquesta de un array de orquesta por id
* \param arrayOrquesta Array de Orquesta
* \param cantidadOrquesta tamaño de array de Orquesta
* \param    orquestaEncontrada int puntero a una variable para guardar la posicion
            encontrada
* \return   int Return (-1) si Error [largo no valido o NULL pointer] -
            (0) si se encuentra una orquesta correctamente
*/
int orq_buscarEnArrayPorId (Orquesta *arrayOrquesta, int cantidad, int *orquestaEncontrada,char *textoAMostrar)
{
    int i;
    int retorno = 1;
    Orquesta auxOrquesta;

    if (utn_getUnsignedInt(textoAMostrar, "Ingreso incorrecto\n", 0, 100, 2, &auxOrquesta.idOrquesta) == 0)
    {
        for(i=0; i < cantidad; i++)
        {
            if (arrayOrquesta[i].idOrquesta == auxOrquesta.idOrquesta)
            {
                retorno=0;
                *orquestaEncontrada=i;
                break;
            }
        }
    }
    return retorno;
}

/** \brief  Imprime en pantalla una lista de orquestas habilitadas
* \param arrayOrquesta Array de Orquesta
* \param cantidad int tamaño del array
* \return void
*/
void orq_mostrarArray(Orquesta *arrayOrquesta, int cantidad)
{
    int i;

    printf("\n\n\t\t\t\t||Lista de OrquestaS||\n\n");

    for (i = 0; i < cantidad ;i++)
    {
        if(arrayOrquesta[i].isEmpty == 0)
        {

            printf("ID de Orquesta: %d\n", arrayOrquesta[i].idOrquesta);
            printf("Posicion: %d\n", i);
            printf("Estado: %d\n", arrayOrquesta[i].isEmpty);
            printf("Nombre: %s\n", arrayOrquesta[i].nombre);
            printf("Lugar: %s\n\n", arrayOrquesta[i].lugar);
        }
    }
}
/** \brief  Despliega un menu para modificar una orquesta buscado por id
* \param arrayOrquesta array de Orquesta
* \param cantidad tamaño de array de Orquesta
* \return   int Return (-1) si Error [largo no valido o NULL pointer] -
            (0) si modifica un musico correctamente - (-2) si
            no encuentra el id
*
*/
int orq_modificacion(Orquesta *arrayOrquesta, int cantidad)
{

    int retorno = -1;
    int opcion;
    int posicionOrquesta;
    char seguir = 's';

    orq_mostrarArray(arrayOrquesta, cantidad);

    switch (orq_buscarEnArrayPorId(arrayOrquesta, cantidad,&posicionOrquesta,"Ingrese el codigo de orqor a modificar: "))
    {
    case 0:
        if (arrayOrquesta[posicionOrquesta].isEmpty == 0)
        {
            printf("Hubo coincidencia\n\n");

            while(seguir == 's')
            {
                printf("Elija el dato que desea modificar\n\n");

                printf("\n\n1-Nombre");
                printf("\n\n2-Apellido");
                printf("\n\n3-Salir de la modificacion");

                utn_getUnsignedInt("\n\t\tIngrese opcion: ", "Ingreso incorrecto\n", 1, 3, 2, &opcion);


                switch(opcion)
                {
                    case 1:
                        if (utn_getName("Ingrese el nuevo nombre de orquesta: ","Error",2,20,2, arrayOrquesta[posicionOrquesta].nombre)==0)
                        {
                            printf("El dato fue modificado con exito.\n\n");
                        }
                        break;
                    case 2:
                        if (utn_getName("Ingrese el nuevo lugar: " ,"Error, vuelva a ingresar\n\n",2,30,2, arrayOrquesta[posicionOrquesta].lugar)==0)
                        {
                            printf("El dato fue modificado con exito.\n\n");
                        }
                        break;

                    case 3:
                        seguir = 'n';
                        retorno = 0;
                        break;
                }
            }
        }
        break;

    case 1:
        printf("No se encontro el codigo de orqor");
        break;
        }

    return retorno;
}

int orq_existeId (Orquesta *arrayOrquesta, int cantidad, int id)
{
    int i;
    int retorno = 1;

        for(i=0; i < cantidad; i++)
        {
            if (arrayOrquesta[i].idOrquesta == id)
            {
                retorno=0;
                break;
            }
        }
    return retorno;
}

int orq_buscarEnArrayPorId2 (Orquesta *arrayOrquesta, int idOrquesta, int cantidad, int *orquestaEncontrada)
{
    int i;
    int retorno = 1;

        for(i=0; i < cantidad; i++)
        {
            if (arrayOrquesta[i].idOrquesta == idOrquesta)
            {
                retorno=0;
                *orquestaEncontrada=i;
                break;
            }
        }

    return retorno;
}
