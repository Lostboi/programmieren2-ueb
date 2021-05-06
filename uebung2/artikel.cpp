/*
 * Progammieren 2 Übung 2
 * Autoren: Stephan Schmidt, Cedric Groß
 * 06.05.2021
 */

#include <iostream>
#include "Artikel.h"

using namespace std;
inline void check(bool bedingung, const std::string& msg ) {
    if (!bedingung)
        throw msg;
};

void Artikel::bucheZugang(int menge) {
    check(artikelNr > 999 && artikelNr < 10000, "Die Kontonummer muss 4 stellig sein");
    check(menge < 0, "Es darf keine negative Menge dazugebucht werden");
    this->bestand += menge;
}

void Artikel::bucheAbgang(int menge) {
    check(artikelNr > 999 && artikelNr < 10000, "Die Kontonummer muss 4 stellig sein");
    check(bestand <= 0, "Bestand darf nicht verkleinert werden, wenn der Bestand bereits 0 ist");
    check(menge < 0, "Es darf keine negative Menge abgezogen werden");
    this->bestand -= menge;
}

int Artikel::getartikelNr() const {
    check(artikelNr > 999 && artikelNr < 10000, "Die Kontonummer muss 4 stellig sein");
    return artikelNr;
}

int Artikel::getbestand() const {
    check(artikelNr > 999 && artikelNr < 10000, "Die Kontonummer muss 4 stellig sein");
    return bestand;
}

string Artikel::getbezeichnung() const {
    check(artikelNr > 999 && artikelNr < 10000, "Die Kontonummer muss 4 stellig sein");
    return bezeichnung;
}

void Artikel::setbezeichnung(string bezeichnung) {
    check(artikelNr > 999 && artikelNr < 10000, "Die Kontonummer muss 4 stellig sein");
    check(bezeichnung != "", "Bezeichnung darf kein Leerstring sein");
    this->bezeichnung = bezeichnung;
}
