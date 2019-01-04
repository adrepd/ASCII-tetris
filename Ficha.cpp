/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ficha.cpp
 * Author: Adrian Ulloa, 20162036
 * 
 * Created on January 3, 2019, 5:07 PM
 */

#include "Ficha.h"
#include <iostream>
using namespace std;
Ficha::Ficha() {
    rotacion = 0;
}

Ficha::Ficha(const Ficha& orig) {
}

Ficha::~Ficha() {
}


void Ficha::verCoordenadas() {
    cout << "(" << this->x1 << ", " << this->y1 << ")" << endl;
    cout << "(" << this->x2 << ", " << this->y2 << ")" << endl;
    cout << "(" << this->x3 << ", " << this->y3 << ")" << endl;
    cout << "(" << this->x4 << ", " << this->y4 << ")" << endl;
   
}

void Ficha::izquierda() {
    this->x1--;
    this->x2--;
    this->x3--;
    this->x4--; 
}

void Ficha::derecha() {
    this->x1++;
    this->x2++;
    this->x3++;
    this->x4++;    
}

void Ficha::abajo() {
    this->y1++;
    this->y2++;
    this->y3++;
    this->y4++;
}
