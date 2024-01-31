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

int main(){
    int n, v[]={7, 12, 5, 14, 9}, rspt=0;

    cin >> n;

    if(n == 1){
        return v[0];
    }
    else{
        rspt = max(v, n);
        cout << rspt;
    }

    return 0;
}