#ifndef INFORMES_H_INCLUDED
#define INFORMES_H_INCLUDED
typedef struct
{
    int isEmpty;
    int idOrquesta;
    int cantMusico;
}ContadorMusicos;

void harcodeo(Orquesta *orquesta, Instrumento *instrumento, Musico *musico, int *generadorCodigoOrquesta, int *generadorCodigoInstrumento,  int *generadorCodigoMusico);
int musico_ordenarPorDobleCriterio(Musico *arrayMusico,int size, int orderFirst, int orderSecond);
int inf_contadorMusicosOrquesta(ContadorMusicos *arrayContadorMusicos, Orquesta *arrayOrquesta, Musico *arrayMusico, int cantidadMusico, int cantidadOrquesta);
int inf_orquestasDeUnLugar(Orquesta *arrayOrquesta, int cantidadOrquesta);
int inf_menosDe25(Musico *arrayMusico, Orquesta *arrayOrquesta, Instrumento *arrayInstrumento, int cantidadMusico,int cantidadOrquesta,int cantidadInstrumento);
int inf_Inicializar(ContadorMusicos *arrayContadorMusico, int cantidad);
int inf_InicializarCantidadMusico(ContadorMusicos *arrayMusico, int cantidad);
void inf_mostrarArrayContadorMusico(ContadorMusicos *arrayCantidadMusico, int cantidad);
int menosDe6musicos(ContadorMusicos *arrayContadorMusicos,Orquesta *arrayOrquesta, int cantidadOrquesta);
int menosMusicos(ContadorMusicos *arrayContadorMusicos,Orquesta *arrayOrquesta, int cantidadOrquesta);
int promedioInstrumentoPorOrquesta(ContadorMusicos *arrayContador, Musico *arrayMusico, int cantidadContador, int cantidadMusico);
int inf_contadorMusicosOrquesta(ContadorMusicos *arrayContadorMusicos,
                                Orquesta *arrayOrquesta,
                                Musico *arrayMusico,
                                int cantidadMusico,
                                int cantidadOrquesta);
int inf_posicionArrayContador(ContadorMusicos *arrayContadorMusicos, int *posicionResultante, int cantidadOrquesta, int idOrquesta);
int listaTodosInstrumentosDeUnaOrquesta(Musico *arrayMusico, Orquesta *arrayOrquesta, Instrumento *arrayInstrumento, int cantidadMusico,int cantidadInstrumento, int cantidadOrquesta);
int orquestaCompleta(   Orquesta *arrayOrquesta,
                        Musico *arrayMusico,
                        Instrumento *arrayInstrumento,
                        int cantidadOrquesta,
                        int cantidadMusico,
                        int cantidadInstrumento);
#endif // INFORMES_H_INCLUDED
