#include <iostream>
using namespace std;

int cont=0;

int fib(int n){
    cont++;

    if (n == 1 || n == 2)
        return n - 1;
    else
        return fib(n-1) + fib(n-2);
}

int main(){
    int n, rspt=0;

    cin >> n;

    if(n == 1 || n == 2){
        return n - 1;
    }
    else{
        rspt = fib(n);
        cout << rspt << endl;
        cout << cont;
    }

    return 0;
}

