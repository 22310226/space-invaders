#pragma once
#include <string>
#include <ftxui/screen/screen.hpp>
#include <iostream>


using namespace std;

class Dibujo
{
private:
    int posicionX, posicionY;
    list<string> contenido;
public:
    Dibujo(/* args */){
        this -> posicionX = 0;
        this -> posicionY = 0;
    }
    
    Dibujo(int posicionX, int posicionY){
        this -> posicionX = posicionX;
        this -> posicionY = posicionY;
    }
    Dibujo(std::string palabra, int posicionX, int posicionY){
        this -> posicionX = posicionX;
        this -> posicionY = posicionY;
        this -> contenido = palabra;
    }

    void Dibujar(ftxui::Screen Pantalla){
        int posicionPalabraX=0;
        int posicionPalabraY=0;
        for (auto &&letra : contenido)

        {
            int posicionFinalX = this->posicionX + posicionPalabraX;
            int posicionFinalY = this->posicionY + posicionPalabraY;
            Pantalla.PixelAt(posicionFinalX, posicionFinalY).character = letra;
            posicionPalabraX++;
        }
        Pantalla.Print();
        Pantalla.Clear();
        cout << Pantalla.ResetPosition();
    }
    ~Dibujo(){}
};