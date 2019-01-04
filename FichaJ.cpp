/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   FichaJ.cpp
 * Author: Adrian Ulloa, 20162036
 * 
 * Created on January 3, 2019, 5:08 PM
 */

#include "FichaJ.h"
#include "Tablero.h"
#include <iostream>
using namespace std;
FichaJ::FichaJ(int x, int y) {
 
    this->x1 = x; this->y1 = y;
    this->x2 = x; this->y2 = y+1;
    this->x3 = x; this->y3 = y+2;
    this->x4 = x-1; this->y4 = y+2;
}



FichaJ::FichaJ(const FichaJ& orig) {
}

FichaJ::~FichaJ() {
}



bool FichaJ::mover(char input, Tablero& tab) {
    
    //colision
    if (this->y4 == 19) return false;
    if (tab.estado[y1+1][x1] == 'X') return false;
    if (tab.estado[y2+1][x2] == 'X') return false;
    if (tab.estado[y3+1][x3] == 'X') return false;
    if (tab.estado[y4+1][x4] == 'X') return false;
    
    
    if (input == 'A'){
        if (this->x4 != 0)
            Ficha::izquierda();
    }
    
    if (input == 'S'){
        if (this->y4 != 19)
            Ficha::abajo();
    }
    
    if (input == 'D'){
        if (this->x1 != 9)
            Ficha::derecha();
    }
    
    if (input == 'M'){
        while (this->mover('S', tab));
    }
    
    if (input == 'P'){
        if (this->rotacion == 0){
            this->x1 = this->x1 + 1; this->y1 = this->y1 + 2;
            this->x2 = this->x2 + 0; this->y2 = this->y2 + 1;
            this->x3 = this->x3 - 1; this->y3 = this->y3 - 1;
            this->x4 = this->x4 + 0; this->y4 = this->y4 + 0;
        
            this->rotacion++;
            return true;
        }
        if (this->rotacion == 1){
            this->x1 = this->x1 - 1; this->y1 = this->y1 - 2;
            this->x2 = this->x2 - 1; this->y2 = this->y2 - 2;
            this->x3 = this->x3 + 0; this->y3 = this->y3 + 0;
            this->x4 = this->x4 + 0; this->y4 = this->y4 + 0;
            this->rotacion++;
            return true;
        }
        
//        if (this->rotacion == 2){
//            this->x1 = this->x1 - 2; this->y1 = this->y1 + 1;
//            this->x2 = this->x2 + 0; this->y2 = this->y2 + 1;
//            this->x3 = this->x3 + 1; this->y3 = this->y3 + 0;
//            this->x4 = this->x4 + 1; this->y4 = this->y4 + 0;
//            this->rotacion++;
//            return true;
//        }
//        if (this->rotacion == 3){
//            this->x1 = this->x1 - 2; this->y1 = this->y1 + 1;
//            this->x2 = this->x2 + 0; this->y2 = this->y2 + 1;
//            this->x3 = this->x3 + 1; this->y3 = this->y3 + 0;
//            this->x4 = this->x4 + 1; this->y4 = this->y4 + 0;
//            this->rotacion = 0;
//            return true;
//        }
        
        
        
        
    }
    
    
    
    
    return true;
    
}

