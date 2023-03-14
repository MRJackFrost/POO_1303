#include <iostream> //Puxando uma biblioteca externa para receber valor do usuario
#include <cmath>    //Puxando a biblioteca que inclue contas matematicas
using namespace std;

int main() {                                        //Abrindo a estrutura do codigo
    
    float a, b, c;                       //Definindo as variaveis
    
    cout << "Digite o valor do primeiro cateto: " << endl; //Printando na interface para o usuario
    cin >> a;                                    //Recebendo valor do usuario para a variavel
    cout << "Digite o valor do segundo cateto: " << endl; //Printando na interface
    cin >> b;                                  //Recebendo valor
    
    c= sqrt((a*a)+(b*b));                   //Atribuindo o calculo na variavel
    cout<< "Area do Triangulo Retangulo: " << c << endl;     //Printando o resultado final para a interface do usuario
    return 0;
}