#include <iostream>
using namespace std;

void anoBissexto();

int main(){
    anoBissexto();

    return 0;
}

void anoBissexto(){
    int ano=0;

    cin >> ano;

    if(ano % 100 == 0)
        ano /= 100;

    if(ano % 4 == 0)
        cout << "ano bissexto" << endl;
    
    else
        cout << "nao bissexto" << endl;

}