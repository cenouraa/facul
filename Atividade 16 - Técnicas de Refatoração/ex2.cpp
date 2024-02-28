#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double capitalAplicado = 1000.0;
    double taxaDeJuros = 0.05;
    double tempo = 2.0;

    double montante = capitalAplicado * pow(1 + taxaDeJuros, tempo);
    
    cout << montante << endl;

    return 0;
}