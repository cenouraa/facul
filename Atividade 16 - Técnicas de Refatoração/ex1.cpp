#include <iostream>
using namespace std;

bool ehPar(int num){ //Função feita a partir do Extract Method
    return num % 2 == 0;
}

int main() {
    int numero;

    cin >> numero;

    if(ehPar(numero)){
        cout << "é par"<< endl;
    }
    else{
        cout << "é impar" << endl;
    }

    cout << numero * 2 << endl;
    cout << numero * numero << endl;

    int outroNumero = 10;
    cout << numero + outroNumero << endl;

    return 0;
}