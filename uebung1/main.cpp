#include <iostream>
#include "Artikel.h"
using namespace std;
int main() {
    int zugang;
    int abgang;
    string bez;

    Artikel art{
        4711,
        "Staubsauger",
        100
    };

    cout << "Die Artikelnummer lautet " << art.getartikelNr() << " die Bezeichnung lautet " << art.getbezeichnung() << " der Bestand lautet " << art.getbestand() << endl;
    cout << "Bitte geben Sie die Anzahl der Zugänge an" << endl;
    cin >> zugang;
    art.bucheZugang(zugang);
    cout << "Die neue Anzahl heißt " << art.getbestand() << endl;

    cout << "Bitte geben Sie die Anzahl der Abgänge an" << endl;
    cin >> abgang;
    art.bucheAbgang(abgang);
    cout << "Die neue Anzahl heißt " << art.getbestand() << endl;
}
