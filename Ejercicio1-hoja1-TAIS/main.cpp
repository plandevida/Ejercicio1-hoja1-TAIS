//
//  main.cpp
//  Ejercicio1-hoja1-TAIS
//
//  Created by Pablo Pinochet on 13/10/13.
//  Copyright (c) 2013 Plandevida. All rights reserved.
//

#include <iostream>
#include <string>
#include "Arbus.h"

template < typename Clave, typename Valor>
void mostrarEquilibrado(Arbus<Clave, Valor> a) {
    
    
    std::string estado = "";
    
    a.equilibrado() ? estado = "TRUE" : estado = "FALSE";
    
    std::cout << "El arbol está equilibrado?: " << estado << std::endl;
}

int main(int argc, const char * argv[])
{

    Arbus<int, int> a;
    
    a.inserta(20, 20);
    a.inserta(10, 10);
    a.inserta(30, 30);
    a.inserta(5, 5);
    a.inserta(15, 15);
    a.inserta(25, 25);
    a.inserta(40, 40);
    a.inserta(8, 8);
    a.inserta(35, 35);
    
    mostrarEquilibrado(a);
    
    a.inserta(7, 7);
    a.inserta(6, 6);
    
    mostrarEquilibrado(a);
    
    return 0;
}


