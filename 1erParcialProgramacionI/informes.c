#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <ctype.h>
#include "instrumento.h"
#include "orquesta.h"
#include "musico.h"
#include "informes.h"
#include "utn.h"
#define CANTIDAD_ORQUESTA 50
#define CANTIDAD_INSTRUMENTO 20
#define CANTIDAD_MUSICO 1000

void harcodeo(Orquesta *orquesta, Instrumento *instrumento, Musico *musico, int *generadorCodigoOrquesta, int *generadorCodigoInstrumento,  int *generadorCodigoMusico)
{
    orquesta[0].idOrquesta=1;
    orquesta[0].isEmpty=0;
    strcpy(orquesta[0].nombre,"Orquesta1");
    strcpy(orquesta[0].lugar,"LugarUno");
    orquesta[0].tipo = 1;


    orquesta[1].idOrquesta=2;
    orquesta[1].isEmpty=0;
    strcpy(orquesta[1].nombre,"Orquesta2");
    strcpy(orquesta[1].lugar,"LugarUno");
    orquesta[1].tipo = 2;

    orquesta[2].idOrquesta=3;
    orquesta[2].isEmpty=0;
    strcpy(orquesta[2].nombre,"Orquesta3");
    strcpy(orquesta[2].lugar,"LugarDos");
    orquesta[2].tipo = 3;

    orquesta[3].idOrquesta=4;
    orquesta[3].isEmpty=0;
    strcpy(orquesta[3].nombre,"Orquesta4");
    strcpy(orquesta[3].lugar,"LugarTres");
    orquesta[3].tipo = 2;
    *generadorCodigoOrquesta = 5;

    instrumento[0].idInstrumento=1;
    instrumento[0].isEmpty=0;
    strcpy(instrumento[0].nombre,"Instr1");
    instrumento[0].tipo = 1;

    instrumento[1].idInstrumento=2;
    instrumento[1].isEmpty=0;
    strcpy(instrumento[1].nombre,"Instr2");
    instrumento[1].tipo = 2;

    instrumento[2].idInstrumento=3;
    instrumento[2].isEmpty=0;
    strcpy(instrumento[2].nombre,"Instr3");
    instrumento[2].tipo = 2;

    instrumento[3].idInstrumento=4;
    instrumento[3].isEmpty=0;
    strcpy(instrumento[3].nombre,"Instr4");
    instrumento[3].tipo = 3;

    instrumento[4].idInstrumento=5;
    instrumento[4].isEmpty=0;
    strcpy(instrumento[4].nombre,"Instr5");
    instrumento[4].tipo = 4;
    *generadorCodigoInstrumento = 6;

    musico[0].idMusico=1;
    musico[0].isEmpty=0;
    strcpy(musico[0].nombre,"Mus1");
    strcpy(musico[0].apellido,"AMus1");
    musico[0].edad = 30;
    musico[0].idOrquesta = 1;
    musico[0].idInstrumento = 2;

    musico[1].idMusico=2;
    musico[1].isEmpty=0;
    strcpy(musico[1].nombre,"Mus2");
    strcpy(musico[1].apellido,"AMus");
    musico[1].edad = 20;
    musico[1].idOrquesta = 2;
    musico[1].idInstrumento = 4;

    musico[2].idMusico=3;
    musico[2].isEmpty=0;
    strcpy(musico[2].nombre,"Mus3");
    strcpy(musico[2].apellido,"AMus3");
    musico[2].edad = 25;
    musico[2].idOrquesta = 4;
    musico[2].idInstrumento = 2;

    musico[3].idMusico=4;
    musico[3].isEmpty=0;
    strcpy(musico[3].nombre,"Mus4");
    strcpy(musico[3].apellido,"AMus4");
    musico[3].edad = 27;
    musico[3].idOrquesta = 4;
    musico[3].idInstrumento = 1;

    musico[4].idMusico=5;
    musico[4].isEmpty=0;
    strcpy(musico[4].nombre,"Mus5");
    strcpy(musico[4].apellido,"AMus5");
    musico[4].edad = 22;
    musico[4].idOrquesta = 1;
    musico[4].idInstrumento = 3;

    musico[5].idMusico=6;
    musico[5].isEmpty=0;
    strcpy(musico[5].nombre,"Mus6");
    strcpy(musico[5].apellido,"AMus6");
    musico[5].edad = 35;
    musico[5].idOrquesta = 3;
    musico[5].idInstrumento = 4;

    musico[6].idMusico=7;
    musico[6].isEmpty=0;
    strcpy(musico[6].nombre,"Mus7");
    strcpy(musico[6].apellido,"AMus7");
    musico[6].edad = 25;
    musico[6].idOrquesta = 4;
    musico[6].idInstrumento = 3;

    musico[7].idMusico=8;
    musico[7].isEmpty=0;
    strcpy(musico[7].nombre,"Mus8");
    strcpy(musico[7].apellido,"AMus8");
    musico[7].edad = 27;
    musico[7].idOrquesta = 4;
    musico[7].idInstrumento = 1;

    musico[8].idMusico=9;
    musico[8].isEmpty=0;
    strcpy(musico[8].nombre,"Mus9");
    strcpy(musico[8].apellido,"AMus9");
    musico[8].edad = 25;
    musico[8].idOrquesta = 4;
    musico[8].idInstrumento = 4;

    musico[9].idMusico=10;
    musico[9].isEmpty=0;
    strcpy(musico[9].nombre,"Mus9");
    strcpy(musico[9].apellido,"AMus9");
    musico[9].edad = 27;
    musico[9].idOrquesta = 4;
    musico[9].idInstrumento = 1;

    musico[10].idMusico=11;
    musico[10].isEmpty=0;
    strcpy(musico[10].nombre,"Mus10");
    strcpy(musico[10].apellido,"AMus10");
    musico[10].edad = 27;
    musico[10].idOrquesta = 4;
    musico[10].idInstrumento = 1;

    musico[11].idMusico=12;
    musico[11].isEmpty=0;
    strcpy(musico[11].nombre,"Mus11");
    strcpy(musico[11].apellido,"AMus11");
    musico[11].edad = 27;
    musico[11].idOrquesta = 4;
    musico[11].idInstrumento = 3;

    musico[12].idMusico=13;
    musico[12].isEmpty=0;
    strcpy(musico[12].nombre,"Mus12");
    strcpy(musico[12].apellido,"AMus12");
    musico[12].edad = 27;
    musico[12].idOrquesta = 4;
    musico[12].idInstrumento = 3;

    musico[13].idMusico=14;
    musico[13].isEmpty=0;
    strcpy(musico[13].nombre,"Mus13");
    strcpy(musico[13].apellido,"AMus13");
    musico[13].edad = 25;
    musico[13].idOrquesta = 4;
    musico[13].idInstrumento = 5;
    *generadorCodigoMusico = 14;
}



/** \brief Ordena por campo XXXXX los elementos de un array ante la igualdad de estos ordena por el campo ZZZZZZ
* \param array musico Array de musico
* \param size int Tamaño del array
* \param orderFirst int Determina si el orden del primer criterio es ascendete o descendente
* \param orderSecond int Determina si el orden del segunbdo criterio es ascendete o descendente
* \return int Return (-1) si Error [largo no valido o NULL pointer] - (0) si se ordena exitosamente
*
*/
int musico_ordenarPorDobleCriterio(Musico *arrayMusico,int size, int orderFirst, int orderSecond)
{
    int retorno=-1;
    int i;
    Musico buffer;
    int flagSwap;

    if(arrayMusico!=NULL && size>=0)
    {
        do
        {
            flagSwap=0;
            for (i = 1; i < size-1; i++)
            {
                if( ((strcmp(arrayMusico[i].nombre,arrayMusico[i+1].nombre) < 0) && orderFirst) ||
                    ((strcmp(arrayMusico[i].nombre,arrayMusico[i+1].nombre) > 0) && !orderFirst) )
                {
                    flagSwap=1;
                    buffer = arrayMusico[i];
                    arrayMusico[i] = arrayMusico[i+1];
                    arrayMusico[i+1] = buffer;
                }
                else if(strcmp(arrayMusico[i].nombre,arrayMusico[i+1].nombre) == 0)
                {
                    if( ((arrayMusico[i].apellido < arrayMusico[i+1].apellido) && orderSecond) ||
                        ((arrayMusico[i].apellido > arrayMusico[i+1].apellido) && !orderSecond) )
                    {
                        flagSwap=1;
                        buffer = arrayMusico[i];
                        arrayMusico[i] = arrayMusico[i+1];
                        arrayMusico[i+1] = buffer;
                    }
                }
            }
        }while(flagSwap);
        retorno=0;
    }
    return retorno;
}

/** \brief Inicializa el campo isEmpty en 1(vacio)
* \param arrayContadorMusicos Array de contadorMusico
* \param cantidad es el tamaño del array
* \return int Return (-1) si Error [largo no valido o NULL pointer] - (0) si se inicializa correctamente
*
*/
int inf_InicializarCantidadMusico(ContadorMusicos *arrayContadorMusicos, int cantidad)
{
    int retorno = -1;
    int i;
    if(arrayContadorMusicos != NULL && cantidad > 0)
    {
        for (i = 0; i < cantidad; i++)
        {
            arrayContadorMusicos[i].isEmpty = 1;
            retorno=0;
        }
    }
    return retorno;
}

/** \brief Inicializa el campo cantMusico en 0(vacio)
* \param arrayContadorMusicos Array de contadorMusico
* \param cantidad es el tamaño del array
* \return int Return (-1) si Error [largo no valido o NULL pointer] - (0) si se inicializa correctamente
*
*/
int inf_Inicializar(ContadorMusicos *arrayContadorMusico, int cantidad)
{
    int retorno = -1;
    int i;

    for (i = 0; i < cantidad; i++)
    {
        arrayContadorMusico[i].cantMusico = 0;
        retorno=0;
    }

    return retorno;
}

/** \brief busca en el array de contadorMusicos la posicion correcta para una
            orquesta recibida o crea una nueva si no esta guardada
* \param arrayContadorMusicos Array de contadorMusico
* \param int posicionResultante guarda la posicion del array a escribir
* \param cantidadOrquesta es el tamaño del array
* \param int idOrquesta recibe el idOrquesta a buscar si esta guardado
* \return int Return (-1) si Error [largo no valido o NULL pointer] - (0) si se encuentra una posicion correctamente
*
*/
int inf_posicionArrayContador(ContadorMusicos *arrayContadorMusicos, int *posicionResultante, int cantidadOrquesta, int idOrquesta)
{
    int retorno = -1;
    int i;
    if(arrayContadorMusicos != NULL && posicionResultante != NULL && cantidadOrquesta > 0)
    {

        for(i=0;i<cantidadOrquesta;i++)
        {
            if(arrayContadorMusicos[i].isEmpty == 1)
            {
                    *posicionResultante = i;
                    arrayContadorMusicos[i].isEmpty = 0;
                    arrayContadorMusicos[i].idOrquesta = idOrquesta;
                    retorno = 0;
                    break;
            }
            else
            {
                if(arrayContadorMusicos[i].idOrquesta == idOrquesta)
                {
                    *posicionResultante = i;
                    retorno = 0;
                    break;
                }
            }


        }
    }
    return retorno;
}

/** \brief  cuenta La cantidad de musicos que hay por orquesta y lo guarda en
            una nueva entidad
* \param arrayContadorMusicos Array de contadorMusico
* \param arrayOrquesta array de Orquesta
* \param arrayMusico array de Musico
* \param cantidadMusico tamaño de array de Musico
* \param cantidadOrquesta tamaño de array de Orquesta
* \return   int Return (-1) si Error [largo no valido o NULL pointer] -
            (0) si se realiza el conteo correctamente
*
*/
int inf_contadorMusicosOrquesta(ContadorMusicos *arrayContadorMusicos,
                                Orquesta *arrayOrquesta,
                                Musico *arrayMusico,
                                int cantidadMusico,
                                int cantidadOrquesta)
{
    int retorno = -1;
    int i;
    int j;
    int posicionArrayContador;
    inf_Inicializar(arrayContadorMusicos, cantidadOrquesta);

    if(arrayContadorMusicos != NULL && arrayMusico != NULL && arrayOrquesta != NULL)
    {
        for(i = 0; i<cantidadOrquesta; i++)
        {
            if( arrayOrquesta[i].isEmpty == 0)
            {
                if(inf_posicionArrayContador(arrayContadorMusicos, &posicionArrayContador, cantidadOrquesta, arrayOrquesta[i].idOrquesta) == 0 )
                {

                    for(j = 0;j<cantidadMusico;j++)
                    {
                        if(arrayMusico[j].isEmpty == 0 && arrayContadorMusicos[posicionArrayContador].idOrquesta == arrayMusico[j].idOrquesta)
                        {
                            arrayContadorMusicos[posicionArrayContador].cantMusico++;
                        }
                    }
                }
            }
        }
        retorno = 0;
    }
    return retorno;
}
/** \brief  se ingresa un nombre de un lugar, busca las orquestas
            pertenecientes y las lista
* \param arrayOrquesta Array de Orquesta
* \param arrayOrquesta array de Orquesta
* \param cantidadOrquesta tamaño de array de Orquesta
* \return   int Return (-1) si Error [largo no valido o NULL pointer] -
            (0) si lista al menos una orquesta correctamente - (-2) si
            no encuentra el lugar ingrersado
*
*/
int inf_orquestasDeUnLugar(Orquesta *arrayOrquesta, int cantidadOrquesta)
{
    int retorno = -1;
    char auxLugar[30];
    int auxFlag;
    int i;

    utn_getName("\nIngrese un lugar: \n", "\nError, dato no valido", 3, 30,2, auxLugar);

    if(arrayOrquesta != NULL && cantidadOrquesta > 0)
    {
        auxFlag = 1;
        for(i=0;i<cantidadOrquesta;i++)
        {
            if(strcmp(auxLugar, arrayOrquesta[i].lugar) == 0 && arrayOrquesta[i].isEmpty == 0)
            {
                auxFlag = 0;
                printf("ID de Orquesta: %d\n", arrayOrquesta[i].idOrquesta);
                printf("Nombre: %s\n", arrayOrquesta[i].nombre);
                printf("Lugar: %s\n", arrayOrquesta[i].lugar);
                switch(arrayOrquesta[i].tipo)
                {
                    case 1:
                        printf("Tipo: 1-Sinfonica\n\n");
                        break;
                    case 2:
                        printf("Tipo: 2-Filarmonica\n\n");
                        break;
                    case 3:
                        printf("Tipo: 3-Camara\n\n");
                        break;
                }
                retorno = 0;
            }
            else
            {
                if(auxFlag)
                {
                    printf("No hubo coincidencia\n\n");
                    retorno = -2;
                }
                break;
            }


        }
    }
    return retorno;
}
/** \brief  Lista los musicos con menos de 25 años
* \param arrayMusico Array de Musico
* \param arrayOrquesta array de Orquesta
* \param arrayInstrumentoi array de Instrumento
* \param cantidadMusico tamaño de array de Musico
* \param cantidadOrquesta tamaño de array de Orquesta
* \param cantidadInstrumento tamaño de array de Instrumento
* \return   int Return (-1) si Error [largo no valido o NULL pointer] -
            (0) si lista al menos un musico correctamente - (-2) si
            no encuentra ninguno
*
*/
int inf_menosDe25(  Musico *arrayMusico,
                    Orquesta *arrayOrquesta,
                    Instrumento *arrayInstrumento,
                    int cantidadMusico,
                    int cantidadOrquesta,
                    int cantidadInstrumento)
{
    int retorno = -1;
    int auxPosInstrumento;
    int auxPosOrquesta;
    int auxFlag;

    int i;

    if( arrayMusico != NULL &&
        arrayOrquesta != NULL  &&
        arrayInstrumento != NULL &&
        cantidadMusico > 0 &&
        cantidadOrquesta > 0 &&
        cantidadInstrumento > 0)
    {
        auxFlag = 1;
        for(i = 0;i < cantidadMusico; i++)
        {
            if(arrayMusico[i].isEmpty == 0)
            {
                if(arrayMusico[i].edad < 25 )
                {
                    auxFlag = 0;
                    printf("ID de musico: %d\n", arrayMusico[i].idMusico);
                    printf("Nombre: %s\n", arrayMusico[i].nombre);
                    printf("Apellido: %s\n", arrayMusico[i].apellido);
                    printf("Edad: %d\n", arrayMusico[i].edad);
                    ins_buscarEnArrayPorId (arrayInstrumento, arrayMusico[i].idInstrumento, cantidadInstrumento, &auxPosInstrumento);
                    printf("Instrumento: %s\n", arrayInstrumento[auxPosInstrumento].nombre);
                    orq_buscarEnArrayPorId2 (arrayOrquesta, arrayMusico[i].idOrquesta, cantidadOrquesta, &auxPosOrquesta);
                    printf("Orquesta: %s\n", arrayOrquesta[auxPosOrquesta].nombre);
                    retorno = 0;
                }
            }
        }
        if(auxFlag)
        {
            printf("\nNo hay ningun musico menor a 25\n");
            retorno = -2;
        }

    }
    return retorno;
}
/** \brief  Lista de cantidades de musico por orquesta
* \param arrayContadorMusico Array de Musico
* \param cantidadContadorMusico tamaño de array de contadorMusico
* \param cantidadOrquesta tamaño de array de Orquesta
* \return void
*
*/
void inf_mostrarArrayContadorMusico(ContadorMusicos *arrayContadorMusico, int cantidad)
{
    int i;

    printf("\n\n\t\t\t\t||Lista de cantidades de musico por orquesta||\n\n");

    for (i = 0; i < cantidad ;i++)
    {
        if(arrayContadorMusico[i].isEmpty == 0)
        {

            printf("ID de Orquesta: %d\n", arrayContadorMusico[i].idOrquesta);
            printf("Cantidad de musicos: %d\n", arrayContadorMusico[i].cantMusico);
        }
    }
}
/** \brief  Lista las orquestas con menos de 6 musicos
* \param arrayContadorMusico Array de contadorMusico
* \param arrayOrquesta array de Orquesta
* \param cantidadMusico tamaño de array de Musico
* \param cantidadOrquesta tamaño de array de Orquesta
* \return   int Return (-1) si Error [largo no valido o NULL pointer] -
            (0) si lista al menos una orquesta correctamente - (-2) si
            no encuentra ninguna
*
*/
int menosDe6musicos(ContadorMusicos *arrayContadorMusicos,Orquesta *arrayOrquesta, int cantidadOrquesta)
{
    int retorno = -1;
    int i;
    int posicionOrquesta;
    int auxFlag;

    if(arrayContadorMusicos != NULL && arrayOrquesta != NULL && cantidadOrquesta > 0)
    {
        auxFlag = 1;
        for(i=0;i<cantidadOrquesta;i++)
        {
            if(arrayContadorMusicos[i].cantMusico < 6 && arrayContadorMusicos[i].isEmpty == 0)
            {
                auxFlag = 0;
                orq_buscarEnArrayPorId2 (arrayOrquesta, arrayContadorMusicos[i].idOrquesta, cantidadOrquesta, &posicionOrquesta);
                printf("ID de Orquesta: %d\n", arrayOrquesta[posicionOrquesta].idOrquesta);
                printf("Nombre: %s\n", arrayOrquesta[posicionOrquesta].nombre);
                printf("Lugar: %s\n", arrayOrquesta[posicionOrquesta].lugar);
                switch(arrayOrquesta[posicionOrquesta].tipo)
                {
                    case 1:
                        printf("Tipo: 1-Sinfonica\n\n");
                        break;
                    case 2:
                        printf("Tipo: 2-Filarmonica\n\n");
                        break;
                    case 3:
                        printf("Tipo: 3-Camara\n\n");
                        break;
                }
                retorno = 0;
            }
        }
        if(auxFlag)
        {
            printf("\nNo se encontraron orquestas con menos de 6 musicos\n");
            retorno = -2;
        }
    }
    return retorno;
}
/** \brief  Lista los instrumentos de una orquesta que ingresa el usuario
* \param arrayMusico Array de Musico
* \param arrayOrquesta array de Orquesta
* \param arrayInstrumentoi array de Instrumento
* \param cantidadMusico tamaño de array de Musico
* \param cantidadInstrumento tamaño de array de Instrumento
* \param cantidadOrquesta tamaño de array de Orquesta
* \return   int Return (-1) si Error [largo no valido o NULL pointer] -
            (0) si lista correctamente
*
*/
int listaTodosInstrumentosDeUnaOrquesta(Musico *arrayMusico, Orquesta *arrayOrquesta, Instrumento *arrayInstrumento, int cantidadMusico,int cantidadInstrumento, int cantidadOrquesta)
{
    int retorno = -1;
    int auxPosInstrumento;
    int idOrquesta;
    int i;

    if( arrayMusico != NULL &&
        arrayInstrumento != NULL &&
        cantidadMusico > 0 &&
        cantidadInstrumento > 0)
    {

        utn_getUnsignedInt("\n\n\tIngrese el Id de Orquesta para listar sus instrumentos: ","Ingreso incorrecto\n",1,cantidadOrquesta,2,&idOrquesta);

        for(i = 0; i < cantidadMusico; i++)
        {
            if(arrayMusico[i].idOrquesta == idOrquesta && arrayMusico[i].isEmpty == 0)
            {
                ins_buscarEnArrayPorId(arrayInstrumento, arrayMusico[i].idInstrumento, cantidadInstrumento, &auxPosInstrumento);
                printf("Nombre Instrumento: %s\n", arrayInstrumento[auxPosInstrumento].nombre);
                switch(arrayInstrumento[auxPosInstrumento].tipo)
                {
                    case 1:
                        printf("Tipo: 1-Cuerdas\n");
                        break;
                    case 2:
                        printf("Tipo: 2-Viento-madera\n");
                        break;
                    case 3:
                        printf("Tipo: 3-Viento-metal\n");
                        break;
                    case 4:
                        printf("Tipo: 4-Percusion\n");
                        break;
                }
                printf("Nombre Musico: %s\n\n", arrayMusico[i].nombre);
            }
        }
        retorno = 0;
    }
    return retorno;
}
/** \brief  Muestra la orquesta con menos musicos
* \param arraycontadorMusico Array de contadorMusico
* \param arrayOrquesta array de Orquesta
* \param cantidadMusico tamaño de array de Musico
* \param cantidadOrquesta tamaño de array de Orquesta
* \return   int Return (-1) si Error [largo no valido o NULL pointer] -
            (0) si sale todo correctamente
*
*/
int menosMusicos(ContadorMusicos *arrayContadorMusicos,Orquesta *arrayOrquesta, int cantidadOrquesta)
{
    int retorno = -1;
    int i;
    int posicionOrquesta;
    int menosMusicos = 1000;

    if(arrayContadorMusicos != NULL && arrayOrquesta != NULL && cantidadOrquesta > 0)
    {
        for(i=0;i<cantidadOrquesta;i++)
        {
            if(arrayContadorMusicos[i].cantMusico < menosMusicos && arrayContadorMusicos[i].isEmpty == 0)
            {
                menosMusicos = arrayContadorMusicos[i].cantMusico;
                posicionOrquesta = i;
            }
        }
        orq_buscarEnArrayPorId2 (arrayOrquesta, arrayOrquesta[posicionOrquesta].idOrquesta, cantidadOrquesta, &posicionOrquesta);
        printf("ID de Orquesta: %d\n", arrayOrquesta[posicionOrquesta].idOrquesta);
        printf("Nombre: %s\n", arrayOrquesta[posicionOrquesta].nombre);
        printf("Lugar: %s\n", arrayOrquesta[posicionOrquesta].lugar);
        printf("Cantidad de musicos: %d\n", menosMusicos);
        switch(arrayOrquesta[posicionOrquesta].tipo)
        {
            case 1:
                printf("Tipo: 1-Sinfonica\n\n");
                break;
            case 2:
                printf("Tipo: 2-Filarmonica\n\n");
                break;
            case 3:
                printf("Tipo: 3-Camara\n\n");
                break;
        }
        for(i=0;i<cantidadOrquesta;i++)
        {
            if(arrayContadorMusicos[i].cantMusico == menosMusicos && arrayContadorMusicos[i].isEmpty == 0)
            {
                menosMusicos = arrayContadorMusicos[i].cantMusico;
                posicionOrquesta = i;
            }
        }
        orq_buscarEnArrayPorId2 (arrayOrquesta, arrayOrquesta[posicionOrquesta].idOrquesta, cantidadOrquesta, &posicionOrquesta);
        printf("ID de Orquesta: %d\n", arrayOrquesta[posicionOrquesta].idOrquesta);
        printf("Nombre: %s\n", arrayOrquesta[posicionOrquesta].nombre);
        printf("Lugar: %s\n", arrayOrquesta[posicionOrquesta].lugar);
        printf("Cantidad de musicos: %d\n", menosMusicos);
        switch(arrayOrquesta[posicionOrquesta].tipo)
        {
            case 1:
                printf("Tipo: 1-Sinfonica\n\n");
                break;
            case 2:
                printf("Tipo: 2-Filarmonica\n\n");
                break;
            case 3:
                printf("Tipo: 3-Camara\n\n");
                break;
        }
        retorno = 0;
    }
    return retorno;
}

/*int musicosNoInstrumentoViento(Musico *arrayMusico, Instrumento *arrayInstrumento, int cantidadInstrumento, int cantidadMusico)
{
     if(arrayMusicos != NULL && arrayOrquesta != NULL && cantidadOrquesta > 0 && cantidadMusico >0)
     {
        if(arrayMusico[i].)
     }
}*/
/** \brief  Imprime en pantalla el promedio de musicos por orquesta
* \param arrayContador Array de ContadorMusicos
* \param arrayMusico Array de Musico
* \param cantidadContador tamaño de array de ContadorMusicos
* \param cantidadMusico tamaño de array de Musico
* \return   int Return (-1) si Error [largo no valido o NULL pointer] -
            (0) si sale todo OK!
*
*/
int promedioInstrumentoPorOrquesta(ContadorMusicos *arrayContador, Musico *arrayMusico, int cantidadContador, int cantidadMusico)
{
    int retorno = -1;
    int i;
    int contadorOrquestas = 0;
    int contadorInstrumentos = 0;
    float promedio;

    if(arrayContador != NULL && arrayMusico != NULL && cantidadContador >0)
    {
        for(i=0;i<cantidadContador;i++)
        {
            if(arrayContador[i].isEmpty == 0)
            {
                contadorOrquestas++;
            }
        }
        for(i=0;i<cantidadMusico;i++)
        {
            if(arrayMusico[i].isEmpty == 0)
            {
                contadorInstrumentos++;
            }
        }

        promedio = contadorInstrumentos/(float)contadorOrquestas;
        printf("El promedio de instrumentos por orquesta es: %.2f\n\n", promedio);
        retorno = 0;
    }

    return retorno;
}
/** \brief  Lista las orquestas que se dicen completas
* \param arrayOrquesta array de Orquesta
* \param arrayMusico Array de Musico
* \param arrayInstrumentoi array de Instrumento
* \param cantidadOrquesta tamaño de array de Orquesta
* \param cantidadMusico tamaño de array de Musico
* \param cantidadInstrumento tamaño de array de Instrumento
* \return   int Return (-1) si Error [largo no valido o NULL pointer] -
            (0) si lista al menos un musico correctamente
*
*/
int orquestaCompleta(   Orquesta *arrayOrquesta,
                        Musico *arrayMusico,
                        Instrumento *arrayInstrumento,
                        int cantidadOrquesta,
                        int cantidadMusico,
                        int cantidadInstrumento)
{
    int retorno = -1;
    int i;
    int j;
    int auxPosInstrumento;
    int contadorViento;
    int contadorPercusion;
    int contadorCuerda;
    int auxFlag;

    if( arrayMusico != NULL &&
        arrayOrquesta != NULL  &&
        arrayInstrumento != NULL &&
        cantidadMusico > 0 &&
        cantidadOrquesta > 0 &&
        cantidadInstrumento > 0)
    {
        auxFlag = 1;
        for(i = 0; i < cantidadOrquesta; i++)
        {
            contadorViento = 0;
            contadorPercusion = 0;
            contadorCuerda = 0;
            if(arrayOrquesta[i].isEmpty == 0)
            {
                for(j = 0; j < cantidadMusico; j++)
                {
                     if(arrayMusico[j].isEmpty == 0 && arrayMusico[j].idOrquesta == arrayOrquesta[i].idOrquesta)
                     {
                       ins_buscarEnArrayPorId(arrayInstrumento, arrayMusico[j].idInstrumento, cantidadInstrumento, &auxPosInstrumento);
                       switch(arrayInstrumento[auxPosInstrumento].tipo)
                       {
                            case 1:
                                contadorCuerda++;
                                break;
                            case 2:
                                contadorViento++;
                                break;
                            case 3:
                                contadorViento++;
                                break;
                            case 4:
                                contadorPercusion++;
                                break;
                       }
                     }
                }
            }
            if(arrayOrquesta[i].isEmpty == 0 && contadorCuerda >= 4 && contadorViento >= 4 && contadorPercusion >=1)
            {
                auxFlag = 0;
                printf("\n\n\t\tOrquestas Completas\n\n");
                printf("ID de Orquesta: %d\n", arrayOrquesta[i].idOrquesta);
                printf("Nombre: %s\n", arrayOrquesta[i].nombre);
                printf("Lugar: %s\n\n", arrayOrquesta[i].lugar);
                retorno = 0;
            }
        }
        if(auxFlag)
        {
            printf("\nNo se encontraron orquestas completas\n");
            retorno = -2;
        }
    }
    return retorno;
}
