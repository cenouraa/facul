/*Os dois parâmetros recebidos devem ser devolvidos ordenados (para os
parâmetros a e b, o menor dos valores deve ser armazenado em a e o maior em b).
Caso sejam passados valores iguais, a ordem da resposta entre eles não importa.
*/

#include <iostream>
using namespace std;

void ordenarParametro(int *a, int *b){
    int aux;
    
    if(a == b){
        /*nada acontece, va tomar um chá*/
    }
    else{
        if(a > b){
            aux = *a;
            *a = *b;
            *b = aux;
        }
    }
}

int main(){
    int num1, num2;

    cin >> num1 >> num2;

    ordenarParametro(&num1, &num2);

    cout << num1 << " " << num2;

    return 0;
}