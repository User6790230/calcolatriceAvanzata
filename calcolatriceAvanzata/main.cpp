#include <iostream>
#include <cmath>
using namespace std;
#define MIN_MOD 0
#define MAX_MOD 5

/* Stampa i saluti iniziali */
void benvenuti() {
    cout << "Benvenuti nella Calcolatrice Avanzata della 3CI" << endl;
}

/* Stampa i crediti */
void crediti() {
    cout << "Al programma hanno contribuito i seguenti programmatori:" << endl;
    cout << "Riccardo Rosso" << endl;
}

/* Stampa le regole */
void regole_menu() {
    cout << "La calcolatrice lavora con input interi" << endl;
    cout << "Le modalità accessibili sono le seguenti:" << endl;
    cout << "Modalità espressione unaria di base [digitare 1]" << endl;
    cout << "Modalità espressione unaria avanzata [digitare 2]" << endl;
    cout << "Modalità espressione binaria di base [digitare 3]" << endl;
    cout << "Modalità espressione binaria manuale [digitare 4]" << endl;
    cout << "Modalità espressione unaria avanzata [digitare 5]" << endl;
    cout << "Stampa i crediti [digitare 0]" << endl;
}

/* Gestisci degli errori */
void gestisci_errore() {
    cout << "Errore nella scelta" << endl;
}

/* Scelta utente dal menu' */
int scelta_menu() {
    int scelta = 0;
    
    cout << "Inserisci la scelta: ";
    cin >> scelta;
    
    while (scelta > MAX_MOD || scelta < MIN_MOD) {
        cout << "Inserisci la scelta: ";
        cin >> scelta;
    }
    
    return scelta;
}

/* Funzione principale */
int main() {
    int scelta = 0;
    
    benvenuti();
    regole_menu();
    scelta = scelta_menu();
    if (scelta == 0) {
        crediti();
    } else if (scelta == 1) {
        cout << "Sei nella modalita' unaria di base" << endl;
        cout << "Scegli tra: " << endl;
        cout << "Radice quadrata [digitare 0]"<< endl;
        /*
            radice quadrata [LEONARDO]
            quadrato
            cubo
            fattoriale: n! = 1 * 2 * 3 * ... * n [LEONARDO]
            logaritmo naturale [CORRADO]
            negazione: trovo -n [SEBASTIAN]
            incremento: n + 1 [NICOLO']
            decremento: n - 1 [NICOLO']
            doppio: 2*n [MATTIA]
            valore assoluto: numero senza segno [SEBASTIAN]
            pari: trovo se è pari (booleano) [NICOLO']
            positività: trovo se è positivo (booleano)
            uguale a 0: booleano
            potenza per se stesso [CORRADO]
            10 alla n [KOL]
            successione: se do n, stampa: 1 2 3 4 5 ... n-1 n [MATTIA]
            tabellina: se do n, trovo la tabellina di n [KOL]
         */
    }
    
    
    return 0;
}

