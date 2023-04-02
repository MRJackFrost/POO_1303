#include <iostream> //Puxando uma biblioteca externa para receber valor do usuario
#include <string> //biblioteca externa de string
using namespace std; //biblioteca padrão para remover o std::

int main() { //abrindo o bloco de codigo principal
    int life;  //definindo a variavel
    float energy; //definindo a variavel
    bool status; //definindo a variavel
    string character;//definindo a variavel
    
    life = 5; //definindo valor para a varivel
    energy = 99.99f;//definindo valor para a varivel
    status = true;//definindo valor para a varivel
    character = "Zero";//definindo valor para a varivel
    
    cout << "Life: "<< life << endl; //mostrando os valores na interface do usuario
    cout << "Energy: "<< energy << endl;//mostrando os valores na interface do usuario
    cout << "Status: "<< status << endl;//mostrando os valores na interface do usuario
    cout << "Character name: "<< character << endl;//mostrando os valores na interface do usuario
    

    return 0;
}
