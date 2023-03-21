#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    double ac1, ac2, af;
    cout << "Digite sua AC1:" << endl;
    cin >> ac1;
    cout << "Digite sua AC2:" << endl;
    cin >> ac2;
    cout << "Digite sua Avaliação Final:" << endl;
    cin >> af;
    
    ac1 = (ac1 * 0.15);
    ac2 = (ac2 * 0.35);
    af = (af * 0.5);
    
    double soma = (ac1 + ac2 + af);
    
    if(soma > 5){
        cout << "Parabens você passou com: "<< soma;
    }
    if(soma == 5){
        cout << "Quase morreu na praia com: " << soma;
    }
    if(soma < 5) {
     cout << "Você foi reprovado com: " << soma;   
    }
    return 0;
}