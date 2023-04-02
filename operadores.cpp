#include <iostream> //Puxando uma biblioteca externa para receber valor do usuario
using namespace std;//Incluindo biblioteca padrão

int main() { //abrindo a estrutura do codigo
   int num =10, num2 = 4; //definindo os valores de num e num2
   int soma, multi, divi, modulo, subt; //definindo as variaveis
   
   soma = num + num2; //somando as variaveis
   multi = num * num2; //multiplicando as variaveis
   divi = num / num2; // dividindo as variaveis
   modulo = num % num2; //calculando o resto das variaveis
   subt = num - num2; //subtraindo as variaveis
   
   cout << "soma: "<<soma<<endl; //mostrando todos os resultados na interface para o usuario
   cout << "Multiplicação: "<<multi<<endl;
   cout << "Divisão: "<<divi<<endl;
   cout << "Modulo: "<<modulo<<endl;
   cout << "Subtração: "<<subt<<endl;
    

    return 0;
}
