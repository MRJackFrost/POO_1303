// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int soma(int a, int b){
    int Resultado;
    Resultado = a+b;
    return Resultado;
}
int sub(int a, int b){
    int Resultado;
    Resultado = a-b;
    return Resultado;
}
int mult(int a, int b){
    int Resultado;
    Resultado = a*b;
    return Resultado;
}
int divs(int a, int b){
    int Resultado;
    Resultado = a/b;
    return Resultado;
}

int main(){
    cout << soma(6,4)<<endl;
    cout << sub(6,4)<<endl;
    cout << mult(6,4)<<endl;
    cout << divs(6,4)<<endl;
}