#include <iostream> //Puxando uma biblioteca externa para receber valor do usuario
using namespace std;//incluindo biblioteca principal

int main() { //abrindo o bloco principal de codigo
    int num, i = 1; //definindo as variaveis e o valor de i
   
   do{ //faça
    cout <<"digite um numero entre 1 e 10" << endl;//mensagem para o usuario
    cin >> num; //solicitando o valor pro usuario
} while(num <1 || num > 10); //enquanto o num for menor que 1 OU maior que 10

cout <<"Voce digitou o numero " <<num <<"."; //mensgem na interface para o usuario

    return 0;
}
