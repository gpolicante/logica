//
//  main.cpp
//  fatorial
//
//  Created by Gabriel Policante Araujo on 24/04/19.
//  Copyright © 2019 Gabriel Policante Araujo. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    
    int numero ;
    int fim ;
    int fatorial ;
    int valor ;
    
    fim = 1 ;
    cout << "Digite o numero para fatorial: ";
    cin >> numero ;
    fatorial=numero;
    
    while(numero > fim ) {
        
        valor=numero-1;
        
        fatorial=fatorial*valor;
        
        numero=valor;
        
        
    }
    
    cout << "fatorial: " << fatorial << "\n";
    
}

