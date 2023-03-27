// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    char op;
    float num1, num2;
    cout << "ENTRE COM O OPERADOR: +, -, /, *: " << endl;
    cin  >> op;
    cout << "ENTRE COM OS VALORES" << endl;
    cin  >> num1 >> num2;
    
    switch(op){
        case '+':
        cout << num1 << " + " << num2 << " = " << num1 + num2;
        break;
        case '-':
        cout << num1 << " - " << num2 << " = " << num1 - num2;
        break;
        case '/':
        cout << num1 << " / " << num2 << " = " << num1 / num2;
        break;
        case '*':
        cout << num1 << " * " << num2 << " = " << num1 * num2;
        break;
        default:
         cout << "OPERADOR ERRADO, POR FAVOR INSIRA CORRETAMENTE";
        break;
    }
    

    return 0;
}