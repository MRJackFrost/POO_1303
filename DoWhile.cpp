// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int num, i = 1;
   
   do{ 
    cout <<"digite um numero entre 1 e 10" << endl;
    cin >> num;
} while(num <1 || num > 10);

cout <<"Voce digitou o numero " <<num <<".";

    return 0;
}