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

//class Tablero;
#include "Tablero.h"

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
    void setTipo(char tipo);
    char getTipo() const;
    void setY4(int y4);
    int getY4() const;
    void setX4(int x4);
    int getX4() const;
    void setY3(int y3);
    int getY3() const;
    void setX3(int x3);
    int getX3() const;
    void setY2(int y2);
    int getY2() const;
    void setX2(int x2);
    int getX2() const;
    void setY1(int y1);
    int getY1() const;
    void setX1(int x1);
    int getX1() const;
    
    bool detectorColisiones(Tablero& tab, int px1, int py1, int px2, int py2,
                        int px3, int py3, int px4, int py4);   
    
protected:
    int x1; int y1;
    int x2; int y2;
    int x3; int y3;
    int x4; int y4;
    int rotacion;
    char tipo;

};

#endif /* FICHA_H */

