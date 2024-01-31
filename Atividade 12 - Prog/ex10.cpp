#include <iostream>
using namespace std;

int max (int *v, int n){
    if (n == 1)
        return v[0];
    else{
        int x = max (v, n-1);
        
        if (x > v[n-1])
            return x;
        else
            return v[n-1];
    }
}

//A função max retornará o valor 7 para o vetor {2, 7, 4, 7, 3}.
