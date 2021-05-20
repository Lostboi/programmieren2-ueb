//
// Created by Stephan Schmidt on 19.05.21.
//

#ifndef UEBUNG3_FUNCTIONS_H
#define UEBUNG3_FUNCTIONS_H

#include <random>

using namespace std;


enum FunktionsTyp {ZUFALLSZAHLEN,INSERTIONSORT, COUNT, ISSORTED, PRINT, ENDE};


FunktionsTyp einlesenFunktion(){
    int funktion;
    cout    << endl
            << INSERTIONSORT << ": insertionSort Funktion; "
            <<  COUNT << ": count Funktion; "
            <<  ISSORTED << ": isSorted Funktion; "
            <<  PRINT << ": print Funktion "
            <<  ENDE << ": Ende des Programms";
    cin >> funktion;
    return static_cast<FunktionsTyp>(funktion);
}
/**
 *
 *     InsertionSort Funktion die ein Array von kleinen nach großen Werten sortietz
 *
 *  @tparam T     ist entweder von Typ int oder double
 *  @param great     die groesse des arrays
 */
template <typename T>
void insertionSort(T* array, int great)
{
    int i, key, j;
    for (i = 1; i < great; i++){
        key = array[i];
        j = i - 1;
        while (j >= 0 && array[j] > key)
        {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = key;
    }
}

/**
 *
 *     Count Funktion die einen Wert den man eingibt überprüft wie oft er vorkommt.
 *
 *  @tparam array    ist entweder von Typ int oder double
 *  @param great     die groesse des arrays
 *  @param value  die zu suchende zahl
 */


template<typename T>
int count(T *array, int great, int value) {
    int countedValue = 0;
    for (int i = 0; i < great; i++){
        if (array[i] == value){
            countedValue += 1;
        }
    }
    return countedValue;
}

/**
 *
 *
 *    IsSorted überprüft ob das Array sortiert ist oder nicht
 *
 *  @tparam array    ist entweder von Typ int oder double
 *  @param great     die groesse des arrays
 */

template <typename T>
bool isSorted (T* array, int great){
    for (int i = 0; i < great; i++) {
        for (int j = i; j < great; j++) {
            if (array[i] > array[j]){
                return false;
            }
        }

    }
    return  true;
}

/**
 *
 *     Print Funktion die das Array ausgibt
 *  @tparam array    ist entweder von Typ int oder double
 *  @param great     die groesse des arrays
 *  @param width     die ausgabebreite
 */

template <typename T>
void print (T* array, int great, int width){
    int value = 0;
    for (int i = 0; i < great; i++){
        if (value == width){
            cout << endl;
            value = 0;
        }
        cout << array[i];
        value++;
    }

}
/**
 *
 *   Der Dialog, der der alle Funktionen aufruft
 *
 *  @tparam array    ist entweder von Typ int oder double
 *  @param great     die groesse des arrays
 *  @param value = die zu suchende zahl
 */

template <typename T>
void dialog (T* array, int great){
    FunktionsTyp funktion;
    do{
        try {
            funktion = einlesenFunktion();
            switch (funktion) {
                case INSERTIONSORT :
                    insertionSort(array, great);
                    break;
                case COUNT:
                    int readValue;
                    cout << "Bitte geben Sie eine Zahl:" << endl;
                    cin >> readValue;
                    int countedValue;
                    countedValue = count(array, great, readValue);
                    cout <<  "Die Zahl " << readValue << " kommt " << countedValue << " vor" << endl;
                    break;

                case ISSORTED:
                    bool right;
                    right = isSorted(array, great);
                    if (right){
                        cout << "Das Array ist richtig sortiert (aufsteigend)" << endl;
                    } else{
                        cout << "Das Array ist nicht richtig sortiert" << endl;
                    }
                    break;

                case PRINT:
                    int outWidth;
                    cout << "Bitte geben Sie die Ausgabebreite ein" << endl;
                    cin >> outWidth;
                    print(array, great, outWidth);
                    break;

                case ENDE:
                    cout << "ENDE" << endl;
                    break;

                default:
                    cout << "Fehlerhafte Eingabe" << endl;
            }
        }
        catch (const string& s){
            cout << s << endl;
        }
    } while (funktion != ENDE);
}


#endif //UEBUNG3_FUNCTIONS_H