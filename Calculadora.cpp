// Online C++ compiler to run C++ program online
#include <iostream> //Chamando a biblioteca externa de input
using namespace std; //Chamando a biblioteca padrão

int main() {
    char op; //definindo a variavel dos operadores
    float num1, num2; //Definindo as variaveis dos inputs
    cout << "ENTRE COM O OPERADOR: +, -, /, *: " << endl; //Interface para os usuarios
    cin  >> op;//Usuario definindo o valor do CHAR
    cout << "ENTRE COM OS VALORES" << endl; //Interface Para os usuarios
    cin  >> num1 >> num2;//Usuario definindo o valor dos FLOAT
    
    switch(op){ //Inicio do switch usando o CHAR como condição
        case '+': //caso o CHAR for +
        cout << num1 << " + " << num2 << " = " << num1 + num2; //fazer a conta de adição
        break;//pare o codigo
        case '-': //Caso o CHAR for -
        cout << num1 << " - " << num2 << " = " << num1 - num2; //Fazer conta de Subtração
        break;//pare o codigo
        case '/': //caso o Char for /
        cout << num1 << " / " << num2 << " = " << num1 / num2; //Fazer conta de Divisão
        break; //Pare o codigo
        case '*'://Se o Char for *
        cout << num1 << " * " << num2 << " = " << num1 * num2;//Fazer conta de Multiplicação
        break;  //Pare o codigo
        default: //se o codigo não se encaixar por padrão faça:
         cout << "OPERADOR ERRADO, POR FAVOR INSIRA CORRETAMENTE";
        break;
    }
    

    return 0;
}
