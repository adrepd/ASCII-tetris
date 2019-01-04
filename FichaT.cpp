/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   FichaT.cpp
 * Author: Adrian Ulloa, 20162036
 * 
 * Created on January 4, 2019, 10:05 AM
 */

#include "FichaT.h"

FichaT::FichaT(int x, int y) {
 
    this->x1 = x; this->y1 = y;
    this->x2 = x+1; this->y2 = y;
    this->x3 = x+2; this->y3 = y;
    this->x4 = x+1; this->y4 = y+1;
    this->setTipo('T');
}

FichaT::FichaT(const FichaT& orig) {
}

FichaT::~FichaT() {
}


bool FichaT::mover(char input, Tablero& tab) {
    
    //colision
    if ((this->y1 == 19)  or (this->y2 == 19) or (this->y3 == 19) or (this->y4 == 19)) return false;
    if (tab.estado[y1+1][x1] == 'X') return false;
    if (tab.estado[y2+1][x2] == 'X') return false;
    if (tab.estado[y3+1][x3] == 'X') return false;
    if (tab.estado[y4+1][x4] == 'X') return false;
    
    
    if (input == 'A'){
        if ((this->x4 != 0) and (this->x3 != 0) and (this->x2 != 0) and (this->x1 != 0) and
            (tab.estado[y1][x1-1] != 'X') and (tab.estado[y2][x2-1] != 'X') and
            (tab.estado[y3][x3-1] != 'X') and (tab.estado[y4][x4-1] != 'X'))
            Ficha::izquierda();
    }
    
    if (input == 'S'){
        //if (this->y4 != 19)
            Ficha::abajo();
    }
    
    if (input == 'D'){
        if ((this->x1 != 9) and (this->x2 != 9) and (this->x3 != 9) and (this->x4 != 9) and 
            (tab.estado[y1][x1+1] != 'X') and (tab.estado[y2][x2+1] != 'X') and
            (tab.estado[y3][x3+1] != 'X') and (tab.estado[y4][x4+1] != 'X'))
            Ficha::derecha();
    }
    
    if (input == 'M'){
        while (this->mover('S', tab));
    }
    
    if (input == 'P'){
        if (this->rotacion == 0){
            if (not this->detectorColisiones(tab, 0, 0, 0, 0, -1, -1, 0, 0)){
                //this->x1 = this->x1 - 2; this->y1 = this->y1 + 2;
                //this->x2 = this->x2 - 1; this->y2 = this->y2 + 1;
                this->x3 = this->x3 - 1; this->y3 = this->y3 - 1;
                //this->x4 = this->x4 + 1; this->y4 = this->y4 - 1;

                this->rotacion++;
            }
            return true;
        }
        
        if (this->rotacion == 1){
            
            if (not this->detectorColisiones(tab, 0, 0, 0, 0, 0, 0, 1, -1)){
                //this->x1 = this->x1 + 2; this->y1 = this->y1 - 2;
                //this->x2 = this->x2 + 1; this->y2 = this->y2 - 1;
                //this->x3 = this->x3 - 1; this->y3 = this->y3 - 1;
                this->x4 = this->x4 + 1; this->y4 = this->y4 - 1;
                this->rotacion++;
            }
            return true;
        }
        
        if (this->rotacion == 2){
            if (not this->detectorColisiones(tab, 1, 1, 0, 0, 0, 0, 0, 0)){
                this->x1 = this->x1 + 1; this->y1 = this->y1 + 1;
                //this->x2 = this->x2 + 1; this->y2 = this->y2 - 1;
                //this->x3 = this->x3 - 1; this->y3 = this->y3 - 1;
                //this->x4 = this->x4 - 1; this->y4 = this->y4 + 1;
                this->rotacion++;
            }
            return true;
        }
        if (this->rotacion == 3){
            if (not this->detectorColisiones(tab, 0, 0, 0, 0, -1, 1, 0, 0)){
                //this->x1 = this->x1 + 2; this->y1 = this->y1 - 2;
                //this->x2 = this->x2 + 1; this->y2 = this->y2 - 1;
                this->x3 = this->x3 - 1; this->y3 = this->y3 + 1;
                //this->x4 = this->x4 - 1; this->y4 = this->y4 + 1;
                this->rotacion = 0;

                //recover rotation 0 setup
                int x = this->x4, y = this->y4;
                this->x4 = this->x1; this->y4 = this->y1;
                this->x1 = this->x3; this->y1 = this->y3;
                this->x3 = x; this->y3 = y;
            }
            
            
            return true;
        }
        
        
    }
    
    
    
    
    return true;
    
}