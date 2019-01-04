/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   FichaZ.h
 * Author: Adrian Ulloa, 20162036
 *
 * Created on January 4, 2019, 11:40 AM
 */

#ifndef FICHAZ_H
#define FICHAZ_H
#include "Ficha.h"

class FichaZ: public Ficha {
public:
    FichaZ(int x = 0, int y = 0);
    FichaZ(const FichaZ& orig);
    virtual ~FichaZ();
    bool mover(char input, Tablero& tab);
private:

};

#endif /* FICHAZ_H */

