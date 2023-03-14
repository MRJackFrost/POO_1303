#include <iostream> //Puxando uma biblioteca externa para receber valor do usuario
#include <cmath>    //Puxando a biblioteca que inclue contas matematicas
using namespace std;

int main() {                    //Abrindo a estrutura do codigo
    
    float a, b, c, x1, x2, delta;        //Definindo as variaveis
    
    cout << "Digite o valor de a: " << endl; //Printando na interface para o usuario
    cin >> a;                         //Recebendo valor do usuario para a variavel
    cout << "Digite o valor de b: " << endl; //Printando na interface
    cin >> b;                                  //Recebendo valor
    cout << "Digite o valor de C: " << endl; //Printando na interface
    cin >> c;                                  //Recebendo valor
    
    delta = pow(b,2) - 4 * a * c; //Fazendo o calculo de delta
    
    if(delta >= 0){                       //Inicio do if 
        x1 = (-b + sqrt(delta))/(2 * a);  //calculo do x1 de bhaskara
        x2 = (-b - sqrt(delta))/(2 * a);  //calculo do x2 de bhaskara
        
        cout << "As raizes da equação são: " << endl << x1 << endl << x2 << endl; //Mostrando o resultado das duas contas na interfaçe
    }
    else{
        cout << "A equação não tem raizes"<< endl; //resultado caso o numero não tenha raiz
    }
    return 0;
}