#include <iostream>
#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>


using namespace std;
using namespace ftxui;

int main(int argc, char const *argv[])
{
    while(true)
    this_thread::sleep_for(0.1s);
    {
        auto Pantalla = Screen::Create(Dimension::Full(), Dimension::Fixed(10));
        Render(Pantalla, border(text("Hola")));
        Pantalla.PixelAt(10, 5).character = 's';
        Pantalla.Print();

        string prueba = ("Hola mundo");
        int posicionX = 0;
        int posicionY = 0;
        for (auto &&letra : prueba)
        {
            Pantalla.PixelAt(posicionX, posicionY).character = letra;
            posicionX++;
        }
        Pantalla.Print();
    }
    return 0;
}
