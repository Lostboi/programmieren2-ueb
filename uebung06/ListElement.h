/**
 * 
 * @file	ListElement.h
 * @author	Stephan Schmidt
 * @date	01.06.2021
 */

#ifndef LISTELEMENT_H_
#define LISTELEMENT_H_
#include <string>
using namespace std;

/**
 * Listenelement fuer eine doppelt-verkettete Lineare Liste
 * 
 * @author	folz
 * @version 
 */
class ListElement {
public:
    ListElement(string, ListElement* = nullptr, ListElement* = nullptr);
    ~ListElement();
    friend class LinList;
    ListElement* next;
    ListElement* previous;
    string inhalt;
};

#endif /* LISTELEMENT_H_ */
