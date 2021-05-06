/*
 * Progammieren 2 Übung 2
 * Autoren: Stephan Schmidt, Cedric Groß
 * 06.05.2021
 */
#include <iostream>
#include <string>
#include "Artikel.h"
using namespace std;


// Deklaration der Funktionen
void artikelTest();
void print(const Artikel &artikel1);
void start();

/*
 * Menü für Benutzer eingaben
 * Zugang: Menge auf den Bestand addieren
 * Abgang: Menge von Bestand subtrahieren
 * Test: Startet Test Funktion für alle Methoden
 */
enum FunktionsTyp {ZUGANG, ABGANG, TEST, ENDE=9};

FunktionsTyp einlesenFunktion(){
    int funktion;
    cout    << ZUGANG   << ": Bestand Zugang; "
            << ABGANG   << ": Bestand Abgang; "
            << TEST     << ": Testdurchlauf mit Beispiel Werten; "
            << ENDE     << ": Beenden -> ";
    cin >> funktion;
    return static_cast<FunktionsTyp>(funktion);
}

/*
 * Funktion um alle Attribute eines Artikels auszugeben
 */
void print(const Artikel &artikel1) {
    cout << artikel1.getartikelNr() << "; "
         << artikel1.getbezeichnung() << "; "
         << artikel1.getbestand() << endl;
}

/*
 * Aufforderung welche Funktion des Menüs benutzt werden soll
 */
void start() {
    FunktionsTyp funktion;


    Artikel artikel1 = {1111, "Milch", 50};   // Feste initilisierung von Objekten
    Artikel artikel2 = {2222, "Butter"};

    int menge;
    string bezeichnung;

    do {
        try {
            funktion = einlesenFunktion();

            switch(funktion){
                case ZUGANG:
                    cout << "Menge: ";
                    cin >> menge;
                    artikel1.bucheZugang(menge);
                    break;

                case ABGANG:
                    cout << "Bestand: ";
                    cin >> menge;
                    artikel1.bucheAbgang(menge);
                    break;

                case TEST:
                    artikelTest();
                    break;

                case ENDE:
                    cout << "Ciao" << endl;
                    break;

                default:
                    cout << "Fehlerhafte Eingabe" << endl;
            }
            print(artikel1);
            print(artikel2);

        } catch (const string& s){
            cout << s << endl;
        }
    }while (funktion != ENDE);
}

/*
 *  Test funktion um alle Methoden zu testen
 */
void artikelTest() {
    try {
        Artikel artikel1 = {4444, "Erdbeeren", 10};
        print(artikel1);
        artikel1.bucheZugang(150);
        print(artikel1);
        artikel1.bucheAbgang(150);
        print(artikel1);
        Artikel artikel2 = {3333, "Milch"};
        print(artikel2);
        artikel1.setbezeichnung("Spaetzle");
        print(artikel1);
        artikel2.setbezeichnung("Mais");
        print(artikel2);
    } catch (const string& s){
        cout << s << endl;
    }
}

/*
 * Aufruf der Start Funktion
 */
int main(){
    try {
        start();
    } catch (const string& s) {
        cout << "main: " <<  s << endl;
    } catch (...) {
        cout << "Irgendeine Ausnahme gefangen!" << endl;
    }
}

