/**
 *
 *  @file      lagerDialog.cpp
 *  @author    Stephan und Cedric
 *  @date      24.05.2021
 */

#include <iostream>
#include "lagerDialog.h"
using namespace std;

LagerDialog::LagerDialog(){
    lager1 = nullptr;
}

void LagerDialog::start(){
    lager1 = new Lager("WALMART");
    Funktionstyp funktion;
    do{
        try{
            funktion = einlesenFunktion();
            ausfuehrenFunktion(funktion);
        }
        catch(const string& e){
            cout << "Ausnahme: " << e <<endl;
        }
        
    } while (funktion != BEENDEN);
    delete lager1;   
}

Funktionstyp LagerDialog::einlesenFunktion(){
    cout <<"\n"
		 << ERSTELLEN       << ": Artikel erstellen\n"
         << ZUGANG          << ": Zugang buchen\n"
         << ABGANG          << ": Abgang buchen\n"
         << PREISAENDERUNG  << ": Saemtliche Artikelpreise aendern\n"
         << ENTFERNEN       << ": Artikel entfernen\n"
         << BEENDEN         << ": Programm beenden -> ";
    int funktion;
    cin >> funktion;
    return static_cast<Funktionstyp>(funktion);
}


void LagerDialog::testeErstellen(){
    cout << "Artikelnr: ";
    cin >> artikelNr;
    cout << "Bezeichnung: ";
    cin >> bezeichnung;
    cout << "Preis: ";
    cin >> preis;
    lager1->erstelleArtikel(artikelNr, bezeichnung,preis);
}

void LagerDialog::testeEntfernen(){
    cout << "Artikelnummer: ";
    cin >> artikelNr;
    lager1->entferneArtikel(artikelNr);
}

/**
 *  Wendet die Zugangbuchungs-Methode aus der Lager-Klasser an
 *  nachdem die notwendigen Daten eingelesen wurden
 *  (Ausnahmen werden von der Artikel-/Lager Klasse abgefangen)
 */
void LagerDialog::testeZugang(){
    cout <<"Artikelnr: ";
    cin >> artikelNr;
    cout << "Menge: ";
    cin >> menge;
    lager1->bucheZugang(artikelNr, menge);
}

void LagerDialog::testeAbgang(){
    cout <<"Artikelnr: ";
    cin >> artikelNr;
    cout << "Menge: ";
    cin >> menge;
    lager1->bucheAbgang(artikelNr, menge);
}


void LagerDialog::testePreisaenderung(){
    cout << "Pozentsatz: ";
    cin >> prozentsatz;
    lager1->aenderePreis(prozentsatz);
}


void LagerDialog::ausfuehrenFunktion(Funktionstyp funktion){

    switch(funktion){
        case ERSTELLEN:
            testeErstellen();
            break;
        
        case ZUGANG:
            testeZugang();
            break;

        case ABGANG:
            testeAbgang();
            break;

        case PREISAENDERUNG:
            testePreisaenderung();
            break;

        case ENTFERNEN:
            testeEntfernen();
            break;

        case BEENDEN:
            cout << "Programm wird beendet!"<<endl;
            break;

        default:
            cout << "Falsche Funktion!"<<endl;
            break;
    }
    cout << lager1->toString();
}
