/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   FichaO.h
 * Author: Adrian Ulloa, 20162036
 *
 * Created on January 4, 2019, 9:36 AM
 */

#ifndef FICHAO_H
#define FICHAO_H
#include "Ficha.h"


class FichaO: public Ficha {
public:
    FichaO(int x = 0, int y = 0);
    FichaO(const FichaO& orig);
    virtual ~FichaO();
    bool mover(char input, Tablero& tab);

private:

};

#endif /* FICHAO_H */

