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
        cout << "Inserisci una scelta valida: ";
        cin >> scelta;
    }
    
    return scelta;
}

/* Funzione incremento */
int incremento(int n1) {
    return n1 + 1;
}

/* Funzione decremento */
int decremento(int n1) {
    return n1 - 1;
}

/* Funzione doppio */
int doppio(int n1) {
    return 2 * n1;
}

/* Funzione successione */
void successione(int n1) {
    for (int i = 0; i <= n1; ++i) {
        cout << i << (i < n1 ? ", " : "\n");
    }
}

/* Funzione positività del numero */
bool positivo(int n1) {
    return n1 > 0;
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
        cout << "Sei nella modalità unaria di base" << endl;
        cout << "Inserisci un numero: ";
        int numero;
        cin >> numero;

        cout << "Seleziona una funzione: " << endl;
        cout << "[1] Incremento" << endl;
        cout << "[2] Decremento" << endl;
        cout << "[3] Doppio" << endl;
        cout << "[4] Successione" << endl;
        cout << "[5] Verifica positività" << endl;

        int funzione;
        cin >> funzione;

        switch (funzione) {
            case 1:
                cout << "Incremento: " << incremento(numero) << endl;
                break;
            case 2:
                cout << "Decremento: " << decremento(numero) << endl;
                break;
            case 3:
                cout << "Doppio: " << doppio(numero) << endl;
                break;
            case 4:
                cout << "Successione fino a " << numero << ": ";
                successione(numero);
                break;
            case 5:
                cout << "Positività: " << (positivo(numero) ? "Positivo" : "Non positivo") << endl;
                break;
            default:
                gestisci_errore();
                break;
        }
    } else {
        gestisci_errore();
    }
    
    return 0;
}
