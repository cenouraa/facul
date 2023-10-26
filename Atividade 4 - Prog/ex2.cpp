#include <iostream>
using namespace std;

int main(){
    int v[5]={1, 2, 3, 4, 5};
    int *p;

    for(int i=0; i<5; i++){
        *p = v[i];
        cout << *p << " ";
    }

    return 0;
}
