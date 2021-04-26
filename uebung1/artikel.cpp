#include <iostream>
#include "Artikel.h"
using namespace std;

void Artikel::bucheZugang(int menge) {
    this -> bestand += menge;
}

void Artikel::bucheAbgang(int menge) {
    this -> bestand -= menge;
}

int Artikel::getartikelNr() const {
    return artikelNr;
}

int Artikel::getbestand() const {
    return  bestand;
}

string Artikel::getbezeichnung() const {
    return bezeichnung;
}

void Artikel::setbestand(int nummer) {
    bestand = nummer;
}