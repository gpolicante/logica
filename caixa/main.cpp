#include <iostream>
#include <fstream>
#include <string>
#include<ctype.h>
#include <stdio.h>


using namespace std;


int main() {
ofstream myfile ("cadastro.txt", ios::out | ios::app); 
ifstream arquivo("cadastro.txt");

bool user; 
user = false; 
int saldo, saque, cadastro, valor, i,  valorSaque ;

string nome, line, nomeConsulta, y, n, resposta    ; 
n = n; 
y = y; 

cout << "SALDO    | DIGITE 1 \n";
cout << "SAQUE    | DIGITE 2 \n";
cout << "CADASTRO | DIGITE 3 \n";
cout << "\n \n Digite uma opcao: \n"; 
cin >> valor ; 

    switch(valor) {

        case 1: 
        cout << "Digite o seu nome para consulta de saldo:  \n" ;            
        cin >> nome ; 

        arquivo.is_open(); 
            while ( getline (arquivo,line) ){
            
                arquivo >> nomeConsulta >> saldo ;
                     if(nomeConsulta == nome) {
                        cout << "\n \n \n ###################### USUARIO CADASTRADO ! ####################  \n \n \n ";
                        cout << "Seu saldo e de: R$" << saldo << "\n";
                        arquivo.close();
                    user = true ; 
                    } 
            }
        arquivo.close();  

            if( user == false ) { 

                cout << "\n \n \n ###################### USUARIO NAO CADASTRADO !! ####################  \n \n \n \n "; 


            }



            break;
            

        case 2: 
            ;

        cout << "Digite o seu nome para consulta de SAQUE:  \n" ;            
        cin >> nome ; 

        arquivo.is_open(); 
            while ( getline (arquivo,line) ){
            
                arquivo >> nomeConsulta >> saldo ;
                     if(nomeConsulta == nome) {
                        cout << "\n \n \n ###################### USUARIO CADASTRADO ! ####################  \n \n \n ";
                        
                        
                        cout << "Seu saldo e de: R$" << saldo << "\n";

                        arquivo.close();
                    user = true ; 
                    } 


                    
                        }


                        if( user == false ) { 

                cout << "\n \n \n ###################### USUARIO NAO CADASTRADO !! ####################  \n \n \n \n "; 
                return 0; 

            }

        arquivo.close(); 



      cout << "Deseja realizar um saque ?:[y/n] \n" ; 
      cin >> resposta ; 
         
    if(resposta == "n"){

            cout << "Nao me faca perder meu tempo \n" ; 

        } else if(resposta == "y") { 

        cout << "Digite o valor para saque: \n"; 
        cin >> valorSaque ; 

        if(valorSaque <= saldo){
        
        saldo = saldo - valorSaque; 

        cout << "Retire na gaveta sua grana parca, seu novo saldo e de: " << saldo << "\n" ; 


        } else {

            cout << "Moio o role, tem grana nao \n" ; 

        }


        } else { 

            cout << "Digita certo cabaco \n";   
        }


            break;
        case 3: 

        cout << "Bora fazer seu cadastro, digite o seu primeiro nome: "; 
        cin >> nome ;    


        arquivo.is_open(); 
            while ( getline (arquivo,line) ){
            
                arquivo >> nomeConsulta >> saldo ;
                     if(nomeConsulta == nome) {
                        cout << "\n \n \n ###################### USUARIO JA CADASTRADO ! ####################  \n \n \n ";
                        arquivo.close();
                        return 0; 
                    }

            }
        arquivo.close();

        cout << "Digite quanto de grana vc esta colocando no banco: "; 
        cin >> saldo ; 
        
        myfile.is_open(); 
        myfile << nome << "     " << saldo << "\n" ; 
        myfile.close();
        return 0; 

            break; 

        default: 
            cout << "Digite uma opcao correta seu ze !";
            main();  
            break; 


    
    


    }


}