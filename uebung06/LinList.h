/**
 * 
 * @file	LinList.h
 * @author	Stephan Schmidt
 * @date	01.06.2021
 */

#ifndef LINLIST_H_
#define LINLIST_H_
#include "ListElement.h"

/**
 * Doppelt-verkettete Lineare Liste
 * 
 * @author	folz
 * @version 
 * @date	28.05.2021
 */
class LinList {
public:
    LinList();
    ~LinList();
    void push_back (string);
    void push_front(string);
    void pop_back();
    void pop_front();
    void clear();
    friend ostream& operator<< (ostream&, const LinList&);
private:
    size_t size;
    ListElement* first;
    ListElement* last;
};

#endif /* LINLIST_H_ */
