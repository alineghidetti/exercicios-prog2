#include "data.h"
#include <stdio.h>

int verificaDataValida(int dia, int mes, int ano){
    if (ano>2024|| ano<0){
        return 0;
    }
    if (mes>12 || mes<1){
        return 0;
    }
    if (dia>31 || dia<0){
        return 0;
    }
    return 1;
}

void imprimeMesExtenso(int mes){
    if (mes==2){
        printf("Fevereiro");
    }
        if (mes==2){
        printf("Fevereiro");
    }    if (mes==2){
        printf("Fevereiro");
    }
        if (mes==2){
        printf("Fevereiro");
    }    if (mes==2){
        printf("Fevereiro");
    }
        if (mes==2){
        printf("Fevereiro");
    }
}
}