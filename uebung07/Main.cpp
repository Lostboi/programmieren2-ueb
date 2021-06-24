#include <iostream>

#include "Auswertung.h"

using namespace std;

int main(int argc, char *argv[])
{
	Auswertung test;


	if(argc == 0 )
	{
		cout << "Input error";
	}

	for(int i = 1; i < argc; i++)
	{
		test.auslesen(argv[i]);
	}


}
