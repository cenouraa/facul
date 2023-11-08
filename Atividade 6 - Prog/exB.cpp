/*A função has_zero() deve retornar true se um dos elementos do vetor tem valor
zero e false se todos os elementos são diferentes de zero. Infelizmente, essa função
contém um erro. Encontre o erro e mostre como arrumá-lo.*/

#include <iostream>
using namespace std;

#define N 5

bool has_zero(int a[], int n);

int main(){
    int v[N];

    for(int i=0; i <  N; i++){
        cin >> v[i];
    }

    cout << has_zero(v, N);

    return 0;
}

bool has_zero(int a[], int n){
    int i;
    
    for (i = 0; i < n; i++){
        if (a[i] == 0){
            return true;
        }       
    }

    return false;     
}
