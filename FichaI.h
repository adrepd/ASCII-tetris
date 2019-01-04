/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   FichaI.h
 * Author: Adrian Ulloa, 20162036
 *
 * Created on January 4, 2019, 9:57 AM
 */

#ifndef FICHAI_H
#define FICHAI_H
#include "Ficha.h"
class FichaI: public Ficha {
public:
    FichaI(int x = 0, int y = 0);
    FichaI(const FichaI& orig);
    virtual ~FichaI();
    bool mover(char input, Tablero& tab);
private:

};

#endif /* FICHAI_H */

