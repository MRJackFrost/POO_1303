#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    double n1, n2, n3, n4;
    cout << "Digite sua primeira nota do semestre:" << endl;
    cin >> n1;
    cout << "Digite sua primeira nota do semestre:" << endl;
    cin >> n2;
    cout << "Digite sua primeira nota do semestre:" << endl;
    cin >> n3;
    cout << "Digite sua primeira nota do semestre:" << endl;
    cin >> n4;
    
    double soma = (n1 + n2 + n3 + n4);
    soma = (soma / 4);
    
    if(soma >= 7){
        cout << "Parabens você passou";
    }
    else {
     cout << "Você foi reprovado";   
    }
    return 0;
}