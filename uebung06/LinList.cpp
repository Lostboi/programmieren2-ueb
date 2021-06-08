/**
 * 
 * @file	LinList.cpp
 * @author	folz
 * @date	28.05.2021
 */

#include <iostream>
#include "LinList.h"
#include "ListElement.h"
using namespace std;

LinList::LinList() {
    this->first = nullptr;
    this->last  = nullptr;
    this->size  = 0;
}

LinList::~LinList() {
    clear();
}

void LinList::push_back(string s) {
    ListElement* newListElementPtr =  new ListElement(s);

    if (first == nullptr){
        first = newListElementPtr;
    }
    else {
        last->next = newListElementPtr;
        newListElementPtr->previous = last;
    }
    last = newListElementPtr;
    size++;
}

void LinList::push_front(string s) {
    ListElement* newListElementPtr = new ListElement(s);

    if (first == nullptr){
        last =  newListElementPtr;
    } else {
        first->previous = newListElementPtr;
        newListElementPtr->next = first;
    }
    first = newListElementPtr;
    size++;
}

void LinList::pop_back() {
    if (first == nullptr){
        cout << "Kein Listelement vorhanden" << endl;
        return;
    }
    ListElement* currentLastElement = last;
    last = currentLastElement->previous;
    if (size == 1) {
        first = nullptr;
    } else{
        last->next = nullptr;
    }
    delete currentLastElement;
    size--;
}

void LinList::pop_front() {
    if (first == nullptr){
        cout << "Kein Listelement vorhanden" << endl;
        return;
    }
    ListElement* currentFirstElement = first;
    first = currentFirstElement->next;
    if (size == 1){
        last = nullptr;
    } else {
        first->previous = nullptr;
    }
    delete currentFirstElement;
    size--;
}

void LinList::clear() {
    if (first == nullptr){
        cout << "Kein Listenelement zum löschen da" << endl;
        return;
    }
    ListElement* currentElement = first;
    ListElement* nextElement;
    while (currentElement != nullptr){
        nextElement = currentElement->next;
        delete currentElement;
        currentElement = nextElement;
    }

}


ostream& operator<< (ostream& o, const LinList& list) {
    ListElement* currentListElementPtr = nullptr;
    currentListElementPtr = list.first;
    while(currentListElementPtr != nullptr){
        o << "dump: " << currentListElementPtr->inhalt << endl;
        currentListElementPtr = currentListElementPtr->next; //TODO friend konstrukt anschauel
    }
    cout << "DONE" << endl;
	return o;
}


