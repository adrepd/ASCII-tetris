/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   FichaL.h
 * Author: Adrian Ulloa, 20162036
 *
 * Created on January 4, 2019, 11:48 AM
 */

#ifndef FICHAL_H
#define FICHAL_H
#include "Ficha.h"


class FichaL: public Ficha {
public:
    FichaL(int x = 0, int y = 0);
    FichaL(const FichaL& orig);
    virtual ~FichaL();
    bool mover(char input, Tablero& tab);
private:

};

#endif /* FICHAL_H */

