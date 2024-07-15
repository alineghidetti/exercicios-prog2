#ifndef _FRANQUIA_H_
#define _FRANQUIA_H_
#include <stdio.h>

#define TAM_MAX_NOME 32
#define TAM_MAX_CONF 6

typedef struct{
    char[TAM_MAX_NOME] nome;
    char[TAM_MAX_CONF] conferencia;
    int vitorias;
    int derrotas;
    int partidas;
}tFranquia;

tFranquia LerFranquia(){
    tFranquia franquia;
    scanf("%s", franquia.nome);
    scanf("%s", franquia.conferencia);
    return franquia;
}














#endif
