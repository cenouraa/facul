#include <iostream>
using namespace std;

int soma(int n){
    if(n == 1)
        return n;
    else
        return n + soma(n-1);
}

int main(){
    int n, rspt;

    cin >> n;

    if(n == 1)
        return n;
    else
        rspt = soma(n);
        cout << rspt;

    return 0;
}