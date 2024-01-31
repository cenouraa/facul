#include <iostream>
using namespace std;

int potencia(int n, int ptn){
    if(ptn == 1){
        return n;
    }
    else{
        return n * potencia(n, ptn-1);
    }
}

int main(){
    int n, rspt, ptn;

    cin >> n;
    cin >> ptn;

    if(ptn == 1){
        return n;
    }
    else{
        rspt = potencia(n, ptn);
        cout << rspt;
    }

    return 0;
}