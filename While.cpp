// Online C++ compiler to run C++ program online
#include <iostream> //Puxando uma biblioteca externa para receber valor do usuario
using namespace std;//incluindo biblioteca padrão pra remover o std::

int main() { //abrindo a estrutura do codigo principal
    int num, i = 1; //definindo as variavels e o valor de i
    
    cout <<"digite um numero"; //enviando uma informação para a interface do usuario
    cin >> num; //recevendo um valor do usuario
    
    while(i <=num){ //enquanto i for menor ou igual a num faça
        cout <<i <<", "; //mostre o valor para o usuario
        i++; //adicione mais 1 no valor de i
    }

    return 0;
}
