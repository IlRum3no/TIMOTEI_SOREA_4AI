//
// Created by TIMOTEI SOREA on 20/09/2024, classe: 4AI.
//

#include <iostream>
#include "classifica.h"
#include <string>

using namespace std;


int main() {
//DICHIARAZIONE DELLE VARIABILI E ASSEGNAMENTO
    string name;
    string controllo_2;
    string controllo_3;

    int punti;
    int index_1 = 0;
    int controllo;
    int NumPlayers = 10;

    bool fine = false;
//INIZIO CICLO ITERATIVO
    while (!fine) {

        //COMANDI PER INSERIRE IL GIOCATORE
        std::cout << endl;
        std::cout << "------------------------------------";
        std::cout << endl;
        std::cout << "Inserire nome giocatore e punteggio ?"<<endl;
        std::cout << "se si premi '1', altrimenti '0' :>";
        std::cin >> controllo;

        if ( controllo == 1) {
            std::cout << " Inserisci giocatore :> ";
            std::cin >> name;
            std::cout << "Inserisci punteggio :> ";
            std::cin >> punti;

            getplayername(name, index_1);
            getplayerpoints(punti, index_1);

            index_1 ++;
        }

        // COMANDI PER ORDINARE E STAMPARE LA CLASSIFICA
        std::cout << "Stampa classifica?"<<endl;
        std::cout << "Se si, scrivi 'SI', altrimenti 'NO' :> ";
        std::cin >> controllo_2;

        if ( controllo_2 == "SI" || controllo_2 == "si" ){
            controlloclassifica(NumPlayers);
            stampaclassifica(NumPlayers);
        }
        // COMANDI PER USCIRE DAL CICLO
        std::cout << "Continuare o uscire?"<<endl;
        std::cout << "'SI' (per continuare nella classifica ), 'NO' per uscire :>";
        std::cin >> controllo_3;

        if ( controllo_3 == "NO" || controllo_3 == "no"){
            fine = true;
        }


    }

    return 0;
}
