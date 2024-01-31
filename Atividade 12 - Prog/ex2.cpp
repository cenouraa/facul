#include <iostream>
using namespace std;

int X (int num){
    if (num == 1 || num == 2)
        return num;
    else
        return X(num - 1) + num * X(num - 2);
}

int main(){
    int num, rspt=0;

    cin >> num;

    if(num == 1 || num == 2){
        return num;
    }
    else{
        rspt = X(num);
        cout << rspt;
    }

    return 0;
}

//Para um X(4), o total calculado no fim da execução é 13;