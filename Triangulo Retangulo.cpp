#include <iostream> //Puxando uma biblioteca externa para receber valor do usuario
using namespace std;

int main() {                                        //Abrindo a estrutura do codigo
    
    float base, altura, area;                       //Definindo as variaveis
    
    cout << "Digite a base do Triangulo Retangulo: " << endl; //Printando na interface para o usuario
    cin >> base;                                    //Recebendo valor do usuario para a variavel
    cout << "Digite( a altura do Triangulo Retangulo: " << endl; //Printando na interface
    cin >> altura;                                  //Recebendo valor
    
    area = (base * altura)/2;                     //Atribuindo o calculo na variavel
    cout<< "Area do Triangulo Retangulo: " << area << endl;     //Printando o resultado final para a interface do usuario
    return 0;
}