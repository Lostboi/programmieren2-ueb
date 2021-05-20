#include <iostream>
#include "Functions.h"
#define MAX 50
using namespace std;
/**
 *
 *    Main Funktion, leider muss man hier ein Array fest von der Hand initialisieren.
 *    und ruft den dialog an den dann das Array und die groesse übergeben wird
 */

int main() {
    int great;
    int array [6] = {3,2,90,7,65,4};
    great = 6;
    dialog(array,great);
}
