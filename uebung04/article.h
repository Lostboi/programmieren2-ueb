/**
 *
 *	@file    article.h
 *	@author  Stephan und Cedric
 *	@date    24.05.2021
 */
#ifndef ARTICLE_H_
#define ARTICLE_H_
#include <sstream>
#include <string>
using namespace std;

/**
 * 
 *  Artikel-Klasse
 * 
 *	@author	 Stephan und Cedric
 *  @version 1.0
 *  @date	 24.05.2021
 */
class Artikel {

public:
    void bucheZugang(int menge);
    void bucheAbgang(int menge);
    void changePrice(int prozentsatz);
    void setBezeichnung(const string &s);
    string toString() const;

    const string &getBezeichnung() const {
        return bezeichnung;
    }

    int getArtikelNr() const {
        return artikelNr;
    }

    int getBestand() const {
        return bestand;
    }

    float getPreis() const {
        return preis;
    }

    static const string MSG_ARTIKELNUMMEBR;
    static const string MSG_BESTAND;
    static const string MSG_BUCHUNGSMENGE_NEGATIV;
    static const string MSG_BUCHUNGSMENGE_ZU_GROSS;
    static const string MSG_BEZEICHNUNG;
    static const string MSG_FELDLAENGE;
    static const string MSG_PREIS;

    Artikel(int artikelNr, string bezeichnung, int bestand, float preis);
    Artikel(int artikelNr, string bezeichnung, float preis);
    virtual ~Artikel();

private:
    int artikelNr{0};
    int bestand{0};
    float preis;
    string bezeichnung;
};

#endif /* ARTICLE_H_ */
