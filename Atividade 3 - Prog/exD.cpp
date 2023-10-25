#include <iostream>
using namespace std;

int main(){
    float num1=0, num2=0;

    num1 = 7.3;
    
    float *fP;
    fP = &num1;
    cout << *fP << endl;
    num2 = *fP;
    cout << num2 << endl;
    cout << &num1 << endl;
    cout << &fP << endl;

    return 0;
}