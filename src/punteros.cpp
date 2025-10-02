#include <iostream>
int main(){

    int *pNumeros  =NULL;
    pNumeros = new int;
    *pNumeros = 25;
    


    std::cout<< "direccion"<<pNumeros <<'\n';
    std::cout<< "valor:"<<*pNumeros <<'\n';
    std::cout<< "valor:"<<&pNumeros <<'\n';
    std::cout<< sizeof(pNumeros);
    return 0;
    
}