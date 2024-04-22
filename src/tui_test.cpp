#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
#include <iostream>
#include <thread>
 
int main(void) {
  using namespace ftxui;
 
  // Define the document
  Element document =
    hbox({
      text("left")   | border,
      text("middle") | border | flex,
      text("right")  | border,
    });
 
  auto screen = Screen::Create(
    Dimension::Full(),     
    Dimension::Fit(Lienzo) 
  );
    Render();
    screen.Print();
 



  return EXIT_SUCCESS;
}