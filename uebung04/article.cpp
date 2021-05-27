/**
 *
 *	@file    article.cpp
 *	@author Stephan und Cedric
 *	@date    26.05.2021
 */
#include "article.h"
#include "check.h"

/**
 * 
 *  Konstruktor zum erzeugen eines Artikel-Objekts
 *  Alle Attribute muessen auf die Richtigkeit ueberprueft werden  bevor das Objekt erzeugt wird
 *  @param artikelNr    muss 4-stellig sein
 *  @param bezeichnung  darf nicht leer sein und die Feldlänge nicht überschreiten
 *  @param bestand      darf niemals negativ sein
 *  @param preis        darf niemals negativ sein
 */
Artikel::Artikel(int artikelNr, string bezeichnung, int bestand, float preis) {
    check(artikelNr > 999 && artikelNr < 10000, MSG_ARTIKELNUMMEBR);
    check(!bezeichnung.empty(), MSG_BEZEICHNUNG);
    check(bezeichnung.size() <= 25, MSG_FELDLAENGE);
    check(bestand >= 0, MSG_BESTAND);
    check(preis > 0, MSG_PREIS);
    this->artikelNr = artikelNr;
    this->bezeichnung = bezeichnung;
    this->bestand = bestand;
    this->preis = preis;
}

Artikel::Artikel(int artikelNr, string bezeichnung, float preis) {
    check(artikelNr > 999 && artikelNr < 10000, MSG_ARTIKELNUMMEBR);
    check(!bezeichnung.empty(), MSG_BEZEICHNUNG);
    check(bezeichnung.size() <= 25, MSG_FELDLAENGE);
    check(preis > 0, MSG_PREIS);
    this->artikelNr = artikelNr;
    this->bezeichnung = bezeichnung;
    this->preis = preis;
}

/**
 *  Standard-Destruktor
 */
Artikel::~Artikel() {}

/*---------------Element-methoden---------------*/

/**
 * 
 *  Methode um den Zugang eines Artikels zu verbuchen
 * 
 *  @param menge    muss größer 0 sein
 */
void Artikel::bucheZugang(int menge) {
    check(menge > 0, MSG_BUCHUNGSMENGE_NEGATIV);
    bestand += menge;
}

/**
 * 
 *  Methode um den Abgang eines Artikels zu verbuchen
 * 
 *  @param menge    muss > 0 sein
 */
void Artikel::bucheAbgang(int menge) {
    check(menge > 0, MSG_BUCHUNGSMENGE_NEGATIV);
    check(menge <= bestand, MSG_BUCHUNGSMENGE_ZU_GROSS);
    bestand -= menge;
}

/**
 * 
 *  Methode zur Preisaenderung um einen waehlbaren Prozentsatz
 *  Negative Angabe ist moeglich.
 *  
 *  @param prozentsatz  Bei einem Prozentsatz < -100% wird eine Ausnahme ausgeloest
 *                      (Preis muss > 0 sein)
 */
void Artikel::changePrice(int prozentsatz){
    check(prozentsatz > -100, MSG_PREIS);
    preis +=(preis*static_cast<float>(prozentsatz)/100);
}

/**
 * 
 *  toString Funktion zur Ausgabe eines Artikels
 *  
 *  @return string 
 */
string Artikel::toString() const{
    ostringstream o;
    o << "Artikelnummer: " << artikelNr << "\n"
      << "Bezeichnung: "   << bezeichnung << "\n"
      << "Bestand: "       << bestand << "\n"
      << "Preis: "          << preis << " €\n";
    return o.str();
}

/**
 * 
 *  set Funktion um  die Artikelbezeichnung zu ändern
 * 
 *  @param bezeichnung  darf nicht leer sein und die Feldlarnge nicht ueberschreiten
 */
void Artikel::setBezeichnung(const string &bezeichnung) {
    check(!bezeichnung.empty(), MSG_BEZEICHNUNG);
    check(bezeichnung.size() <= 25, MSG_FELDLAENGE);
    this->bezeichnung = bezeichnung;
}

/**
 *  Klassen-Attribute
 *  Saemtliche Fehlermeldungen
 * 
 */
const string Artikel::MSG_ARTIKELNUMMEBR = "Artikelnummer sollte 4-stellig sein!"s;
const string Artikel::MSG_BESTAND = "Bestand muss positiv sein!"s;
const string Artikel::MSG_BEZEICHNUNG = "Bezeichnung darf nicht leer sein!"s;
const string Artikel::MSG_BUCHUNGSMENGE_NEGATIV = "Buchungsmenge muss größer 0 sein!"s;
const string Artikel::MSG_BUCHUNGSMENGE_ZU_GROSS = "Buchungsmenge muss <= Bestand sein!"s;
const string Artikel::MSG_FELDLAENGE = "Feldlänge muss <= 25 sein!"s;
const string Artikel::MSG_PREIS = "Preis muss größer 0 sein!"s;
