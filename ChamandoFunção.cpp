#include <iostream> //Puxando uma biblioteca externa para receber valor do usuario
using namespace std; //Incluindo biblioteca padrão

int soma(int a, int b){ //abrindo uma função
    int Resultado; //definindo uma variavel
    Resultado = a+b; // definindo o valor da variavel
    return Resultado; //retornando o valor para a funação
}

int main(){ //abrindo o codigo principal
    cout << soma(6,4)<<endl; //chamando a função com os valores e mostrando para o usuario
}
