/**
 * 
 *  @file       lagerDialog.h
 *  @author     Stephan und Cedric
 *  @date       24.05.2021
 */

#ifndef LAGERDIALOG_H
#define LAGERDIALOG_H
#include "lager.h"

enum Funktionstyp {ERSTELLEN, ZUGANG, ABGANG, PREISAENDERUNG, ENTFERNEN, BEENDEN=9 };

/**
 *  @author     Stephan und Cedric
 *  @version    1.0
 *  @date       24.05.2021
 */
class LagerDialog
{

public:
    LagerDialog();

    void start();
private:
    Funktionstyp einlesenFunktion();
    void ausfuehrenFunktion(Funktionstyp);
    void testeErstellen();
    void testeZugang();
    void testeAbgang();
    void testePreisaenderung();
    void testeEntfernen();

    Lager* lager1;
    int artikelNr {0};
    int menge;
    float preis;
    int prozentsatz;
    string bezeichnung;
};

#endif /* LAGERDIALOG_H */
