/*Subtração de dois ponteiros Crie um programa que declare dois ponteiros
para inteiros, inicialize-os com os endereços de duas variáveis inteiras e, em
seguida, subtraia um ponteiro do outro.*/

#include <iostream>
using namespace std;

int main(){
    int *ptr = NULL, *ptr2 = NULL, p=6, n=2;

    ptr = &n;
    ptr2 = &p;

    cout << *ptr - *ptr2 << endl;

    return 0;
}