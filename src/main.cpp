#include <iostream>
#include <serieNavidad.hpp>
#include <foco.hpp>
using namespace std;

int main(int argc, char const *argv[])
{
    serieNavidad miserieNavidad;
    miserieNavidad.Encender();
    miserieNavidad.imprimirSer();
    miserieNavidad.Encender();
    miserieNavidad.Encender();

    foco foco;

    foco.apagar();//encender agregar
    foco.encender();
    cout
    <<"foco"
    <<foco.mostrarestado()
    <<endl;

    return 0;
}
