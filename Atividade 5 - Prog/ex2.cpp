#include <iostream>
using namespace std;

int multiplicaJesus(int *a, int *b);

int main(){
    int a=0, b=0;

    cin >> a >> b;

    cout << multiplicaJesus(&a, &b);

    return 0;
}

int multiplicaJesus(int *a, int *b){
    int total;

    total = (*a)*(*b);

    return total;
}
