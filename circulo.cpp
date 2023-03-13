#include <iostream> //Puxando uma biblioteca externa
using namespace std;

int main() {                    //Abrindo a estrutura do codigo
    
    float raio, area;           //Definindo as variaveis
    const float pi = 3.14159;   //const é utilizado em um valor fixo
    
    cout << "Digite o raio: ";      //Printando na interface para o usuario
    cin >> raio;                    //Recebendo valor do usuario para a variavel
    
    area = pi * raio * raio;        //Atribuindo o calculo na variavel
    cout<< "Area do circulo: " << area << endl; //endl = end line, é um <br>
    return 0;

}