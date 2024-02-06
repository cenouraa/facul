#include <iostream>
using namespace std;

void selection(int *v, int n){
    int i, j, menor, temp;
    
    for (i = 0; i < n-1; i++){
        menor = i;
        
        for (j = i+1; j < n; j++){
            if (v[j] < v[menor])
                menor = j;
        }
        
        if (menor != i) {
            temp = v[i];
            v[i] = v[menor];
            v[menor] = temp;
        }
    }
}

int main(){
    int v1[]={7, 2, 5, 4, 9};
    int v2[] = {7, 5, 5, 3, 9};
    int v3[] = {1, 2, 3, 4};
    int v4[] = {4, 3, 2, 1};

    int n = sizeof(v1) / sizeof(v1[0]);

    selection(v1, n);

    for(int i=0; i<5; i++){
        cout << v1[i] << " ";
    }
    cout << endl;

    n = sizeof(v2) / sizeof(v2[0]);

    selection(v2, n);

    for(int i=0; i<5; i++){
        cout << v2[i] << " ";
    }
    cout << endl;

    n = sizeof(v3) / sizeof(v3[0]);

    selection(v3, n);

    for(int i=0; i<4; i++){
        cout << v3[i] << " ";
    }
    cout << endl;

    n = sizeof(v4) / sizeof(v4[0]);

    selection(v4, n);

    for(int i=0; i<4; i++){
        cout << v4[i] << " ";
    }
    cout << endl;

    return 0;
}