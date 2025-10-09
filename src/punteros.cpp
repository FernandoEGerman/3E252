#include <iostream>
int main(){

    int *pNumeros  =NULL;
    pNumeros = new int;
    *pNumeros = 25;
    


    std::cout<< "direccion"<<pNumeros <<'\n';
    std::cout<< "valor:"<<*pNumeros <<'\n';

    cout <<"tamaño" << sizeof(int) << endl;
    cout <<"tamaño" << sizeof(long) << endl;
    cout <<"tamaño" << sizeof(float) << endl;
    cout <<"tamaño" << sizeof(double) << endl;
    cout <<"tamaño" << sizeof(char) << endl;
    cout <<"tamaño" << sizeof(bool) << endl;
    //cout <<"tamaño" << sizeof(byte) << endl;
    return 0;
    
}