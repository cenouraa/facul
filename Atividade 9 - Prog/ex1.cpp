/*Incrementar e decrementar um ponteiro Crie um programa que declare um
ponteiro para um inteiro, inicialize-o com o endereço de uma variável inteira
e, em seguida, incremente e decremente o ponteiro.
*/

#include <iostream>
using namespace std;

int main(){
    int *ptr;
    int n=4;

    cout << *ptr << endl;

    *ptr = n;
    cout << *ptr << endl;

    (*ptr)++;
    cout << *ptr << endl;

    (*ptr)--;
    cout << *ptr << endl;

    return 0;
}