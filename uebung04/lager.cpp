/**
 *  
 *  @file       lager.cpp
 *  @author    Stephan und Cedric
 *  @date       24.05.2021
 */

#include <iostream>
#include "lager.h"
#include "check.h"
using namespace std;

/**
 * 
 *  Konstruktor für das Lager
 * 
 *  @param name     
 */
Lager::Lager(string name){
    this-> name = name;
}
/**
 * 
 * Ein Kopierkonstruktor
 *  @param lager 
 */
Lager::Lager(const Lager& lager){
    this->name = lager.name;

    for(Artikel* ap : lager.artikeltab){
        artikeltab.push_back(new Artikel(*ap));
    }
}

/**
 * 
 *  Zuweisungsoperator
 * 
 *  @param lager 
 *  @return Lager& 
 */
Lager& Lager::operator=(const Lager& lager){
    if(this == &lager)
        return *this;

    loescheArtikel();

    this->name = lager.name;

    for(Artikel* ap : artikeltab){
        artikeltab.push_back(new Artikel(*ap));
    }
    return *this;
}

/**
 * 
 *  Methode zur Erstellung von Artikeln in einem dynamisch allokierten Vector
 *  
 *  @param artikelNr    muss 4-stellig sein
 *  @param bezeichnung  darf nicht leer sein und die Feldlarnge nicht ueberschreiten
 *  @param preis        darf niemals negativ werden
 */
void Lager::erstelleArtikel(int artikelNr, string bezeichnung, float preis){
    check(findeArtikel(artikelNr) < 0,MSG_ARTIKEL_VORHANDEN);
    artikeltab.push_back(new Artikel(artikelNr, bezeichnung,preis));
}

/**
 * 
 *  Methode um Artikel im Lager zu suchen
 * 
 *  @param artikelNr    muss 4-stellig sein
 *  @return int         wenn Artikel gefunden wurde, wird der Index zurueckgegeben
 *                      andernfalls -1 
 */
int Lager::findeArtikel(int artikelNr){
    for(size_t i = 0; i < artikeltab.size(); i++){
        if(artikeltab[i]->getArtikelNr() == artikelNr)
            return i;
    }
    return -1;
}

/**
 *  
 *  Wendet Buchungs Funktion an
 * 
 *  @param artikelNr    muss 4-stellig sein
 *  @param menge        muss > 0 sein
 */
void Lager::bucheZugang(int artikelNr, int menge){
    int i = findeArtikel(artikelNr);
    check(i >= 0, MSG_ARTIKEL);
    artikeltab[i]->bucheZugang(menge);
}
void Lager::bucheAbgang(int artikelNr, int menge){
    int i = findeArtikel(artikelNr);
    check(i >= 0, MSG_ARTIKEL);
    artikeltab[i]->bucheAbgang(menge);
}

void Lager::aenderePreis(int prozentsatz){
    check(artikeltab.size() > 0,MSG_LAGER_LEER);
    for(size_t i=0; i < artikeltab.size(); i++){
        artikeltab[i]->changePrice(prozentsatz);
    }
}

/**
 * 
 *  Entfernen eines Artikels aus dem Lager
 * 
 *  @param artikelNr    muss 4-stellig sein
 */
void Lager::entferneArtikel(int artikelNr){
    check(artikeltab.size() > 0, MSG_LAGER_LEER);
    check(findeArtikel(artikelNr) > 0,MSG_ARTIKEL);
    int i=findeArtikel(artikelNr);
    if(artikeltab[i]->getArtikelNr() == artikelNr){
        delete artikeltab[i];
        artikeltab.erase(artikeltab.begin()+i);
    }
}

/**
 * 
 *  Wendet die toString-Methode aus der Artikel-Klasse fuer jeden Artikel 
 *  im derzeitigen Lager an
 * 
 *  @return string 
 */
string Lager::toString() const {
    ostringstream o;
    o << "\nLager: " << name << "\n";
    for(const Artikel* a: artikeltab){
        o << a->toString() << "\n";
    }
    return o.str();
}

void Lager::loescheArtikel(){
        for(auto artikelPtr : artikeltab){
            delete artikelPtr;
        }
        artikeltab.clear();
    }

Lager::~Lager(){
    loescheArtikel();
}

const string Lager::MSG_ARTIKEL = "Artikel nicht vorhanden!"s;
const string Lager::MSG_ARTIKEL_VORHANDEN = "Artikel bereits vorhanden"s;
const string Lager::MSG_ARTIKEL_VERSCHIEDEN = "Die Artikel muessen verschieden sein!"s;
const string Lager::MSG_LAGER_LEER = "Das Lager ist zurzeit leer"s;
