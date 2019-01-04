/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Adrian Ulloa, 20162036
 *
 * Created on January 3, 2019, 4:53 PM
 */

#include <cstdlib>
#include <ctime>
#include <cctype>
#include <iostream>
#include "Tablero.h"
#include "FichaJ.h"
#include <conio.h>

using namespace std;

int main(int argc, char** argv) {

    Tablero tab;
    tab.crearTablero();
       
    while (tab.juegoPosible()){
        
        FichaJ fic(6,0);
        system("cls");
        tab.mostrarFicha(fic);
        while (true){    
            time_t start = time(0);
            char c = 'S';
            while (difftime(time(0), start) < 1){
                if (_kbhit()){
                    c = toupper(_getch());
                    break;
                }
            }
            //char c = _getch();
            system("cls");
            if (c == 'Q') return 0;

            bool puede = fic.mover(c, tab);
            if (puede){
                tab.mostrarFicha(fic);
            }
            else{
                tab.fijarFicha(fic);
                break;

            }

        }
    }

    return 0;
}

