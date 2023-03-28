// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    char op;
    float num1, num2;
    char per = 's';
    
    while(per == 's'){
        
        cout << "ENTRE COM O OPERADOR: +, -, /, *: " << endl;
        cin  >> op;
        cout << "ENTRE COM OS VALORES" << endl;
        cin  >> num1 >> num2;
    
         switch(op){
          case '+':
          cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
             break;
          case '-':
          cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;
          case '/':
          cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
             break;
          case '*':
          cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;
        default:
         cout << "OPERADOR ERRADO, POR FAVOR INSIRA CORRETAMENTE" << endl;
        break;
    }
    cout << "quer continuar com a calculadora? s/n"<< endl;
    cin >> per;
    }
     cout << "Calculadora Finalizada"<< endl;
    return 0;
}