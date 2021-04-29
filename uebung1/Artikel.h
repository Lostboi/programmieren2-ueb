/*
 * Progammieren 2 Übung 1
 * Autoren: Stephan Schmidt, Cedric Groß
 * 27.04.2021
 */

#include <iostream>
using namespace std;
class Artikel{
public:
    int artikelNr;
    string bezeichnung;
    int bestand;

    int getartikelNr() const;

    string getbezeichnung() const;

    int getbestand() const;

    void setbezeichnung(string bez);

    void bucheZugang (int menge);

    void bucheAbgang (int menge);
};