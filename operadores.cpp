#include <iostream>
using namespace std;

int main() {
   int num =10, num2 = 4;
   int soma, multi, divi, modulo, subt;
   
   soma = num + num2;
   multi = num * num2;
   divi = num / num2;
   modulo = num % num2;
   subt = num - num2;
   
   cout << "soma: "<<soma<<endl;
   cout << "Multiplicação: "<<multi<<endl;
   cout << "Divisão: "<<divi<<endl;
   cout << "Modulo: "<<modulo<<endl;
   cout << "Subtração: "<<subt<<endl;
    

    return 0;
}