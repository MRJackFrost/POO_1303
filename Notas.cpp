#include <iostream> //Puxando uma biblioteca externa para receber valor do usuario
#include <stdlib.h> //incluindo biblioteca externa
using namespace std; //incluindo biblioteca padrão

int main() { //abrindo a estrutura principal
    double n1, n2, n3, n4; //definindo as variaveis
    char cont = 's';
    while(cont == 's' || cont =='S'){ //Abrindo a repetição
    cout << "Digite sua primeira nota do semestre:" << endl; //mensagem na interface do usuario
    cin >> n1; //solicitando o valor da nota pro usuario
    cout << "Digite sua segunda nota do semestre:" << endl; //mensagem na interface do usuario
    cin >> n2; //solicitando o valor da nota pro usuario
    cout << "Digite sua terceira nota do semestre:" << endl; //mensagem na interface do usuario
    cin >> n3; //solicitando o valor da nota pro usuario
    cout << "Digite sua quarta nota do semestre:" << endl; //mensagem na interface do usuario
    cin >> n4; //solicitando o valor da nota pro usuario
    
    double soma = (n1 + n2 + n3 + n4); //somando as notas
    soma = (soma / 4); //calculando a média
    
    if(soma >= 7){ //se a soma for maior igual a 7
        cout << "Parabens você passou com: " <<soma <<endl; //mensagem para o usuario
    }
    else if(soma >= 5 && soma <7){
         cout << "Você esta de recuperação com: "<<soma <<endl;
    }
    else { //se não
     cout << "Você foi reprovado com: " << soma <<endl; //mensagem para o usuario   
    }
    cout << "Quer Fazer novamente? (Digite S ou s)" << endl;
    cin >> cont;
    }
    return 0;
}
