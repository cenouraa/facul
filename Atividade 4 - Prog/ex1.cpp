#include <iostream>
using namespace std;

void trocaTroca(int *a, int *b);

int main(){
    int a=0, b=0;

    a = 4;
    b = 7;

    trocaTroca(&a, &b);

    return 0;
}

void trocaTroca(int *a, int *b){
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;

    cout << *a << " " << *b;
}