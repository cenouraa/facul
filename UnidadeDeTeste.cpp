#include <iostream>
#include <cassert>
using namespace std;

int soma(int a, int b){
    return a + b;
}

void teste_soma(){
    assert(soma(2, 3) == 5);
    assert(soma(-2, 3) == 1);
    assert(soma(-2, -3) == -5);
}

int main(){
    teste_soma();
    cout << "Todos os testes de unidade passaram!" << endl;

    cout << "Digite dois numeros inteiros separados por espaco: " << endl;
    
    int num1, num2;
    cin >> num1 >> num2;
    
    int resultado = soma(num1, num2);
    
    cout << "A soma dos numeros é: " << resultado << endl;
    
    return 0;
}