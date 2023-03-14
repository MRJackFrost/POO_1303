#include <iostream> //Puxando uma biblioteca externa para receber valor do usuario
using namespace std;

int main() {                                        //Abrindo a estrutura do codigo
    
    float base, altura, area;                       //Definindo as variaveis
    
    cout << "Digite a base do retangulo: " << endl; //Printando na interface para o usuario
    cin >> base;                                    //Recebendo valor do usuario para a variavel
    cout << "Digite a altura do retangulo: " << endl; //Printando na interface
    cin >> altura;                                  //Recebendo valor
    
    area = base * altura;                     //Atribuindo o calculo na variavel
    cout<< "Area do retangulo: " << area << endl;     //Printando o resultado final para a interface do usuario
    return 0;
}