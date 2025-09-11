#pragma once 
#include <estadofoco.hpp>
class foco
{
    private:
    estadofoco estado;

    public:
    foco()
    {
        estado = false;
    }//constructor
    ~foco(){}//destructor
    void encender(){
        estado=true;
    }
    void apagar(){
        //codigo en paradigma
        estado = false;
    }
    estadofoco mostrarestado(){
        return estado;
    }
};
