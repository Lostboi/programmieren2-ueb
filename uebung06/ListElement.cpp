/**
 * 
 * @file	ListElement.cpp
 * @author	Stephan Schmidt
 * @date	01.06.2021
 */

#include "ListElement.h"


ListElement::ListElement(string inhalt, ListElement* previous, ListElement* next) {
    this->inhalt   = inhalt;
    this->previous = previous;
    this->next     = next;
}

ListElement::~ListElement() {
}

