#include <iostream> //Puxando uma biblioteca externa para receber valor do usuario
using namespace std; //incluindo biblioteca padrão

int soma(int a, int b){ //abrindo uma função
    int Resultado; //definindo variavel
    Resultado = a+b; // definindo valor
    return Resultado; //retornando o valor
}
int sub(int a, int b){ //abrindo uma função
    int Resultado; //definindo variavel
    Resultado = a-b; // definindo valor
    return Resultado; //retornando o valor
}
int mult(int a, int b){ //abrindo uma função
    int Resultado; //definindo variavel
    Resultado = a*b; // definindo valor
    return Resultado; //retornando o valor
}
int divs(int a, int b){ //abrindo uma função
    int Resultado; //definindo variavel
    Resultado = a/b; // definindo valor
    return Resultado; //retornando o valor
}

int main(){
    cout << soma(6,4)<<endl;//chamando a função e passando os valores para ela 
    cout << sub(6,4)<<endl;//chamando a função e passando os valores para ela
    cout << mult(6,4)<<endl;//chamando a função e passando os valores para ela
    cout << divs(6,4)<<endl;//chamando a função e passando os valores para ela
}
