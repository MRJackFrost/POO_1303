#include <iostream> //Puxando uma biblioteca externa para receber valor do usuario
using namespace std; //Incluindo a biblioteca padrão std

int main() { //abrindo a estrutura principal do codigo
    int x = 10; //definindo a variavel x e o valor
    int y = 20; //definindo a variavel y e o valor
    
    if(x > y){ // se o x for maior que y
        cout << "x é maior que y" << endl; //mostrar na interface
    }
    if(x < y){ //se o x for menor que y
        cout << "x é menor que y" << endl; //mostrar na interface
    }
    if(x >= y){ //se o x for maior igual a y
        cout << "x é maior ou igual a y" << endl; //mostrar na interface
    }
    if(x <= y){ //se o x for menor igual a y
        cout << "x é menor ou igual a y" << endl; //mostrar na interface
    }
    if(x == y){ // se o x for exatamente igual a y
        cout << "x é igual a y" << endl; //mostrar na interface
    }
    if (x != y){ // se o x for diferente de y
        cout << "x é diferente de y" << endl; //mostrar na interface
    }

    return 0;
}
