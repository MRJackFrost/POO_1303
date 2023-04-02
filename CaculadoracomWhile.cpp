#include <iostream> //Puxando uma biblioteca externa para receber valor do usuario
using namespace std; // Chamando a biblioteca padrão

int main() {//abrindo o codigo principal
    char op; //definindo variavel
    float num1, num2; //definindo variavel
    char per = 's'; //definindo variavel e o valor
    
    while(per == 's'){ //enquanto per for igual a s faça
        
        cout << "ENTRE COM O OPERADOR: +, -, /, *: " << endl;//mensagem na interface do usuario
        cin  >> op; //solicitando o valor do char
        cout << "ENTRE COM OS VALORES" << endl; //mensagem na interface do usuario
        cin  >> num1 >> num2; //solicitando o valor de num1 e num2
    
         switch(op){
          case '+'://caso valor for +
          cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;//faça a conta e mostre para o usuario
             break;//pare o switch
          case '-'://caso valor for -
          cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;//faça a conta e mostre para o usuario
            break;//pare o switch
          case '/'://caso valor for /
          cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;//faça a conta e mostre para o usuario
             break;//pare o switch
          case '*'://caso valor for *
          cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;//faça a conta e mostre para o usuario
            break;//pare o switch
        default://se não for nenhum dos valores necessarios
         cout << "OPERADOR ERRADO, POR FAVOR INSIRA CORRETAMENTE" << endl;
        break;//pare o switch
    }
    cout << "quer continuar com a calculadora? s/n"<< endl; //mensagem para o usuario
    cin >> per; //pedindo o valor de per
    }
     cout << "Calculadora Finalizada"<< endl; //mensagem para o usuario
    return 0;
}
