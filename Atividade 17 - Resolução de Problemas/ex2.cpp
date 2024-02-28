#include <iostream>
using namespace std;

int main(){
    double raio;
    
    cout << "Digite o raio do círculo: ";
    cin >> raio;

    double area = 3.14159 * raio * raio;
    
    cout << raio << " " << area << endl;

    // Depuração: Imprime o valor do raio e da área calculada
    cout << raio << " " << area << endl;

    return 0;
}