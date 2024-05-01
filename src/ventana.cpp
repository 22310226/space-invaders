#include <iostream>
#include <string>
#include <ftxui/component/component.hpp>
#include <ftxui/component/screen_interactive.hpp>
#include <thread>
#include <experimental/random>

using namespace std;
using namespace ftxui;

int main(int argc, char const *argv[])
{
    archivo alien("./assets/alient.txt")
    list <Dibujo> dibujos;
    for (int i = 0; i < 20; i++)
    {
        Dibujo palabra(
            "Hola" + to_string(i),
            experimental::randint (0,20),
            experimental::randint (0,20)
        );
        dibujos.push_back(Dibujo("inicio,0,0"))
    }



    Dibujo palabra1 ("Hola",0,0);
    Dibujo palabra2 ("Adios",25,5);
    
    auto Pantalla = Screen::Create
    (
        Dimension::Full(),
        Dimension::Full()
    );

    
   
    while(true)
    {
        Pantalla.Clear();
        this_thread::sleep_for(0.1s);
        //Actualizar
        for (auto &&i : dibujos)
        {
            i.Desplazar



        }
        //posicionInicialY++;
        
        
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
       
        //posicionInicialX++;
        //posicionInicialY++;
        
        
 return 0;

}
        
   
