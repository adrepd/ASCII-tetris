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

void Ficha::setTipo(char tipo) {
    this->tipo = tipo;
}

char Ficha::getTipo() const {
    return tipo;
}

void Ficha::setY4(int y4) {
    this->y4 = y4;
}

int Ficha::getY4() const {
    return y4;
}

void Ficha::setX4(int x4) {
    this->x4 = x4;
}

int Ficha::getX4() const {
    return x4;
}

void Ficha::setY3(int y3) {
    this->y3 = y3;
}

int Ficha::getY3() const {
    return y3;
}

void Ficha::setX3(int x3) {
    this->x3 = x3;
}

int Ficha::getX3() const {
    return x3;
}

void Ficha::setY2(int y2) {
    this->y2 = y2;
}

int Ficha::getY2() const {
    return y2;
}

void Ficha::setX2(int x2) {
    this->x2 = x2;
}

int Ficha::getX2() const {
    return x2;
}

void Ficha::setY1(int y1) {
    this->y1 = y1;
}

int Ficha::getY1() const {
    return y1;
}

void Ficha::setX1(int x1) {
    this->x1 = x1;
}

int Ficha::getX1() const {
    return x1;
}

bool Ficha::detectorColisiones(Tablero& tab, int px1, int py1, int px2, int py2, int px3, int py3, int px4, int py4) {
    
    if ((this->getX1()+px1 >= 10) or ((this->getX1()+px1 < 0))) return true;
    if ((this->getX2()+px2 >= 10) or ((this->getX2()+px2 < 0))) return true;
    if ((this->getX3()+px3 >= 10) or ((this->getX3()+px3 < 0))) return true;
    if ((this->getX4()+px4 >= 10) or ((this->getX4()+px4 < 0))) return true;
    
    if ((this->getY1()+py1 >= 20) or ((this->getY1()+py1 < 0))) return true;
    if ((this->getY1()+py2 >= 20) or ((this->getY2()+py2 < 0))) return true;
    if ((this->getY1()+py3 >= 20) or ((this->getY3()+py3 < 0))) return true;
    if ((this->getY1()+py4 >= 20) or ((this->getY4()+py4 < 0))) return true;

//    if (tab.estado[f.getX1()+px1][f.getY1()+py1] == 'X') return true;
//    if (tab.estado[f.getX2()+px2][f.getY2()+py2] == 'X') return true;
//    if (tab.estado[f.getX3()+px3][f.getY3()+py3] == 'X') return true;
//    if (tab.estado[f.getX4()+px4][f.getY4()+py4] == 'X') return true;
    
    
    return false;
    
    
}

