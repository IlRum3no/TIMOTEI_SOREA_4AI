//
// Created by TIMOTEI SOREA on 20/09/2024, classe: 4AI.
//

#include "classifica.h"
#include <iostream>
#include <string>

Riga_t classifica[10];

void getplayername(std::string giocatore, int i){

    classifica[i].player = giocatore;

}

void getplayerpoints(int punti, int i){

    classifica[i].punteggio = punti;
}

void stampaclassifica(int numeroGiocatori) {
    std::cout << "------------------------------------" << std::endl;
    std::cout << "          CLASSIFICA                " << std::endl;
    std::cout << "------------------------------------" << std::endl;

    for (int i = 0; i < numeroGiocatori; i++) {
        std::cout << classifica[i].player << " : " << classifica[i].punteggio << std::endl;
    }

    std::cout << "------------------------------------" << std::endl;
}

void controlloclassifica(int numeroGiocatori) {

    int auxPunteggio;
    std::string auxGiocatore;


    for (int i = 0; i < numeroGiocatori - 1; i++) {
        for (int j = 0; j < numeroGiocatori - i - 1; j++) {

            if (classifica[j].punteggio < classifica[j + 1].punteggio) {


                auxPunteggio = classifica[j].punteggio;
                classifica[j].punteggio = classifica[j + 1].punteggio;
                classifica[j + 1].punteggio = auxPunteggio;


                auxGiocatore = classifica[j].player;
                classifica[j].player = classifica[j + 1].player;
                classifica[j + 1].player = auxGiocatore;
            }
        }
    }
}