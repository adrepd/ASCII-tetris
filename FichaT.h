/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   FichaT.h
 * Author: Adrian Ulloa, 20162036
 *
 * Created on January 4, 2019, 10:05 AM
 */

#ifndef FICHAT_H
#define FICHAT_H
#include "Ficha.h"

class FichaT: public Ficha {
public:
    FichaT(int x = 0, int y = 0);
    FichaT(const FichaT& orig);
    virtual ~FichaT();
    bool mover(char input, Tablero& tab);

private:

};

#endif /* FICHAT_H */

