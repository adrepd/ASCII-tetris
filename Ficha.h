/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ficha.h
 * Author: Adrian Ulloa, 20162036
 *
 * Created on January 3, 2019, 5:07 PM
 */

#ifndef FICHA_H
#define FICHA_H

class Tablero;

class Ficha {
public:
    Ficha();
    Ficha(const Ficha& orig);
    virtual ~Ficha();
    virtual bool mover(char input, Tablero& tab) = 0;
    friend class Tablero;
    void verCoordenadas();
    void izquierda();
    void derecha();
    void abajo();
    
    
protected:
    int x1; int y1;
    int x2; int y2;
    int x3; int y3;
    int x4; int y4;
    int rotacion;

};

#endif /* FICHA_H */

