#include <iostream> //Puxando uma biblioteca externa para receber valor do usuario
using namespace std; // Chamando a biblioteca padrão

int main() { //abrindo o codigo principal
    char op; //definindo variavel
    float num1, num2; //definindo variavel
    cout << "ENTRE COM O OPERADOR: +, -, /, *: " << endl; //mensagem na interface do usuario
    cin  >> op; //solicitando o valor do char
    cout << "ENTRE COM OS VALORES" << endl; //mensagem na interface do usuario
    cin  >> num1 >> num2; //solicitando o valor de num1 e num2
    
    switch(op){ //abrindo um switch com o valor de op
        case '+': //caso valor for +
        cout << num1 << " + " << num2 << " = " << num1 + num2; //faça a conta e mostre para o usuario
        break; //pare o switch
        case '-'://caso valor for -
        cout << num1 << " - " << num2 << " = " << num1 - num2;//faça a conta e mostre para o usuario
        break;//pare o switch
        case '/'://caso valor for /
        cout << num1 << " / " << num2 << " = " << num1 / num2;//faça a conta e mostre para o usuario
        break;//pare o switch
        case '*'://caso valor for *
        cout << num1 << " * " << num2 << " = " << num1 * num2;//faça a conta e mostre para o usuario
        break;//pare o switch
        default: //se não for nenhum dos valores necessarios
         cout << "OPERADOR ERRADO, POR FAVOR INSIRA CORRETAMENTE";
        break;//pare o switch
    }
    

    return 0;
}
