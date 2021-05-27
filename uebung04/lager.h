/**
 * 
 *  @file       lager.h
 *  @author     Stephan und Cedir
 *  @date       24.05.2021
 */

#ifndef LAGER_H
#define LAGER_H

#include <sstream>
#include <string>
#include <vector>
#include "article.h"
using namespace std;

/**
 * 
 *  Lager-Klasse
 * 
 *	@author	Cedric und Stephan
 *  @version 1.0
 *  @date	 26.05.2021
 */
class Lager{

private:
    string name;
    vector <Artikel*> artikeltab;
    int findeArtikel(int artikelNr);
    void loescheArtikel();

public:

    Lager(string name);

    Lager(const Lager& lager);

    Lager& operator=(const Lager& lager);

    ~Lager();

    void erstelleArtikel(int artikelNr, string bezeichnung, float preis);
    void bucheZugang(int artikelNr, int menge);
    void bucheAbgang(int artikelNr, int menge);
    void aenderePreis(int prozentsatz);
    void entferneArtikel(int artikelNr);
    string toString() const;

    static const string MSG_ARTIKEL;
    static const string MSG_ARTIKEL_VORHANDEN;
    static const string MSG_ARTIKEL_VERSCHIEDEN;
    static const string MSG_LAGER_LEER;
};

#endif /* LAGER_H */
