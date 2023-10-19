#include <iostream>

using namespace std;

void ordemEvetorzinho();

int main(){
    ordemEvetorzinho();

    return 0;
}

void ordemEvetorzinho(){
    int t=10, v[t]={0};

    for(int i=0; i < t; i++){
        cin >> v[i];
    }
    
    int i=0, j=0, aux=0;

    for(i=0; i < t; i++){
        
        for(j=0; j < t; j++){

            if(v[j+1] < v[j]){
                aux = v[j+1];
                v[j+1] = v[j];
                v[j] = aux;
            }
        }
    }

    for(i=0; i<t; i++){
        cout << v[i] << " ";
    }
}