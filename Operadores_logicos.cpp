#include <iostream> //Puxando uma biblioteca externa para receber valor do usuario
using namespace std; //incluindo biblioteca padrão

int main() { //abrindo a estrutura principal
   int a = 5, b = 10, c = 15; //definindo variaveis e seus valores
   
   if(a < b && b <c){ //se  a menor que b E b menor que c
       cout << "a ordem é a,b,c"<<endl;
   }
   if(a > b || b > c){// se a menor que b OU c menor que b
       cout << "pelo menos uma das condições são verdadeiras"<<endl; //mostrar para o usuario
   }
   if(!(a == b)){//se a for DIFERENTE de b
       cout << "a é diferente de b"<<endl; //mostrar na interface
   }
    return 0;
}