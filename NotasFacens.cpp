#include <iostream>//Puxando uma biblioteca externa para receber valor do usuario
#include <stdlib.h>//incluindo biblioteca externa
using namespace std;//incluindo biblioteca padrão

int main() { //abrindo  a estrutura do codigo principal
    double ac1, ac2, af; //definindo as variaveis
    cout << "Digite sua AC1:" << endl; //mensagem na interface do usuario
    cin >> ac1; //solicitando o valor da ac1
    cout << "Digite sua AC2:" << endl;//mensagem na interface do usuario
    cin >> ac2;//solicitando o valor da ac2
    cout << "Digite sua Avaliação Final:" << endl;//mensagem na interface do usuario
    cin >> af;//solicitando o valor da af
    
    ac1 = (ac1 * 0.15); //definindo o peso de 1,5
    ac2 = (ac2 * 0.35); //definindo o peso de 3,5
    af = (af * 0.5); //definindo o peso de 5
    
    double soma = (ac1 + ac2 + af); //somando as notas
    
    if(soma > 5){ //se a nota for maior que 5
        cout << "Parabens você passou com: "<< soma; //mensagem para o usuario
    }
    if(soma == 5){ //se a nota for exatamente 5
        cout << "Quase morreu na praia com: " << soma;//mensagem para o usuario
    }
    if(soma < 5) { //se a nota for menor que 5
     cout << "Você foi reprovado com: " << soma;   //mensagem para o usuario
    }
    return 0;
}
