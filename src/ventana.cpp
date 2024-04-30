#include <iostream>
#include <string>
#include <ftxui/component/component.hpp>
#include <ftxui/component/screen_interactive.hpp>
#include <thread>


using namespace std;
using namespace ftxui;

int main(int argc, char const *argv[])
{
    string palabra = "DVD";
    int posicionInicialX = 5;
    int posicionInicialY = 5;
    auto Pantalla = Screen::Create(Dimension::Full(),Dimension::Full());
   
    while(true)
    {
        posicionInicialY++;
        this_thread::sleep_for(0.1s);
        
        
        int posicionPalabraX=0;
        int posicionPalabraY=0;
        for (auto &&letra : palabra)
        {
            int posicionFinalX = posicionInicialX + posicionPalabraX;
            int posicionFinalY = posicionInicialY + posicionPalabraY;
            Pantalla.PixelAt(posicionFinalX, posicionFinalY).character = letra;
            posicionPalabraX++;
        }
        Pantalla.Print();
        Pantalla.Clear();
        cout << Pantalla.ResetPosition();
    }
       
        posicionInicialX++;
        posicionInicialY++;
        
        
 return 0;

}
        
   
