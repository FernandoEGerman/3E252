#include <SerieNavidad.hpp>
#include <Foco.hpp>
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    SerieNavidad miSerieNavidad;
    miSerieNavidad.Encender();
    miSerieNavidad.ImprimirSerie();
    miSerieNavidad.Apagar();
    miSerieNavidad.ImprimirSerie();

    Foco foco;
    foco.Apagar();//encender agregar
    foco.Encender();

    cout
    <<"foco:"
    <<foco.MostrarEstado()
    <<endl;

    return 0;
}
