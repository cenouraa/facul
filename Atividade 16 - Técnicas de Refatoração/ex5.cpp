#include <iostream>
using namespace std;

void verificarTemperatura(int temperatura){
    if (temperatura > 100){
        cout << "Muito quente!";
    }
    else if (temperatura > 70){
        cout << "Clima agradável.";
    }
    else if (temperatura > 50){
        cout << "Fresco.";
    }
    else{
        cout << "Muito frio!";
    }
}

int main(){
    int temperatura;

    cin >> temperatura;

    verificarTemperatura(temperatura);

    return 0;
}