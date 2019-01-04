/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   FichaJ.h
 * Author: Adrian Ulloa, 20162036
 *
 * Created on January 3, 2019, 5:08 PM
 */

#ifndef FICHAJ_H
#define FICHAJ_H
#include "Ficha.h"

class Tablero;

class FichaJ: public Ficha {
public:
    FichaJ(int x = 0, int y = 0);
    FichaJ(const FichaJ& orig);
    virtual ~FichaJ();
    bool mover(char input, Tablero& tab);

private:

};

#endif /* FICHAJ_H */

