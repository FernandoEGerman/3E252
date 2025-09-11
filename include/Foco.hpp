#pragma once 
#include <EstadoFoco.hpp>

class Foco
{
private:
    EstadoFoco estado;

public:
    Foco()//constructor
    {
        estado = false;
    }
    ~Foco(){}//destructor
    void Encender(){
        estado=true;
    }
    void Apagar(){
        //codigo en paradigma
        estado = false;
    }
    EstadoFoco MostrarEstado(){
        return estado;
    }
};
