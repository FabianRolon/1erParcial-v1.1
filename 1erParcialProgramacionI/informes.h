#ifndef INFORMES_H_INCLUDED
#define INFORMES_H_INCLUDED
typedef struct
{
    int isEmpty;
    int idOrquesta;
    int cantMusico;
}ContadorMusicos;

#endif // INFORMES_H_INCLUDED

void inf_hardcodeo(Orquesta *orquesta, Instrumento *instrumento, Musico *musico, int *generadorCodigoOrquesta, int *generadorCodigoInstrumento,  int *generadorCodigoMusico);
int inf_musico_ordenarPorApellido( Musico arrayMusico[],
                                        int size);
int inf_contadorMusicosOrquesta(ContadorMusicos *arrayContadorMusicos, Orquesta *arrayOrquesta, Musico *arrayMusico, int cantidadMusico, int cantidadOrquesta);
int inf_orquestasDeUnLugar(Orquesta *arrayOrquesta, int cantidadOrquesta);
int inf_menosDe25(Musico *arrayMusico, Orquesta *arrayOrquesta, Instrumento *arrayInstrumento, int cantidadMusico,int cantidadOrquesta,int cantidadInstrumento);
int inf_Inicializar(ContadorMusicos *arrayContadorMusico, int cantidad);
int inf_InicializarCantidadMusico(ContadorMusicos *arrayMusico, int cantidad);
void inf_mostrarArrayContadorMusico(ContadorMusicos *arrayCantidadMusico, int cantidad);
int inf_musicosNoInstrumentoViento(Musico arrayMusico[], Instrumento *arrayInstrumento, int cantidadInstrumento, int cantidadMusico);
int inf_menosDe6musicos(ContadorMusicos *arrayContadorMusicos,Orquesta *arrayOrquesta, int cantidadOrquesta);
int inf_menosMusicos(ContadorMusicos *arrayContadorMusicos,Orquesta *arrayOrquesta, int cantidadOrquesta);
int inf_promedioInstrumentoPorOrquesta(ContadorMusicos *arrayContador, Musico *arrayMusico, int cantidadContador, int cantidadMusico);
int inf_contadorMusicosOrquesta(ContadorMusicos *arrayContadorMusicos,
                                Orquesta *arrayOrquesta,
                                Musico *arrayMusico,
                                int cantidadMusico,
                                int cantidadOrquesta);
int inf_posicionArrayContador(ContadorMusicos *arrayContadorMusicos, int *posicionResultante, int cantidadOrquesta, int idOrquesta);
int inf_listaTodosInstrumentosDeUnaOrquesta(Musico *arrayMusico, Orquesta *arrayOrquesta, Instrumento *arrayInstrumento, int cantidadMusico,int cantidadInstrumento, int cantidadOrquesta);
int inf_orquestaCompleta(   Orquesta *arrayOrquesta,
                            Musico *arrayMusico,
                            Instrumento *arrayInstrumento,
                            int cantidadOrquesta,
                            int cantidadMusico,
                            int cantidadInstrumento);
void inf_ordenarPorApellido(Musico arrayMusico[], int inicio, int final);

