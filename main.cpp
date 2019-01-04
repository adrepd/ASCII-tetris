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
#include "Ficha.h"
#include "FichaJ.h"
#include "FichaI.h"
#include "FichaO.h"
#include "FichaT.h"
#include "FichaS.h"
#include "FichaZ.h"
#include "FichaL.h"
#include <conio.h>

using namespace std;

int main(int argc, char** argv) {
system("cls");
cout << "########## ##########  ##########  ##########   ####  ############"  << endl;
cout << "   ####    ###            ####     ###    ####  ####  ####        " << endl;
cout << "   ####    ##########     ####     ##########   ####  ############" << endl;
cout << "   ####    ###            ####     ###     ###  ####          ####" << endl;
cout << "   ####    ##########     ####     ###     ###  ####  ############"  << endl;

cout << "==Controles==" << endl;
cout << "A: izquierda" << endl;
cout << "S: abajo" << endl;
cout << "D: derecha" << endl;

cout << "P: rotar" << endl;
cout << "M: colocar" << endl;
cout << "Q: salir" << endl;



cout << "Press any key to start" << endl;

srand(time(NULL));

while (1) {if (_kbhit()) {_getch(); break;}}

    Tablero tab;
    tab.crearTablero();
    
    int quit = 0;
    while (tab.juegoPosible() and not quit){
        while (not tab.procesarLinea());

        int toca = rand() % 7;
        Ficha* fic;
        
        if (toca == 0){ fic = new FichaI(6,0);}
        if (toca == 1){ fic = new FichaJ(6,0);}
        if (toca == 2){ fic = new FichaL(6,0);}
        if (toca == 3){ fic = new FichaO(6,0);}
        if (toca == 4){ fic = new FichaS(6,0);}
        if (toca == 5){ fic = new FichaT(6,0);}
        if (toca == 6){ fic = new FichaZ(6,0);}

        system("cls");
        tab.mostrarFicha(*fic);
        while (true){    
            time_t start = time(0);
            char c = 'S';
            while (difftime(time(0), start) < 1){
                if (_kbhit()){
                    c = toupper(_getch());
                    break;
                }
            }
            system("cls");
            if (c == 'Q') {quit = 1; break;}

            bool puede = fic->mover(c, tab);
            if (puede){
                tab.mostrarFicha(*fic);
            }
            else{
                tab.fijarFicha(*fic);
                break;

            }

        }
    }
    cout << "GAME OVER" << endl;
    cout << "Puntaje final: " << tab.getPuntaje() << endl;
    
    return 0;
}

