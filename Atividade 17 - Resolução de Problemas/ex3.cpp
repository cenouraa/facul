#include <iostream>
using namespace std;

int main(){
    int numero;
    int fatorial = 1;

    cin >> numero;

    for (int i = 1; i <= numero; ++i) {
        fatorial x= i; //troquei '*' por 'x'
    }

    cout << "O fatorial de " << numero << " é: " << fatorial << endl;

    return 0;
}