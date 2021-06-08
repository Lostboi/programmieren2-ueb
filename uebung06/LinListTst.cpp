/**
 * 
 * @file	LinListTst.cpp
 * @author	Stephan Schmidt
 * @date	01.06.2021
 */
#include <iostream>
using namespace std;

#include "LinList.h"

enum FunktionsTyp{PUSHFRONT, PUSHBACK, POPFRONT, POPBACK, CLEAR, ENDE=9};

FunktionsTyp einlesenFunktion(){
    int funktion;
    cout    << PUSHFRONT   << ": An die Listenkette anhängen (als erstes Element); "
            << PUSHBACK   << ": An die Listenkette anhängen (als letztes Element); "
            << POPFRONT     << ": Erstes Element löschen; "
            << POPBACK     << ": Letztes Element löschen; "
            << CLEAR    << ": Alle Elemente löschen; "
            << ENDE     << ": Beenden -> ";
    cin >> funktion;
    return static_cast<FunktionsTyp>(funktion);
}

/*
 * Aufforderung welche Funktion des Menüs benutzt werden soll
 */
void start() {
    FunktionsTyp funktion;
    string input;
    LinList liste;
    do {
        try {
            funktion = einlesenFunktion();

            switch(funktion){
                case PUSHFRONT:
                    cout << "String: ";
                    cin >> input;
                    liste.push_front(input);
                    cout << liste << endl;
                    break;

                case PUSHBACK:
                    cout << "String: ";
                    cin >> input;
                    liste.push_back(input);
                    cout << liste << endl;
                    break;

                case POPFRONT:
                    liste.pop_front();
                    cout << liste << endl;
                    break;

                case POPBACK:
                    liste.pop_back();
                    cout << liste << endl;
                    break;

                case CLEAR:
                    liste.clear();
                    break;

                case ENDE:
                    cout << "Ciao" << endl;
                    break;

                default:
                    cout << "Fehlerhafte Eingabe" << endl;
            }

        } catch (const string& s){
            cout << s << endl;
        }
    }while (funktion != ENDE);
}

int main() {
    start();
}



