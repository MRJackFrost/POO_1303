#include <iostream> //Puxando uma biblioteca externa para receber valor do usuario
#include <stdlib.h> //incluindo biblioteca externa
using namespace std; //incluindo biblioteca padrão

int main() { //abrindo a estrutura principal
    double n1, n2, n3, n4; //definindo as variaveis
    cout << "Digite sua primeira nota do semestre:" << endl; //mensagem na interface do usuario
    cin >> n1; //solicitando o valor da nota pro usuario
    cout << "Digite sua primeira nota do semestre:" << endl; //mensagem na interface do usuario
    cin >> n2; //solicitando o valor da nota pro usuario
    cout << "Digite sua primeira nota do semestre:" << endl; //mensagem na interface do usuario
    cin >> n3; //solicitando o valor da nota pro usuario
    cout << "Digite sua primeira nota do semestre:" << endl; //mensagem na interface do usuario
    cin >> n4; //solicitando o valor da nota pro usuario
    
    double soma = (n1 + n2 + n3 + n4); //somando as notas
    soma = (soma / 4); //calculando a média
    
    if(soma >= 7){ //se a soma for maior igual a 7
        cout << "Parabens você passou"; //mensagem para o usuario
    }
    else { //se não
     cout << "Você foi reprovado"; //mensagem para o usuario   
    }
    return 0;
}
