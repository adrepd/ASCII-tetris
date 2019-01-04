/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   FichaS.h
 * Author: Adrian Ulloa, 20162036
 *
 * Created on January 4, 2019, 10:21 AM
 */

#ifndef FICHAS_H
#define FICHAS_H
#include "Ficha.h"

class FichaS: public Ficha {
public:
    FichaS(int x = 0, int y = 0);
    FichaS(const FichaS& orig);
    virtual ~FichaS();
    bool mover(char input, Tablero& tab);

private:

};

#endif /* FICHAS_H */

