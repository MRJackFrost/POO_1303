#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int y = 20;
    
    if(x > y){
        cout << "x é maior que y" << endl;
    }
    if(x < y){
        cout << "x é menor que y" << endl;
    }
    if(x >= y){
        cout << "x é maior ou igual a y" << endl;
    }
    if(x <= y){
        cout << "x é menor ou igual a y" << endl;
    }
    if(x == y){
        cout << "x é igual a y" << endl;
    }
    if (x != y){
        cout << "x é diferente de y" << endl;
    }

    return 0;
}