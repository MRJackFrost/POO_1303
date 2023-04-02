#include <iostream> //Incluindo uma biblioteca externa para receber valor do usuario
using namespace std; //Puxando a biblioteca externa padrão 

int main() { //abrindo o bloco da estrutura principal de codigo
    int num; //definindo a variavel
   
    cout <<"digite um numero positivo" << endl; //mensagem para a interface do usuario
    cin >> num; //solicitando o valor para o usuario
    
    cout <<"Os primeiros " << num << " Numeros pares são: "; //mensagem para o usuario
    
    for(int i = 2; i <= num * 2; i += 2){ //definindo o valor de i; enquanto i for menor igual ao valor de num multiplicado por 2 some
        cout << i<< ", "; //mostre o valor de i pro usuario
    }

    return 0;
}
