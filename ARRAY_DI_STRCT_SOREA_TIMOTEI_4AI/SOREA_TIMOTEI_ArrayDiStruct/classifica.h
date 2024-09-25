//
// Created by TIMOTEI SOREA on 20/09/2024, classe: 4AI.
//

#include <string>

#ifndef ARRAYDISTRUCT_CLASSIFICA_H
#define ARRAYDISTRUCT_CLASSIFICA_H

typedef struct Tabella {

    std::string player;
    int punteggio;
} Riga_t;


void getplayername(std::string giocatore, int i);

void getplayerpoints(int punti, int i);

void stampaclassifica(int numeroGiocatori);

void controlloclassifica(int numeroGiocatori);




#endif //ARRAYDISTRUCT_CLASSIFICA_H
