#include <iostream>
#include "Artikel.h"

using namespace std;

void Artikel::bucheZugang(int menge) {
    this->bestand += menge;
}

void Artikel::bucheAbgang(int menge) {
    if (getbestand() - menge < 0) {
        cout << "Bestand darf nicht kleiner als 0 sein" << endl;
    } else {
        this->bestand -= menge;
    }
}

int Artikel::getartikelNr() const {
    return artikelNr;
}

int Artikel::getbestand() const {
    return bestand;
}

string Artikel::getbezeichnung() const {
    return bezeichnung;
}

void Artikel::setbezeichnung(string bezeichnung) {
    this->bezeichnung = bezeichnung;
}