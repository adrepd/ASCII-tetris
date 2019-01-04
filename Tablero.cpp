/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Tablero.cpp
 * Author: Adrian Ulloa, 20162036
 * 
 * Created on January 3, 2019, 4:57 PM
 */

#include "Tablero.h"
#include <iostream>
using namespace std;
Tablero::Tablero() {
    this->estado = new char*[20];
    for (int i = 0; i < 20; i++){
        this->estado[i] = new char[10];
    }
}

Tablero::Tablero(const Tablero& orig) {
    this->estado = new char*[20];
    for (int i = 0; i < 20; i++){
        this->estado[i] = new char[10];
    }
    for (int i = 0; i < 20; i++){
        for (int j = 0; j < 10; j++)
            this->estado[i][j] = orig.estado[i][j];
    }
    
}

Tablero::~Tablero() {
    if (this->estado) delete [] this->estado;
}

void Tablero::crearTablero() {

    for (int i = 0; i < 20; i++){
        for (int j = 0; j < 10; j++)
            this->estado[i][j] = '*';
    }
}

void Tablero::imprimirTablero() {
    for (int i = 0; i < 10; i++) cout << "=="; cout << endl;
    
    for (int i = 0; i < 20; i++){
        for (int j = 0; j < 10; j++){
            cout << this->estado[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < 10; i++) cout << "=="; cout << endl;

}

bool Tablero::colision(Ficha& f) {
    return true;
}




void Tablero::mostrarFicha(Ficha& f){
    Tablero aux(*this);
    aux.estado[f.y1][f.x1] = 'J';
    aux.estado[f.y2][f.x2] = 'J';
    aux.estado[f.y3][f.x3] = 'J';
    aux.estado[f.y4][f.x4] = 'J';
    aux.imprimirTablero();
}


void Tablero::fijarFicha(Ficha& f) {
    this->estado[f.y1][f.x1] = 'X';
    this->estado[f.y2][f.x2] = 'X';
    this->estado[f.y3][f.x3] = 'X';
    this->estado[f.y4][f.x4] = 'X';
    this->imprimirTablero();
}

bool Tablero::juegoPosible() {
    for (int i = 0; i < 10; i ++){
        if (this->estado[0][i] == 'X') return false;
    }
    return true;
    
    
}
