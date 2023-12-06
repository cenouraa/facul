/*Subtração de uma constante de um ponteiro Crie um programa que declare
um ponteiro para um inteiro, inicialize-o com o endereço de uma variável
inteira e, em seguida, subtraia uma constante do ponteiro.*/

#include <iostream>
using namespace std;

int main(){
    int *ptr = NULL, n=0;
    const int adc=9;

    ptr = &n;

    *ptr -= adc;
    cout << *ptr << endl;


    return 0;
}