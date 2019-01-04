/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Tablero.h
 * Author: Adrian Ulloa, 20162036
 *
 * Created on January 3, 2019, 4:57 PM
 */

#ifndef TABLERO_H
#define TABLERO_H
#include "Ficha.h"


class Tablero {
public:
    Tablero();
    Tablero(const Tablero& orig);
    virtual ~Tablero();
    void crearTablero();
    void imprimirTablero();
    
    bool colision(Ficha& f);
    void fijarFicha(Ficha& f);
    void mostrarFicha(Ficha& f);
    bool juegoPosible();
    char** estado;
private:
};

#endif /* TABLERO_H */

