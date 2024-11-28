/*
    Chiedo all'utente di inserire un char. Stampo quel char n volte
*/
#include <iostream>
using namespace std;
void stampa_n_volte(char c, int n) {
    for (int i = 0; i < n; i++) {
        cout << c;
    }
}
int main() {
    char carattere;
    int n;
    //chiedi all'utente di inserire un carattere
    cout<<"Inserisci un carattere: ";
    cin>>carattere;
    //chiedi all'utente quante volte stampare il carattere
    cout<<"Quante volte vuoi che il carattere venga stampato? ";
    cin>>n;
    //chiamata alla funzione per stampare il carattere n volte
    stampa_n_volte(carattere, n);
    return 0;
}


/*
    Restituisce la somma di tutti i numeri da 1 a n
*/
int somma_da_1_a_n(int n) {
    int somma=0;
    for (int i = 1; i <= n; i++) {
        somma+=i;
    }
    return somma;
}
int main() {
    int n;
    //chiedi all'utente di inserire un numero n
    cout<<"Inserisci un numero n: ";
    cin>>n;
    //calcola la somma dei numeri da 1 a n usando la funzione
    int risultato=somma_da_1_a_n(n);
    //stampa il risultato
    cout<<"La somma dei numeri da 1 a "<<n<<" è: "<<risultato<<endl;
    return 0;
}
