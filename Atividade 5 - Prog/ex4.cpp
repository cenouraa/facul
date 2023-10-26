#include <iostream>
using namespace std;

int soma(int *a);

int main(){
    int a=0;

    cin >> a;

    cout << soma(&a);
}

int soma(int *a){
    return *a+10;
}