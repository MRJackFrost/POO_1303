// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int num;
   
    cout <<"digite um numero positivo" << endl;
    cin >> num;
    
    cout <<"Os primeiros " << num << " Numeros pares são: ";
    
    for(int i = 2; i <= num * 2; i += 2){
        cout << i<< ", ";
    }

    return 0;
}