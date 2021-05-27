/**
 *
 *	@file    check.h
 *	@author Stephan und Cedric
 *	@date    24.05.2021
 */
#ifndef CHECK_H_
#define CHECK_H_

inline void check(bool bedingung, const string &msg) {
    if (!bedingung)
        throw msg;
}

#endif /* CHECK_H_ */
