#include <iostream>
#include <string>
#include <vector>
#include <chrono>
#include <thread>                 // C++11
#include <ftxui/screen/screen.hpp>
#include <ftxui/screen/color.hpp> // colores (opcional, pero útil)

using namespace std;
using namespace ftxui;

vector<string> vaca = {
    "        (__ )",
    "        (oo)",
    "  /------\\/",
    " / |    ||",
    "*  /\\---/\\"
};

int main(int argc, char const* argv[]) {
    // Crea la pantalla (ancho completo, alto fijo)
    Screen pantalla = Screen::Create(Dimension::Full(), Dimension::Fixed(15));

    int x = 0;
    int y = 1;  // margen superior
    while (true) {
        x++;                 // anima en X
        pantalla.Clear();    // limpia el buffer antes de dibujar

        int fila = 0;
        for (const auto& linea : vaca) {
            int columna = 0;
            for (char letra : linea) {
                Pixel& pixel = pantalla.PixelAt(x + columna, y + fila);
                pixel.character = letra;
                pixel.background_color = Color::Blue;
                pixel.foreground_color = Color::Red;
                columna++;
            }
            fila++;
        }

        // mostrar y controlar la animación
        pantalla.Print();
        this_thread::sleep_for(chrono::milliseconds(100));
        cout << pantalla.ResetPosition();  // mueve el cursor sin spamear la consola
    }

    return 0;
}
