#include <iostream>
using namespace std;

int dobro(int *a);

int main(){
    int a=6, total=0;

    total = dobro(&a); 

    cout << total << endl;   

    return 0;
}

int dobro(int *a){
    int dobro=0;

    dobro = (*a) * 2;

    return dobro;
}