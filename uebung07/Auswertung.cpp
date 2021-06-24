/*
 * Auswertung.cpp
 *
 *  Erstellt am: 20.06.2021
 *      Autor: Stephan und Cedric
 */

#include "Auswertung.h"
/**
 *
 * @function einlesen
 * Um eine Datei einzulesen
 * @param dateiname Der Dateiname der reingegeben wird in der Kommandozeile
 */

void Auswertung::einlesen()
{
	cout << "Einlesen: ";

	out.open("test.txt", ios::out);
	out << "Ende";
	out.close();

}
/**
 *
 * @function auslesen
 * Um die Datei die eingelesen wurde, zu parsen
 * @param dateiname Der Dateiname der reingegeben wird in der Kommandozeile
 */

void Auswertung::auslesen(string dateiname)
{
	double anz_zeile = 1;
	int anz_zeichen = 0;
	double anz_kommentar = 0;
	char previously;
	bool next;
	double prozent = 0.00;
	int anz_gros = 0;
	int anz_klein = 0;
	int anz_ziffern = 0;

	ifstream datei(dateiname);

	if(datei.is_open())
	{

		for (char c = datei.get(); datei.good(); c = datei.get())
		{
			anz_zeichen++;

			if (c == '\n')
			{
				anz_zeile++;
				next = 0;
			}

			if(c == '/' and previously == '/' and next == 0)
			{
				anz_kommentar++;
				next = 1;
			}


			if(c <= 90 and c>= 65)
			{
				anz_gros++;
			}

			if(c <= 122 and c>= 97)
			{
				anz_klein++;
			}

			if(c <= 57 and c>= 48)
			{
				anz_ziffern++;
			}


			//cout << c;

			//cout << dec << (int) c << " ";
			previously = c;
		}

		cout << endl;
		cout << "FileName: " << dateiname << endl;
		cout << "Char: " << anz_zeichen << endl;
		cout << "Lines: "  << anz_zeile   << endl;
		cout << "Commentary: "  << anz_kommentar  << endl;
		cout << "Capital letters: "  << anz_gros  << endl;
		cout << "Lowercase letters: "  << anz_klein << endl;
		cout << "Numbers: "  << anz_ziffern << endl;


	prozent = 100/anz_zeile;
    prozent *= anz_kommentar;

    	cout.setf (ios::fixed, ios::floatfield);
    	cout.precision(2);
		cout << "percentage of Commentaries: " << prozent <<"%" << endl;


		datei.close();
	}
	else
	{
		cout << "File not found" << endl;
	}
}

