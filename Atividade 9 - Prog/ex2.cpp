/*Adição de uma constante a um ponteiro Crie um programa que declare um
ponteiro para um inteiro, inicialize-o com o endereço de uma variável inteira
e, em seguida, adicione uma constante ao ponteiro.*/

#include <iostream>
using namespace std;

int main(){
    int *ptr = NULL, n=0;
    const int adc=9;

    ptr = &n;

    *ptr += adc;
    cout << *ptr << endl;


    return 0;
}