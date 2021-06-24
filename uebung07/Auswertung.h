/*
 * Auswertung.h
 *
 *  Erstellt am: 20.06.2021
 *      Autor: Stephan & Cedric
 */

#include <iostream>
#include <string>
#include <fstream>
#include <cstring>

using namespace std;

#ifndef AUSWERTUNG_H_
#define AUSWERTUNG_H_

class Auswertung {
public:



	void einlesen();
	void auslesen(string dateiname);


private:

	ofstream out;

	int anzahl;

	string eingabe;


};

#endif /* AUSWERTUNG_H_ */
